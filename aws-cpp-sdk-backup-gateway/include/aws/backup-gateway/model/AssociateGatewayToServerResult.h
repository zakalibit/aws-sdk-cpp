﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
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
namespace BackupGateway
{
namespace Model
{
  class AssociateGatewayToServerResult
  {
  public:
    AWS_BACKUPGATEWAY_API AssociateGatewayToServerResult();
    AWS_BACKUPGATEWAY_API AssociateGatewayToServerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPGATEWAY_API AssociateGatewayToServerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of a gateway.</p>
     */
    inline const Aws::String& GetGatewayArn() const{ return m_gatewayArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of a gateway.</p>
     */
    inline void SetGatewayArn(const Aws::String& value) { m_gatewayArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a gateway.</p>
     */
    inline void SetGatewayArn(Aws::String&& value) { m_gatewayArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a gateway.</p>
     */
    inline void SetGatewayArn(const char* value) { m_gatewayArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a gateway.</p>
     */
    inline AssociateGatewayToServerResult& WithGatewayArn(const Aws::String& value) { SetGatewayArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a gateway.</p>
     */
    inline AssociateGatewayToServerResult& WithGatewayArn(Aws::String&& value) { SetGatewayArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a gateway.</p>
     */
    inline AssociateGatewayToServerResult& WithGatewayArn(const char* value) { SetGatewayArn(value); return *this;}

  private:

    Aws::String m_gatewayArn;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
