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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALEVENTLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALEVENTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeK8sApiAbnormalEventList请求参数结构体
                */
                class DescribeK8sApiAbnormalEventListRequest : public AbstractModel
                {
                public:
                    DescribeK8sApiAbnormalEventListRequest();
                    ~DescribeK8sApiAbnormalEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。
<li>TimeRange - string -是否必填: 否 - 时间范围筛选 ["2022-03-31 16:55:00", "2022-03-31 17:00:00"]</li>
<li>MatchRules - string  - 是否必填: 否 -命中规则筛选</li>
<li>RiskLevel - string  - 是否必填: 否 -威胁等级筛选</li>
<li>Status - string  - 是否必填: 否 -事件状态筛选</li>
<li>MatchRuleType - string  - 是否必填: 否 -命中规则类型筛选</li>
<li>ClusterRunningStatus - string  - 是否必填: 否 -集群运行状态</li>
<li>ClusterName - string  - 是否必填: 否 -集群名称</li>
<li>ClusterID - string  - 是否必填: 否 -集群ID</li>
                     * @return Filters 过滤条件。
<li>TimeRange - string -是否必填: 否 - 时间范围筛选 ["2022-03-31 16:55:00", "2022-03-31 17:00:00"]</li>
<li>MatchRules - string  - 是否必填: 否 -命中规则筛选</li>
<li>RiskLevel - string  - 是否必填: 否 -威胁等级筛选</li>
<li>Status - string  - 是否必填: 否 -事件状态筛选</li>
<li>MatchRuleType - string  - 是否必填: 否 -命中规则类型筛选</li>
<li>ClusterRunningStatus - string  - 是否必填: 否 -集群运行状态</li>
<li>ClusterName - string  - 是否必填: 否 -集群名称</li>
<li>ClusterID - string  - 是否必填: 否 -集群ID</li>
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>TimeRange - string -是否必填: 否 - 时间范围筛选 ["2022-03-31 16:55:00", "2022-03-31 17:00:00"]</li>
<li>MatchRules - string  - 是否必填: 否 -命中规则筛选</li>
<li>RiskLevel - string  - 是否必填: 否 -威胁等级筛选</li>
<li>Status - string  - 是否必填: 否 -事件状态筛选</li>
<li>MatchRuleType - string  - 是否必填: 否 -命中规则类型筛选</li>
<li>ClusterRunningStatus - string  - 是否必填: 否 -集群运行状态</li>
<li>ClusterName - string  - 是否必填: 否 -集群名称</li>
<li>ClusterID - string  - 是否必填: 否 -集群ID</li>
                     * @param Filters 过滤条件。
<li>TimeRange - string -是否必填: 否 - 时间范围筛选 ["2022-03-31 16:55:00", "2022-03-31 17:00:00"]</li>
<li>MatchRules - string  - 是否必填: 否 -命中规则筛选</li>
<li>RiskLevel - string  - 是否必填: 否 -威胁等级筛选</li>
<li>Status - string  - 是否必填: 否 -事件状态筛选</li>
<li>MatchRuleType - string  - 是否必填: 否 -命中规则类型筛选</li>
<li>ClusterRunningStatus - string  - 是否必填: 否 -集群运行状态</li>
<li>ClusterName - string  - 是否必填: 否 -集群名称</li>
<li>ClusterID - string  - 是否必填: 否 -集群ID</li>
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取需要返回的数量，默认为10，最大值为100
                     * @return Limit 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10，最大值为100
                     * @param Limit 需要返回的数量，默认为10，最大值为100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param Offset 偏移量，默认为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return Order 排序方式
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式
                     * @param Order 排序方式
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序字段
LatestFoundTime: 最近生成时间
AlarmCount: 告警数量
                     * @return By 排序字段
LatestFoundTime: 最近生成时间
AlarmCount: 告警数量
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
LatestFoundTime: 最近生成时间
AlarmCount: 告警数量
                     * @param By 排序字段
LatestFoundTime: 最近生成时间
AlarmCount: 告警数量
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。
<li>TimeRange - string -是否必填: 否 - 时间范围筛选 ["2022-03-31 16:55:00", "2022-03-31 17:00:00"]</li>
<li>MatchRules - string  - 是否必填: 否 -命中规则筛选</li>
<li>RiskLevel - string  - 是否必填: 否 -威胁等级筛选</li>
<li>Status - string  - 是否必填: 否 -事件状态筛选</li>
<li>MatchRuleType - string  - 是否必填: 否 -命中规则类型筛选</li>
<li>ClusterRunningStatus - string  - 是否必填: 否 -集群运行状态</li>
<li>ClusterName - string  - 是否必填: 否 -集群名称</li>
<li>ClusterID - string  - 是否必填: 否 -集群ID</li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
LatestFoundTime: 最近生成时间
AlarmCount: 告警数量
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEK8SAPIABNORMALEVENTLISTREQUEST_H_
