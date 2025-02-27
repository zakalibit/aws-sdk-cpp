﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/APNSVoipSandboxChannelResponse.h>
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
namespace Pinpoint
{
namespace Model
{
  class DeleteApnsVoipSandboxChannelResult
  {
  public:
    AWS_PINPOINT_API DeleteApnsVoipSandboxChannelResult();
    AWS_PINPOINT_API DeleteApnsVoipSandboxChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINT_API DeleteApnsVoipSandboxChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const APNSVoipSandboxChannelResponse& GetAPNSVoipSandboxChannelResponse() const{ return m_aPNSVoipSandboxChannelResponse; }

    
    inline void SetAPNSVoipSandboxChannelResponse(const APNSVoipSandboxChannelResponse& value) { m_aPNSVoipSandboxChannelResponse = value; }

    
    inline void SetAPNSVoipSandboxChannelResponse(APNSVoipSandboxChannelResponse&& value) { m_aPNSVoipSandboxChannelResponse = std::move(value); }

    
    inline DeleteApnsVoipSandboxChannelResult& WithAPNSVoipSandboxChannelResponse(const APNSVoipSandboxChannelResponse& value) { SetAPNSVoipSandboxChannelResponse(value); return *this;}

    
    inline DeleteApnsVoipSandboxChannelResult& WithAPNSVoipSandboxChannelResponse(APNSVoipSandboxChannelResponse&& value) { SetAPNSVoipSandboxChannelResponse(std::move(value)); return *this;}

  private:

    APNSVoipSandboxChannelResponse m_aPNSVoipSandboxChannelResponse;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
