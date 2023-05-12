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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 子账号信息
                */
                class Account : public AbstractModel
                {
                public:
                    Account();
                    ~Account() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取账号名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName 账号名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账号名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AccountName 账号名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取账号描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 账号描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置账号描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 账号描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取读写权限策略。
- r：只读。
- w：只写。
- rw：读写。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Privilege 读写权限策略。
- r：只读。
- w：只写。
- rw：读写。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置读写权限策略。
- r：只读。
- w：只写。
- rw：读写。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Privilege 读写权限策略。
- r：只读。
- w：只写。
- rw：读写。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取只读路由策略。
- master：主节点。
- replication：从节点。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadonlyPolicy 只读路由策略。
- master：主节点。
- replication：从节点。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置只读路由策略。
- master：主节点。
- replication：从节点。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ReadonlyPolicy 只读路由策略。
- master：主节点。
- replication：从节点。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetReadonlyPolicy(const std::vector<std::string>& _readonlyPolicy);

                    /**
                     * 判断参数 ReadonlyPolicy 是否已赋值
                     * @return ReadonlyPolicy 是否已赋值
                     */
                    bool ReadonlyPolicyHasBeenSet() const;

                    /**
                     * 获取子账号状态.
- 1：账号变更中。
- 2：账号有效。
- 4：账号已删除。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 子账号状态.
- 1：账号变更中。
- 2：账号有效。
- 4：账号已删除。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置子账号状态.
- 1：账号变更中。
- 2：账号有效。
- 4：账号已删除。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 子账号状态.
- 1：账号变更中。
- 2：账号有效。
- 4：账号已删除。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 账号名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 账号描述信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 读写权限策略。
- r：只读。
- w：只写。
- rw：读写。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 只读路由策略。
- master：主节点。
- replication：从节点。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * 子账号状态.
- 1：账号变更中。
- 2：账号有效。
- 4：账号已删除。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_
