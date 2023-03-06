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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_STAFFROLE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_STAFFROLE_H_

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
                * 第三方应用集成员工角色信息
                */
                class StaffRole : public AbstractModel
                {
                public:
                    StaffRole();
                    ~StaffRole() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取角色id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleId 角色id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置角色id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RoleId 角色id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoleName 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RoleName 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                private:

                    /**
                     * 角色id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * 角色名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_STAFFROLE_H_
