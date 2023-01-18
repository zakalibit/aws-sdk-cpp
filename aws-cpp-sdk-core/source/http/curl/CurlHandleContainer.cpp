/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/curl/CurlHandleContainer.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <algorithm>

using namespace Aws::Utils::Logging;
using namespace Aws::Http;

static const char* CURL_HANDLE_CONTAINER_TAG = "CurlHandleContainer";

struct CurlHandleDeleter {
    void operator()(CURL* handle) { curl_easy_cleanup(handle); }
};

CurlHandleContainer::CurlHandleContainer(unsigned maxSize, long httpRequestTimeout, long connectTimeout, bool enableTcpKeepAlive,
                                        unsigned long tcpKeepAliveIntervalMs, long lowSpeedTime, unsigned long lowSpeedLimit) :
                m_maxPoolSize(maxSize), m_httpRequestTimeout(httpRequestTimeout), m_connectTimeout(connectTimeout), m_enableTcpKeepAlive(enableTcpKeepAlive),
                m_tcpKeepAliveIntervalMs(tcpKeepAliveIntervalMs), m_lowSpeedTime(lowSpeedTime), m_lowSpeedLimit(lowSpeedLimit), m_poolSize(0)
{
    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Initializing CurlHandleContainer with size " << maxSize);
}

CurlHandleContainer::~CurlHandleContainer()
{
    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Cleaning up CurlHandleContainer.");
    for (auto&& handle : m_handleContainer.ShutdownAndWait(m_poolSize))
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Cleaning up " << handle.curl.get());
        handle.curl.reset();
    }
}

CurlHandle CurlHandleContainer::AcquireCurlHandle()
{
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Attempting to acquire curl connection.");

    if(!m_handleContainer.HasResourcesAvailable())
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "No current connections available in pool. Attempting to create new connections.");
        CheckAndGrowPool();
    }

    auto handle = m_handleContainer.Acquire();
    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Connection has been released. Continuing.");
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Returning connection handle " << handle.curl.get());
    return handle;
}

void CurlHandleContainer::ReleaseCurlHandle(CurlHandle handle)
{
    if (handle.curl)
    {
        CURL* curl = handle.curl.get();
        curl_easy_reset(curl);
        SetDefaultOptionsOnHandle(curl);
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Releasing curl handle " << curl);
        m_handleContainer.Release(handle);
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Notified waiting threads.");
    }
}

void CurlHandleContainer::DestroyCurlHandle(CurlHandle handle)
{
    if (!handle.curl)
    {
        return;
    }

    handle.curl.reset();
    AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Destroy curl handle: " << handle.curl.get());
    {
        std::lock_guard<std::mutex> locker(m_containerLock);
        // Other threads could be blocked and waiting on m_handleContainer.Acquire()
        // If the handle is not released back to the pool, it could create a deadlock
        // Create a new handle and release that into the pool
        handle = CreateCurlHandleInPool();
    }
    if (handle.curl)
    {
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "Created replacement handle and released to pool: " << handle.curl.get());
    }
}


CurlHandle CurlHandleContainer::CreateCurlHandleInPool()
{
    CurlHandle handle;
    handle.curl = std::shared_ptr<CURL>{curl_easy_init(), CurlHandleDeleter{}};

    if (handle.curl)
    {
        SetDefaultOptionsOnHandle(handle.curl.get());
        m_handleContainer.Release(handle);
    }
    else
    {
        AWS_LOGSTREAM_ERROR(CURL_HANDLE_CONTAINER_TAG, "curl_easy_init failed to allocate.");
    }
    return handle;
}

bool CurlHandleContainer::CheckAndGrowPool()
{
    std::lock_guard<std::mutex> locker(m_containerLock);
    if (m_poolSize < m_maxPoolSize)
    {
        unsigned multiplier = m_poolSize > 0 ? m_poolSize : 1;
        unsigned amountToAdd = (std::min)(multiplier * 2, m_maxPoolSize - m_poolSize);
        AWS_LOGSTREAM_DEBUG(CURL_HANDLE_CONTAINER_TAG, "attempting to grow pool size by " << amountToAdd);

        unsigned actuallyAdded = 0;
        for (unsigned i = 0; i < amountToAdd; ++i)
        {
            auto curlHandle = CreateCurlHandleInPool();

            if (curlHandle.curl)
            {
                ++actuallyAdded;
            }
            else
            {
                break;
            }
        }

        AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Pool grown by " << actuallyAdded);
        m_poolSize += actuallyAdded;

        return actuallyAdded > 0;
    }

    AWS_LOGSTREAM_INFO(CURL_HANDLE_CONTAINER_TAG, "Pool cannot be grown any further, already at max size.");

    return false;
}

void CurlHandleContainer::SetDefaultOptionsOnHandle(CURL* handle)
{
    //for timeouts to work in a multi-threaded context,
    //always turn signals off. This also forces dns queries to
    //not be included in the timeout calculations.
    curl_easy_setopt(handle, CURLOPT_NOSIGNAL, 1L);
    curl_easy_setopt(handle, CURLOPT_TIMEOUT_MS, m_httpRequestTimeout);
    curl_easy_setopt(handle, CURLOPT_CONNECTTIMEOUT_MS, m_connectTimeout);
    curl_easy_setopt(handle, CURLOPT_LOW_SPEED_LIMIT, m_lowSpeedLimit);
    curl_easy_setopt(handle, CURLOPT_LOW_SPEED_TIME, m_lowSpeedTime < 1000 ? (m_lowSpeedTime == 0 ? 0 : 1) : m_lowSpeedTime / 1000);
    curl_easy_setopt(handle, CURLOPT_TCP_KEEPALIVE, m_enableTcpKeepAlive ? 1L : 0L);
    curl_easy_setopt(handle, CURLOPT_TCP_KEEPINTVL, m_tcpKeepAliveIntervalMs / 1000);
    curl_easy_setopt(handle, CURLOPT_TCP_KEEPIDLE, m_tcpKeepAliveIntervalMs / 1000);
#ifdef CURL_HAS_H2
    curl_easy_setopt(handle, CURLOPT_HTTP_VERSION, CURL_HTTP_VERSION_2_0);
#endif
}
