﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/Channel.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{
  class DescribeChannelResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API DescribeChannelResult();
    AWS_CHIMESDKMESSAGING_API DescribeChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API DescribeChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The channel details.</p>
     */
    inline const Channel& GetChannel() const{ return m_channel; }

    /**
     * <p>The channel details.</p>
     */
    inline void SetChannel(const Channel& value) { m_channel = value; }

    /**
     * <p>The channel details.</p>
     */
    inline void SetChannel(Channel&& value) { m_channel = std::move(value); }

    /**
     * <p>The channel details.</p>
     */
    inline DescribeChannelResult& WithChannel(const Channel& value) { SetChannel(value); return *this;}

    /**
     * <p>The channel details.</p>
     */
    inline DescribeChannelResult& WithChannel(Channel&& value) { SetChannel(std::move(value)); return *this;}

  private:

    Channel m_channel;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
