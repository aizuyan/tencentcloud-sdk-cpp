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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DELETEALIASDOMAINREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DELETEALIASDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Filter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DeleteAliasDomain请求参数结构体
                */
                class DeleteAliasDomainRequest : public AbstractModel
                {
                public:
                    DeleteAliasDomainRequest();
                    ~DeleteAliasDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param ZoneId 站点 ID。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>target-name<br>   按照【<strong>目标域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>alias-id<br>   按照【<strong>别称域名ID</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>alias-name<br>   按照【<strong>别称域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
                     * @return Filters 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>target-name<br>   按照【<strong>目标域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>alias-id<br>   按照【<strong>别称域名ID</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>alias-name<br>   按照【<strong>别称域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>target-name<br>   按照【<strong>目标域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>alias-id<br>   按照【<strong>别称域名ID</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>alias-name<br>   按照【<strong>别称域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
                     * @param Filters 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>target-name<br>   按照【<strong>目标域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>alias-id<br>   按照【<strong>别称域名ID</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>alias-name<br>   按照【<strong>别称域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 过滤条件，Filters.Values的上限为20。详细的过滤条件如下：
<li>target-name<br>   按照【<strong>目标域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>alias-id<br>   按照【<strong>别称域名ID</strong>】进行过滤。<br>   类型：String<br>   必选：否<li>alias-name<br>   按照【<strong>别称域名名称</strong>】进行过滤。<br>   类型：String<br>   必选：否</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DELETEALIASDOMAINREQUEST_H_
