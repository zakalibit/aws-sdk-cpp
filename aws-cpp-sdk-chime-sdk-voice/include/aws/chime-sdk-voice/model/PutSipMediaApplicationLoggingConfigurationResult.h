﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-voice/ChimeSDKVoice_EXPORTS.h>
#include <aws/chime-sdk-voice/model/SipMediaApplicationLoggingConfiguration.h>
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
namespace ChimeSDKVoice
{
namespace Model
{
  class PutSipMediaApplicationLoggingConfigurationResult
  {
  public:
    AWS_CHIMESDKVOICE_API PutSipMediaApplicationLoggingConfigurationResult();
    AWS_CHIMESDKVOICE_API PutSipMediaApplicationLoggingConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIMESDKVOICE_API PutSipMediaApplicationLoggingConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const SipMediaApplicationLoggingConfiguration& GetSipMediaApplicationLoggingConfiguration() const{ return m_sipMediaApplicationLoggingConfiguration; }

    
    inline void SetSipMediaApplicationLoggingConfiguration(const SipMediaApplicationLoggingConfiguration& value) { m_sipMediaApplicationLoggingConfiguration = value; }

    
    inline void SetSipMediaApplicationLoggingConfiguration(SipMediaApplicationLoggingConfiguration&& value) { m_sipMediaApplicationLoggingConfiguration = std::move(value); }

    
    inline PutSipMediaApplicationLoggingConfigurationResult& WithSipMediaApplicationLoggingConfiguration(const SipMediaApplicationLoggingConfiguration& value) { SetSipMediaApplicationLoggingConfiguration(value); return *this;}

    
    inline PutSipMediaApplicationLoggingConfigurationResult& WithSipMediaApplicationLoggingConfiguration(SipMediaApplicationLoggingConfiguration&& value) { SetSipMediaApplicationLoggingConfiguration(std::move(value)); return *this;}

  private:

    SipMediaApplicationLoggingConfiguration m_sipMediaApplicationLoggingConfiguration;
  };

} // namespace Model
} // namespace ChimeSDKVoice
} // namespace Aws
