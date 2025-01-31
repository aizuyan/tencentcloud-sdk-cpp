/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMWHITERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMWHITERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/Strategy.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyCustomWhiteRule请求参数结构体
                */
                class ModifyCustomWhiteRuleRequest : public AbstractModel
                {
                public:
                    ModifyCustomWhiteRuleRequest();
                    ~ModifyCustomWhiteRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取编辑的域名
                     * @return Domain 编辑的域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置编辑的域名
                     * @param Domain 编辑的域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取编辑的规则ID
                     * @return RuleId 编辑的规则ID
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置编辑的规则ID
                     * @param RuleId 编辑的规则ID
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取编辑的规则名称
                     * @return RuleName 编辑的规则名称
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置编辑的规则名称
                     * @param RuleName 编辑的规则名称
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。
                     * @return Bypass 放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。
                     */
                    std::string GetBypass() const;

                    /**
                     * 设置放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。
                     * @param Bypass 放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。
                     */
                    void SetBypass(const std::string& _bypass);

                    /**
                     * 判断参数 Bypass 是否已赋值
                     * @return Bypass 是否已赋值
                     */
                    bool BypassHasBeenSet() const;

                    /**
                     * 获取优先级，1~100的整数，数字越小，代表这条规则的执行优先级越高。
                     * @return SortId 优先级，1~100的整数，数字越小，代表这条规则的执行优先级越高。
                     */
                    uint64_t GetSortId() const;

                    /**
                     * 设置优先级，1~100的整数，数字越小，代表这条规则的执行优先级越高。
                     * @param SortId 优先级，1~100的整数，数字越小，代表这条规则的执行优先级越高。
                     */
                    void SetSortId(const uint64_t& _sortId);

                    /**
                     * 判断参数 SortId 是否已赋值
                     * @return SortId 是否已赋值
                     */
                    bool SortIdHasBeenSet() const;

                    /**
                     * 获取规则生效截止时间，0：永久生效，其它值为对应时间的时间戳。
                     * @return ExpireTime 规则生效截止时间，0：永久生效，其它值为对应时间的时间戳。
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置规则生效截止时间，0：永久生效，其它值为对应时间的时间戳。
                     * @param ExpireTime 规则生效截止时间，0：永久生效，其它值为对应时间的时间戳。
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取匹配条件数组
                     * @return Strategies 匹配条件数组
                     */
                    std::vector<Strategy> GetStrategies() const;

                    /**
                     * 设置匹配条件数组
                     * @param Strategies 匹配条件数组
                     */
                    void SetStrategies(const std::vector<Strategy>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     */
                    bool StrategiesHasBeenSet() const;

                private:

                    /**
                     * 编辑的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 编辑的规则ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 编辑的规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 放行时是否继续执行其它检查逻辑，继续执行地域封禁防护：geoip、继续执行CC策略防护：cc、继续执行WEB应用防护：owasp、继续执行AI引擎防护：ai、继续执行信息防泄漏防护：antileakage。如果多个勾选那么以,串接。
                     */
                    std::string m_bypass;
                    bool m_bypassHasBeenSet;

                    /**
                     * 优先级，1~100的整数，数字越小，代表这条规则的执行优先级越高。
                     */
                    uint64_t m_sortId;
                    bool m_sortIdHasBeenSet;

                    /**
                     * 规则生效截止时间，0：永久生效，其它值为对应时间的时间戳。
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 匹配条件数组
                     */
                    std::vector<Strategy> m_strategies;
                    bool m_strategiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYCUSTOMWHITERULEREQUEST_H_
