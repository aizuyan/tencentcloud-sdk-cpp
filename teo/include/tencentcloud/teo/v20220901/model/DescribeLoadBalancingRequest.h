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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOADBALANCINGREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOADBALANCINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AdvancedFilter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeLoadBalancing请求参数结构体
                */
                class DescribeLoadBalancingRequest : public AbstractModel
                {
                public:
                    DescribeLoadBalancingRequest();
                    ~DescribeLoadBalancingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页查询偏移量，默认为0。
                     * @return Offset 分页查询偏移量，默认为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量，默认为0。
                     * @param Offset 分页查询偏移量，默认为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页查询限制数目，默认为10，取值：1-1000。
                     * @return Limit 分页查询限制数目，默认为10，取值：1-1000。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目，默认为10，取值：1-1000。
                     * @param Limit 分页查询限制数目，默认为10，取值：1-1000。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-1a8df68z<br>   类型：String<br>   必选：否<br>   模糊查询：不支持
<li>load-balancing-id<br>   按照【<strong>负载均衡ID</strong>】进行过滤。负载均衡ID形如：lb-d21bfaf7-8d72-11ec-841d-00ff977fb3c8<br>   类型：String<br>   必选：否<br>   模糊查询：不支持
<li>host<br>   按照【<strong>负载均衡host</strong>】进行过滤。host形如：lb.tencent.com<br>   类型：String<br>   必选：否<br>   模糊查询：支持，模糊查询时仅支持一个host
                     * @return Filters 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-1a8df68z<br>   类型：String<br>   必选：否<br>   模糊查询：不支持
<li>load-balancing-id<br>   按照【<strong>负载均衡ID</strong>】进行过滤。负载均衡ID形如：lb-d21bfaf7-8d72-11ec-841d-00ff977fb3c8<br>   类型：String<br>   必选：否<br>   模糊查询：不支持
<li>host<br>   按照【<strong>负载均衡host</strong>】进行过滤。host形如：lb.tencent.com<br>   类型：String<br>   必选：否<br>   模糊查询：支持，模糊查询时仅支持一个host
                     */
                    std::vector<AdvancedFilter> GetFilters() const;

                    /**
                     * 设置过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-1a8df68z<br>   类型：String<br>   必选：否<br>   模糊查询：不支持
<li>load-balancing-id<br>   按照【<strong>负载均衡ID</strong>】进行过滤。负载均衡ID形如：lb-d21bfaf7-8d72-11ec-841d-00ff977fb3c8<br>   类型：String<br>   必选：否<br>   模糊查询：不支持
<li>host<br>   按照【<strong>负载均衡host</strong>】进行过滤。host形如：lb.tencent.com<br>   类型：String<br>   必选：否<br>   模糊查询：支持，模糊查询时仅支持一个host
                     * @param Filters 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-1a8df68z<br>   类型：String<br>   必选：否<br>   模糊查询：不支持
<li>load-balancing-id<br>   按照【<strong>负载均衡ID</strong>】进行过滤。负载均衡ID形如：lb-d21bfaf7-8d72-11ec-841d-00ff977fb3c8<br>   类型：String<br>   必选：否<br>   模糊查询：不支持
<li>host<br>   按照【<strong>负载均衡host</strong>】进行过滤。host形如：lb.tencent.com<br>   类型：String<br>   必选：否<br>   模糊查询：支持，模糊查询时仅支持一个host
                     */
                    void SetFilters(const std::vector<AdvancedFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 分页查询偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目，默认为10，取值：1-1000。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>zone-id<br>   按照【<strong>站点ID</strong>】进行过滤。站点ID形如：zone-1a8df68z<br>   类型：String<br>   必选：否<br>   模糊查询：不支持
<li>load-balancing-id<br>   按照【<strong>负载均衡ID</strong>】进行过滤。负载均衡ID形如：lb-d21bfaf7-8d72-11ec-841d-00ff977fb3c8<br>   类型：String<br>   必选：否<br>   模糊查询：不支持
<li>host<br>   按照【<strong>负载均衡host</strong>】进行过滤。host形如：lb.tencent.com<br>   类型：String<br>   必选：否<br>   模糊查询：支持，模糊查询时仅支持一个host
                     */
                    std::vector<AdvancedFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBELOADBALANCINGREQUEST_H_
