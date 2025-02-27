﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/RuleGroup.h>
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
namespace WAFRegional
{
namespace Model
{
  class CreateRuleGroupResult
  {
  public:
    AWS_WAFREGIONAL_API CreateRuleGroupResult();
    AWS_WAFREGIONAL_API CreateRuleGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WAFREGIONAL_API CreateRuleGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An empty <a>RuleGroup</a>.</p>
     */
    inline const RuleGroup& GetRuleGroup() const{ return m_ruleGroup; }

    /**
     * <p>An empty <a>RuleGroup</a>.</p>
     */
    inline void SetRuleGroup(const RuleGroup& value) { m_ruleGroup = value; }

    /**
     * <p>An empty <a>RuleGroup</a>.</p>
     */
    inline void SetRuleGroup(RuleGroup&& value) { m_ruleGroup = std::move(value); }

    /**
     * <p>An empty <a>RuleGroup</a>.</p>
     */
    inline CreateRuleGroupResult& WithRuleGroup(const RuleGroup& value) { SetRuleGroup(value); return *this;}

    /**
     * <p>An empty <a>RuleGroup</a>.</p>
     */
    inline CreateRuleGroupResult& WithRuleGroup(RuleGroup&& value) { SetRuleGroup(std::move(value)); return *this;}


    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRuleGroup</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRuleGroup</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const Aws::String& value) { m_changeToken = value; }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRuleGroup</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(Aws::String&& value) { m_changeToken = std::move(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRuleGroup</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline void SetChangeToken(const char* value) { m_changeToken.assign(value); }

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRuleGroup</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRuleGroupResult& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRuleGroup</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRuleGroupResult& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}

    /**
     * <p>The <code>ChangeToken</code> that you used to submit the
     * <code>CreateRuleGroup</code> request. You can also use this value to query the
     * status of the request. For more information, see
     * <a>GetChangeTokenStatus</a>.</p>
     */
    inline CreateRuleGroupResult& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}

  private:

    RuleGroup m_ruleGroup;

    Aws::String m_changeToken;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
