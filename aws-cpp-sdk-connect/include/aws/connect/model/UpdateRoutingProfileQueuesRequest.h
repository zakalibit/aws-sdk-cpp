﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connect/model/RoutingProfileQueueConfig.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateRoutingProfileQueuesRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateRoutingProfileQueuesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoutingProfileQueues"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateRoutingProfileQueuesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateRoutingProfileQueuesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateRoutingProfileQueuesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline const Aws::String& GetRoutingProfileId() const{ return m_routingProfileId; }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline bool RoutingProfileIdHasBeenSet() const { return m_routingProfileIdHasBeenSet; }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline void SetRoutingProfileId(const Aws::String& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = value; }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline void SetRoutingProfileId(Aws::String&& value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId = std::move(value); }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline void SetRoutingProfileId(const char* value) { m_routingProfileIdHasBeenSet = true; m_routingProfileId.assign(value); }

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline UpdateRoutingProfileQueuesRequest& WithRoutingProfileId(const Aws::String& value) { SetRoutingProfileId(value); return *this;}

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline UpdateRoutingProfileQueuesRequest& WithRoutingProfileId(Aws::String&& value) { SetRoutingProfileId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the routing profile.</p>
     */
    inline UpdateRoutingProfileQueuesRequest& WithRoutingProfileId(const char* value) { SetRoutingProfileId(value); return *this;}


    /**
     * <p>The queues to be updated for this routing profile. Queues must first be
     * associated to the routing profile. You can do this using
     * AssociateRoutingProfileQueues.</p>
     */
    inline const Aws::Vector<RoutingProfileQueueConfig>& GetQueueConfigs() const{ return m_queueConfigs; }

    /**
     * <p>The queues to be updated for this routing profile. Queues must first be
     * associated to the routing profile. You can do this using
     * AssociateRoutingProfileQueues.</p>
     */
    inline bool QueueConfigsHasBeenSet() const { return m_queueConfigsHasBeenSet; }

    /**
     * <p>The queues to be updated for this routing profile. Queues must first be
     * associated to the routing profile. You can do this using
     * AssociateRoutingProfileQueues.</p>
     */
    inline void SetQueueConfigs(const Aws::Vector<RoutingProfileQueueConfig>& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs = value; }

    /**
     * <p>The queues to be updated for this routing profile. Queues must first be
     * associated to the routing profile. You can do this using
     * AssociateRoutingProfileQueues.</p>
     */
    inline void SetQueueConfigs(Aws::Vector<RoutingProfileQueueConfig>&& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs = std::move(value); }

    /**
     * <p>The queues to be updated for this routing profile. Queues must first be
     * associated to the routing profile. You can do this using
     * AssociateRoutingProfileQueues.</p>
     */
    inline UpdateRoutingProfileQueuesRequest& WithQueueConfigs(const Aws::Vector<RoutingProfileQueueConfig>& value) { SetQueueConfigs(value); return *this;}

    /**
     * <p>The queues to be updated for this routing profile. Queues must first be
     * associated to the routing profile. You can do this using
     * AssociateRoutingProfileQueues.</p>
     */
    inline UpdateRoutingProfileQueuesRequest& WithQueueConfigs(Aws::Vector<RoutingProfileQueueConfig>&& value) { SetQueueConfigs(std::move(value)); return *this;}

    /**
     * <p>The queues to be updated for this routing profile. Queues must first be
     * associated to the routing profile. You can do this using
     * AssociateRoutingProfileQueues.</p>
     */
    inline UpdateRoutingProfileQueuesRequest& AddQueueConfigs(const RoutingProfileQueueConfig& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs.push_back(value); return *this; }

    /**
     * <p>The queues to be updated for this routing profile. Queues must first be
     * associated to the routing profile. You can do this using
     * AssociateRoutingProfileQueues.</p>
     */
    inline UpdateRoutingProfileQueuesRequest& AddQueueConfigs(RoutingProfileQueueConfig&& value) { m_queueConfigsHasBeenSet = true; m_queueConfigs.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_routingProfileId;
    bool m_routingProfileIdHasBeenSet = false;

    Aws::Vector<RoutingProfileQueueConfig> m_queueConfigs;
    bool m_queueConfigsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
