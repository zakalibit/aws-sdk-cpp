﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/JobSummary.h>
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
namespace Macie2
{
namespace Model
{
  class ListClassificationJobsResult
  {
  public:
    AWS_MACIE2_API ListClassificationJobsResult();
    AWS_MACIE2_API ListClassificationJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API ListClassificationJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each job that matches the filter criteria
     * specified in the request.</p>
     */
    inline const Aws::Vector<JobSummary>& GetItems() const{ return m_items; }

    /**
     * <p>An array of objects, one for each job that matches the filter criteria
     * specified in the request.</p>
     */
    inline void SetItems(const Aws::Vector<JobSummary>& value) { m_items = value; }

    /**
     * <p>An array of objects, one for each job that matches the filter criteria
     * specified in the request.</p>
     */
    inline void SetItems(Aws::Vector<JobSummary>&& value) { m_items = std::move(value); }

    /**
     * <p>An array of objects, one for each job that matches the filter criteria
     * specified in the request.</p>
     */
    inline ListClassificationJobsResult& WithItems(const Aws::Vector<JobSummary>& value) { SetItems(value); return *this;}

    /**
     * <p>An array of objects, one for each job that matches the filter criteria
     * specified in the request.</p>
     */
    inline ListClassificationJobsResult& WithItems(Aws::Vector<JobSummary>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each job that matches the filter criteria
     * specified in the request.</p>
     */
    inline ListClassificationJobsResult& AddItems(const JobSummary& value) { m_items.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each job that matches the filter criteria
     * specified in the request.</p>
     */
    inline ListClassificationJobsResult& AddItems(JobSummary&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListClassificationJobsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListClassificationJobsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline ListClassificationJobsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<JobSummary> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
