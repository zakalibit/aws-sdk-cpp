﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>

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
namespace SESV2
{
namespace Model
{
  /**
   * <p>An HTTP 200 response if the request succeeds, or an error message if the
   * request fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/PutConfigurationSetTrackingOptionsResponse">AWS
   * API Reference</a></p>
   */
  class PutConfigurationSetTrackingOptionsResult
  {
  public:
    AWS_SESV2_API PutConfigurationSetTrackingOptionsResult();
    AWS_SESV2_API PutConfigurationSetTrackingOptionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SESV2_API PutConfigurationSetTrackingOptionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
