﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceBundle.h>
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
namespace WorkSpaces
{
namespace Model
{
  class DescribeWorkspaceBundlesResult
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspaceBundlesResult();
    AWS_WORKSPACES_API DescribeWorkspaceBundlesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspaceBundlesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the bundles.</p>
     */
    inline const Aws::Vector<WorkspaceBundle>& GetBundles() const{ return m_bundles; }

    /**
     * <p>Information about the bundles.</p>
     */
    inline void SetBundles(const Aws::Vector<WorkspaceBundle>& value) { m_bundles = value; }

    /**
     * <p>Information about the bundles.</p>
     */
    inline void SetBundles(Aws::Vector<WorkspaceBundle>&& value) { m_bundles = std::move(value); }

    /**
     * <p>Information about the bundles.</p>
     */
    inline DescribeWorkspaceBundlesResult& WithBundles(const Aws::Vector<WorkspaceBundle>& value) { SetBundles(value); return *this;}

    /**
     * <p>Information about the bundles.</p>
     */
    inline DescribeWorkspaceBundlesResult& WithBundles(Aws::Vector<WorkspaceBundle>&& value) { SetBundles(std::move(value)); return *this;}

    /**
     * <p>Information about the bundles.</p>
     */
    inline DescribeWorkspaceBundlesResult& AddBundles(const WorkspaceBundle& value) { m_bundles.push_back(value); return *this; }

    /**
     * <p>Information about the bundles.</p>
     */
    inline DescribeWorkspaceBundlesResult& AddBundles(WorkspaceBundle&& value) { m_bundles.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. This token is valid for one day and
     * must be used within that time frame.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. This token is valid for one day and
     * must be used within that time frame.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. This token is valid for one day and
     * must be used within that time frame.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. This token is valid for one day and
     * must be used within that time frame.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. This token is valid for one day and
     * must be used within that time frame.</p>
     */
    inline DescribeWorkspaceBundlesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. This token is valid for one day and
     * must be used within that time frame.</p>
     */
    inline DescribeWorkspaceBundlesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. This token is valid for one day and
     * must be used within that time frame.</p>
     */
    inline DescribeWorkspaceBundlesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WorkspaceBundle> m_bundles;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
