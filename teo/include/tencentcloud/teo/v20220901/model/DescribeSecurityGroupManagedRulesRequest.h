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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYGROUPMANAGEDRULESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYGROUPMANAGEDRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeSecurityGroupManagedRules请求参数结构体
                */
                class DescribeSecurityGroupManagedRulesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityGroupManagedRulesRequest();
                    ~DescribeSecurityGroupManagedRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点Id。
                     * @return ZoneId 站点Id。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点Id。
                     * @param ZoneId 站点Id。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取子域名/应用名。
                     * @return Entity 子域名/应用名。
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置子域名/应用名。
                     * @param Entity 子域名/应用名。
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取分页查询偏移量。默认值：0。
                     * @return Offset 分页查询偏移量。默认值：0。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询偏移量。默认值：0。
                     * @param Offset 分页查询偏移量。默认值：0。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页查询限制数目。默认值：20，最大值：1000。
                     * @return Limit 分页查询限制数目。默认值：20，最大值：1000。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询限制数目。默认值：20，最大值：1000。
                     * @param Limit 分页查询限制数目。默认值：20，最大值：1000。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 站点Id。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子域名/应用名。
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 分页查询偏移量。默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询限制数目。默认值：20，最大值：1000。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBESECURITYGROUPMANAGEDRULESREQUEST_H_
