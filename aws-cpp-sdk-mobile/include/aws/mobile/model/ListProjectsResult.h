﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mobile/model/ProjectSummary.h>
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
namespace Mobile
{
namespace Model
{
  /**
   * <p> Result structure used for requests to list projects in AWS Mobile Hub.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mobile-2017-07-01/ListProjectsResult">AWS
   * API Reference</a></p>
   */
  class ListProjectsResult
  {
  public:
    AWS_MOBILE_API ListProjectsResult();
    AWS_MOBILE_API ListProjectsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MOBILE_API ListProjectsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::Vector<ProjectSummary>& GetProjects() const{ return m_projects; }

    
    inline void SetProjects(const Aws::Vector<ProjectSummary>& value) { m_projects = value; }

    
    inline void SetProjects(Aws::Vector<ProjectSummary>&& value) { m_projects = std::move(value); }

    
    inline ListProjectsResult& WithProjects(const Aws::Vector<ProjectSummary>& value) { SetProjects(value); return *this;}

    
    inline ListProjectsResult& WithProjects(Aws::Vector<ProjectSummary>&& value) { SetProjects(std::move(value)); return *this;}

    
    inline ListProjectsResult& AddProjects(const ProjectSummary& value) { m_projects.push_back(value); return *this; }

    
    inline ListProjectsResult& AddProjects(ProjectSummary&& value) { m_projects.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListProjectsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListProjectsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListProjectsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ProjectSummary> m_projects;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Mobile
} // namespace Aws
