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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_OPENAUDITSERVICEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_OPENAUDITSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AuditRuleFilters.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * OpenAuditService请求参数结构体
                */
                class OpenAuditServiceRequest : public AbstractModel
                {
                public:
                    OpenAuditServiceRequest();
                    ~OpenAuditServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取CDB实例ID
                     * @return InstanceId CDB实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置CDB实例ID
                     * @param InstanceId CDB实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     * @return LogExpireDay 审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     * @param LogExpireDay 审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     */
                    void SetLogExpireDay(const uint64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取高频审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
                     * @return HighLogExpireDay 高频审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
                     */
                    uint64_t GetHighLogExpireDay() const;

                    /**
                     * 设置高频审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
                     * @param HighLogExpireDay 高频审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
                     */
                    void SetHighLogExpireDay(const uint64_t& _highLogExpireDay);

                    /**
                     * 判断参数 HighLogExpireDay 是否已赋值
                     * @return HighLogExpireDay 是否已赋值
                     */
                    bool HighLogExpireDayHasBeenSet() const;

                    /**
                     * 获取审计规则。同RuleTemplateIds都不填是全审计。
                     * @return AuditRuleFilters 审计规则。同RuleTemplateIds都不填是全审计。
                     */
                    std::vector<AuditRuleFilters> GetAuditRuleFilters() const;

                    /**
                     * 设置审计规则。同RuleTemplateIds都不填是全审计。
                     * @param AuditRuleFilters 审计规则。同RuleTemplateIds都不填是全审计。
                     */
                    void SetAuditRuleFilters(const std::vector<AuditRuleFilters>& _auditRuleFilters);

                    /**
                     * 判断参数 AuditRuleFilters 是否已赋值
                     * @return AuditRuleFilters 是否已赋值
                     */
                    bool AuditRuleFiltersHasBeenSet() const;

                    /**
                     * 获取规则模版ID。同AuditRuleFilters都不填是全审计。
                     * @return RuleTemplateIds 规则模版ID。同AuditRuleFilters都不填是全审计。
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置规则模版ID。同AuditRuleFilters都不填是全审计。
                     * @param RuleTemplateIds 规则模版ID。同AuditRuleFilters都不填是全审计。
                     */
                    void SetRuleTemplateIds(const std::vector<std::string>& _ruleTemplateIds);

                    /**
                     * 判断参数 RuleTemplateIds 是否已赋值
                     * @return RuleTemplateIds 是否已赋值
                     */
                    bool RuleTemplateIdsHasBeenSet() const;

                private:

                    /**
                     * CDB实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年；
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * 高频审计日志保存时长。支持值包括：
7 - 一周
30 - 一个月；
                     */
                    uint64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * 审计规则。同RuleTemplateIds都不填是全审计。
                     */
                    std::vector<AuditRuleFilters> m_auditRuleFilters;
                    bool m_auditRuleFiltersHasBeenSet;

                    /**
                     * 规则模版ID。同AuditRuleFilters都不填是全审计。
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_OPENAUDITSERVICEREQUEST_H_
