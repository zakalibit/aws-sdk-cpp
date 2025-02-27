﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECRPublic
{
namespace Model
{
  class DeleteRepositoryPolicyResult
  {
  public:
    AWS_ECRPUBLIC_API DeleteRepositoryPolicyResult();
    AWS_ECRPUBLIC_API DeleteRepositoryPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECRPUBLIC_API DeleteRepositoryPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The registry ID that's associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The registry ID that's associated with the request.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }

    /**
     * <p>The registry ID that's associated with the request.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }

    /**
     * <p>The registry ID that's associated with the request.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }

    /**
     * <p>The registry ID that's associated with the request.</p>
     */
    inline DeleteRepositoryPolicyResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The registry ID that's associated with the request.</p>
     */
    inline DeleteRepositoryPolicyResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The registry ID that's associated with the request.</p>
     */
    inline DeleteRepositoryPolicyResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The repository name that's associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The repository name that's associated with the request.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }

    /**
     * <p>The repository name that's associated with the request.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }

    /**
     * <p>The repository name that's associated with the request.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }

    /**
     * <p>The repository name that's associated with the request.</p>
     */
    inline DeleteRepositoryPolicyResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository name that's associated with the request.</p>
     */
    inline DeleteRepositoryPolicyResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository name that's associated with the request.</p>
     */
    inline DeleteRepositoryPolicyResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The JSON repository policy that was deleted from the repository.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }

    /**
     * <p>The JSON repository policy that was deleted from the repository.</p>
     */
    inline void SetPolicyText(const Aws::String& value) { m_policyText = value; }

    /**
     * <p>The JSON repository policy that was deleted from the repository.</p>
     */
    inline void SetPolicyText(Aws::String&& value) { m_policyText = std::move(value); }

    /**
     * <p>The JSON repository policy that was deleted from the repository.</p>
     */
    inline void SetPolicyText(const char* value) { m_policyText.assign(value); }

    /**
     * <p>The JSON repository policy that was deleted from the repository.</p>
     */
    inline DeleteRepositoryPolicyResult& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}

    /**
     * <p>The JSON repository policy that was deleted from the repository.</p>
     */
    inline DeleteRepositoryPolicyResult& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}

    /**
     * <p>The JSON repository policy that was deleted from the repository.</p>
     */
    inline DeleteRepositoryPolicyResult& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}

  private:

    Aws::String m_registryId;

    Aws::String m_repositoryName;

    Aws::String m_policyText;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
