﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{
  class UpdateChannelResult
  {
  public:
    AWS_CHIMESDKMESSAGING_API UpdateChannelResult();
    AWS_CHIMESDKMESSAGING_API UpdateChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKMESSAGING_API UpdateChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArn = value; }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel.</p>
     */
    inline UpdateChannelResult& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline UpdateChannelResult& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel.</p>
     */
    inline UpdateChannelResult& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}

  private:

    Aws::String m_channelArn;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
