﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/DefinitionInformation.h>
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
namespace Greengrass
{
namespace Model
{
  class ListCoreDefinitionsResult
  {
  public:
    AWS_GREENGRASS_API ListCoreDefinitionsResult();
    AWS_GREENGRASS_API ListCoreDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListCoreDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Information about a definition.
     */
    inline const Aws::Vector<DefinitionInformation>& GetDefinitions() const{ return m_definitions; }

    /**
     * Information about a definition.
     */
    inline void SetDefinitions(const Aws::Vector<DefinitionInformation>& value) { m_definitions = value; }

    /**
     * Information about a definition.
     */
    inline void SetDefinitions(Aws::Vector<DefinitionInformation>&& value) { m_definitions = std::move(value); }

    /**
     * Information about a definition.
     */
    inline ListCoreDefinitionsResult& WithDefinitions(const Aws::Vector<DefinitionInformation>& value) { SetDefinitions(value); return *this;}

    /**
     * Information about a definition.
     */
    inline ListCoreDefinitionsResult& WithDefinitions(Aws::Vector<DefinitionInformation>&& value) { SetDefinitions(std::move(value)); return *this;}

    /**
     * Information about a definition.
     */
    inline ListCoreDefinitionsResult& AddDefinitions(const DefinitionInformation& value) { m_definitions.push_back(value); return *this; }

    /**
     * Information about a definition.
     */
    inline ListCoreDefinitionsResult& AddDefinitions(DefinitionInformation&& value) { m_definitions.push_back(std::move(value)); return *this; }


    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListCoreDefinitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListCoreDefinitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline ListCoreDefinitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DefinitionInformation> m_definitions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
