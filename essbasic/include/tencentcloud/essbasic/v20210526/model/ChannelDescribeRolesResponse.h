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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEROLESRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEROLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/ChannelRole.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelDescribeRoles返回参数结构体
                */
                class ChannelDescribeRolesResponse : public AbstractModel
                {
                public:
                    ChannelDescribeRolesResponse();
                    ~ChannelDescribeRolesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取页面偏移量，最大2000
                     * @return Offset 页面偏移量，最大2000
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询数量，最大200
                     * @return Limit 查询数量，最大200
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取查询角色的总数量
                     * @return TotalCount 查询角色的总数量
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取角色信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelRoles 角色信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChannelRole> GetChannelRoles() const;

                    /**
                     * 判断参数 ChannelRoles 是否已赋值
                     * @return ChannelRoles 是否已赋值
                     */
                    bool ChannelRolesHasBeenSet() const;

                private:

                    /**
                     * 页面偏移量，最大2000
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询数量，最大200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 查询角色的总数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 角色信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChannelRole> m_channelRoles;
                    bool m_channelRolesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELDESCRIBEROLESRESPONSE_H_
