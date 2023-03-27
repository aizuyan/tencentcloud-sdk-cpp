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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FAILEDCREATEROLEDATA_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FAILEDCREATEROLEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 绑定失败的用户角色信息
                */
                class FailedCreateRoleData : public AbstractModel
                {
                public:
                    FailedCreateRoleData();
                    ~FailedCreateRoleData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户userId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserId 用户userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取角色RoleId列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleIds 角色RoleId列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetRoleIds() const;

                    /**
                     * 设置角色RoleId列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RoleIds 角色RoleId列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRoleIds(const std::vector<std::string>& _roleIds);

                    /**
                     * 判断参数 RoleIds 是否已赋值
                     * @return RoleIds 是否已赋值
                     */
                    bool RoleIdsHasBeenSet() const;

                private:

                    /**
                     * 用户userId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 角色RoleId列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_roleIds;
                    bool m_roleIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FAILEDCREATEROLEDATA_H_
