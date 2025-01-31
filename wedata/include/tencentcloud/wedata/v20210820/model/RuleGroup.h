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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUP_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupExecStrategy.h>
#include <tencentcloud/wedata/v20210820/model/RuleGroupSubscribe.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 数据质量规则组
                */
                class RuleGroup : public AbstractModel
                {
                public:
                    RuleGroup();
                    ~RuleGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleGroupId 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuleGroupId() const;

                    /**
                     * 设置规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleGroupId 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleGroupId(const uint64_t& _ruleGroupId);

                    /**
                     * 判断参数 RuleGroupId 是否已赋值
                     * @return RuleGroupId 是否已赋值
                     */
                    bool RuleGroupIdHasBeenSet() const;

                    /**
                     * 获取数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceId 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasourceId 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatasourceName() const;

                    /**
                     * 设置数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasourceName 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasourceName(const std::string& _datasourceName);

                    /**
                     * 判断参数 DatasourceName 是否已赋值
                     * @return DatasourceName 是否已赋值
                     */
                    bool DatasourceNameHasBeenSet() const;

                    /**
                     * 获取数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatasourceType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDatasourceType() const;

                    /**
                     * 设置数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatasourceType 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatasourceType(const uint64_t& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     */
                    bool DatasourceTypeHasBeenSet() const;

                    /**
                     * 获取监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorType 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetMonitorType() const;

                    /**
                     * 设置监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MonitorType 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMonitorType(const uint64_t& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取关联数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 关联数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置关联数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableName 关联数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取关联数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableId 关联数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableId() const;

                    /**
                     * 设置关联数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableId 关联数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableId(const std::string& _tableId);

                    /**
                     * 判断参数 TableId 是否已赋值
                     * @return TableId 是否已赋值
                     */
                    bool TableIdHasBeenSet() const;

                    /**
                     * 获取关联数据表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerName 关联数据表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableOwnerName() const;

                    /**
                     * 设置关联数据表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableOwnerName 关联数据表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableOwnerName(const std::string& _tableOwnerName);

                    /**
                     * 判断参数 TableOwnerName 是否已赋值
                     * @return TableOwnerName 是否已赋值
                     */
                    bool TableOwnerNameHasBeenSet() const;

                    /**
                     * 获取执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecStrategy 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleGroupExecStrategy GetExecStrategy() const;

                    /**
                     * 设置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExecStrategy 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExecStrategy(const RuleGroupExecStrategy& _execStrategy);

                    /**
                     * 判断参数 ExecStrategy 是否已赋值
                     * @return ExecStrategy 是否已赋值
                     */
                    bool ExecStrategyHasBeenSet() const;

                    /**
                     * 获取执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Subscription 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleGroupSubscribe GetSubscription() const;

                    /**
                     * 设置执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Subscription 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubscription(const RuleGroupSubscribe& _subscription);

                    /**
                     * 判断参数 Subscription 是否已赋值
                     * @return Subscription 是否已赋值
                     */
                    bool SubscriptionHasBeenSet() const;

                    /**
                     * 获取数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseId 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatabaseId() const;

                    /**
                     * 设置数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatabaseId 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatabaseId(const std::string& _databaseId);

                    /**
                     * 判断参数 DatabaseId 是否已赋值
                     * @return DatabaseId 是否已赋值
                     */
                    bool DatabaseIdHasBeenSet() const;

                    /**
                     * 获取数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DatabaseName 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取是否有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permission 是否有权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetPermission() const;

                    /**
                     * 设置是否有权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Permission 是否有权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPermission(const bool& _permission);

                    /**
                     * 判断参数 Permission 是否已赋值
                     * @return Permission 是否已赋值
                     */
                    bool PermissionHasBeenSet() const;

                    /**
                     * 获取已经配置的规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleCount 已经配置的规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetRuleCount() const;

                    /**
                     * 设置已经配置的规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleCount 已经配置的规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleCount(const uint64_t& _ruleCount);

                    /**
                     * 判断参数 RuleCount 是否已赋值
                     * @return RuleCount 是否已赋值
                     */
                    bool RuleCountHasBeenSet() const;

                    /**
                     * 获取监控状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorStatus 监控状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetMonitorStatus() const;

                    /**
                     * 设置监控状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MonitorStatus 监控状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMonitorStatus(const bool& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取表负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableOwnerUserId 表负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTableOwnerUserId() const;

                    /**
                     * 设置表负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableOwnerUserId 表负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableOwnerUserId(const uint64_t& _tableOwnerUserId);

                    /**
                     * 判断参数 TableOwnerUserId 是否已赋值
                     * @return TableOwnerUserId 是否已赋值
                     */
                    bool TableOwnerUserIdHasBeenSet() const;

                private:

                    /**
                     * 规则组Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleGroupId;
                    bool m_ruleGroupIdHasBeenSet;

                    /**
                     * 数据源Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 数据源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_datasourceName;
                    bool m_datasourceNameHasBeenSet;

                    /**
                     * 数据源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                    /**
                     * 监控类型 1.未配置, 2.关联生产调度, 3.离线周期检测
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 关联数据表名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 关联数据表Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableId;
                    bool m_tableIdHasBeenSet;

                    /**
                     * 关联数据表负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableOwnerName;
                    bool m_tableOwnerNameHasBeenSet;

                    /**
                     * 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleGroupExecStrategy m_execStrategy;
                    bool m_execStrategyHasBeenSet;

                    /**
                     * 执行策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RuleGroupSubscribe m_subscription;
                    bool m_subscriptionHasBeenSet;

                    /**
                     * 数据库id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseId;
                    bool m_databaseIdHasBeenSet;

                    /**
                     * 数据库名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 是否有权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_permission;
                    bool m_permissionHasBeenSet;

                    /**
                     * 已经配置的规则数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_ruleCount;
                    bool m_ruleCountHasBeenSet;

                    /**
                     * 监控状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 表负责人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tableOwnerUserId;
                    bool m_tableOwnerUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEGROUP_H_
