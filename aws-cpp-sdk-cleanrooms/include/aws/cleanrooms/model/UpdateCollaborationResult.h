﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/Collaboration.h>
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
namespace CleanRooms
{
namespace Model
{
  class UpdateCollaborationResult
  {
  public:
    AWS_CLEANROOMS_API UpdateCollaborationResult();
    AWS_CLEANROOMS_API UpdateCollaborationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLEANROOMS_API UpdateCollaborationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The entire collaboration that has been updated.</p>
     */
    inline const Collaboration& GetCollaboration() const{ return m_collaboration; }

    /**
     * <p>The entire collaboration that has been updated.</p>
     */
    inline void SetCollaboration(const Collaboration& value) { m_collaboration = value; }

    /**
     * <p>The entire collaboration that has been updated.</p>
     */
    inline void SetCollaboration(Collaboration&& value) { m_collaboration = std::move(value); }

    /**
     * <p>The entire collaboration that has been updated.</p>
     */
    inline UpdateCollaborationResult& WithCollaboration(const Collaboration& value) { SetCollaboration(value); return *this;}

    /**
     * <p>The entire collaboration that has been updated.</p>
     */
    inline UpdateCollaborationResult& WithCollaboration(Collaboration&& value) { SetCollaboration(std::move(value)); return *this;}

  private:

    Collaboration m_collaboration;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
