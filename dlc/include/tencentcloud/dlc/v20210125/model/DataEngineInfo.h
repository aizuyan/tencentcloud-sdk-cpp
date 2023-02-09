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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/TagInfo.h>
#include <tencentcloud/dlc/v20210125/model/CrontabResumeSuspendStrategy.h>
#include <tencentcloud/dlc/v20210125/model/NetworkConnection.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DataEngine详细信息
                */
                class DataEngineInfo : public AbstractModel
                {
                public:
                    DataEngineInfo();
                    ~DataEngineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DataEngine名称
                     * @return DataEngineName DataEngine名称
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置DataEngine名称
                     * @param DataEngineName DataEngine名称
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取引擎类型 spark/presto
                     * @return EngineType 引擎类型 spark/presto
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置引擎类型 spark/presto
                     * @param EngineType 引擎类型 spark/presto
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取集群资源类型 spark_private/presto_private/presto_cu/spark_cu
                     * @return ClusterType 集群资源类型 spark_private/presto_private/presto_cu/spark_cu
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群资源类型 spark_private/presto_private/presto_cu/spark_cu
                     * @param ClusterType 集群资源类型 spark_private/presto_private/presto_cu/spark_cu
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取引用ID
                     * @return QuotaId 引用ID
                     */
                    std::string GetQuotaId() const;

                    /**
                     * 设置引用ID
                     * @param QuotaId 引用ID
                     */
                    void SetQuotaId(const std::string& _quotaId);

                    /**
                     * 判断参数 QuotaId 是否已赋值
                     * @return QuotaId 是否已赋值
                     */
                    bool QuotaIdHasBeenSet() const;

                    /**
                     * 获取数据引擎状态  -2已删除 -1失败 0初始化中 1挂起 2运行中 3准备删除 4删除中
                     * @return State 数据引擎状态  -2已删除 -1失败 0初始化中 1挂起 2运行中 3准备删除 4删除中
                     */
                    int64_t GetState() const;

                    /**
                     * 设置数据引擎状态  -2已删除 -1失败 0初始化中 1挂起 2运行中 3准备删除 4删除中
                     * @param State 数据引擎状态  -2已删除 -1失败 0初始化中 1挂起 2运行中 3准备删除 4删除中
                     */
                    void SetState(const int64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取集群规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size 集群规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置集群规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Size 集群规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取计费模式 0共享模式 1按量计费 2包年包月
                     * @return Mode 计费模式 0共享模式 1按量计费 2包年包月
                     */
                    int64_t GetMode() const;

                    /**
                     * 设置计费模式 0共享模式 1按量计费 2包年包月
                     * @param Mode 计费模式 0共享模式 1按量计费 2包年包月
                     */
                    void SetMode(const int64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取最小集群数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinClusters 最小集群数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMinClusters() const;

                    /**
                     * 设置最小集群数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MinClusters 最小集群数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMinClusters(const int64_t& _minClusters);

                    /**
                     * 判断参数 MinClusters 是否已赋值
                     * @return MinClusters 是否已赋值
                     */
                    bool MinClustersHasBeenSet() const;

                    /**
                     * 获取最大集群数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxClusters 最大集群数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxClusters() const;

                    /**
                     * 设置最大集群数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxClusters 最大集群数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxClusters(const int64_t& _maxClusters);

                    /**
                     * 判断参数 MaxClusters 是否已赋值
                     * @return MaxClusters 是否已赋值
                     */
                    bool MaxClustersHasBeenSet() const;

                    /**
                     * 获取是否自动恢复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoResume 是否自动恢复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetAutoResume() const;

                    /**
                     * 设置是否自动恢复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoResume 是否自动恢复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoResume(const bool& _autoResume);

                    /**
                     * 判断参数 AutoResume 是否已赋值
                     * @return AutoResume 是否已赋值
                     */
                    bool AutoResumeHasBeenSet() const;

                    /**
                     * 获取自动恢复时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpendAfter 自动恢复时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSpendAfter() const;

                    /**
                     * 设置自动恢复时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SpendAfter 自动恢复时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSpendAfter(const int64_t& _spendAfter);

                    /**
                     * 判断参数 SpendAfter 是否已赋值
                     * @return SpendAfter 是否已赋值
                     */
                    bool SpendAfterHasBeenSet() const;

                    /**
                     * 获取集群网段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CidrBlock 集群网段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置集群网段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CidrBlock 集群网段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取是否为默认引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultDataEngine 是否为默认引擎
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetDefaultDataEngine() const;

                    /**
                     * 设置是否为默认引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DefaultDataEngine 是否为默认引擎
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDefaultDataEngine(const bool& _defaultDataEngine);

                    /**
                     * 判断参数 DefaultDataEngine 是否已赋值
                     * @return DefaultDataEngine 是否已赋值
                     */
                    bool DefaultDataEngineHasBeenSet() const;

                    /**
                     * 获取返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Message 返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取引擎id
                     * @return DataEngineId 引擎id
                     */
                    std::string GetDataEngineId() const;

                    /**
                     * 设置引擎id
                     * @param DataEngineId 引擎id
                     */
                    void SetDataEngineId(const std::string& _dataEngineId);

                    /**
                     * 判断参数 DataEngineId 是否已赋值
                     * @return DataEngineId 是否已赋值
                     */
                    bool DataEngineIdHasBeenSet() const;

                    /**
                     * 获取操作者
                     * @return SubAccountUin 操作者
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置操作者
                     * @param SubAccountUin 操作者
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     */
                    bool SubAccountUinHasBeenSet() const;

                    /**
                     * 获取到期时间
                     * @return ExpireTime 到期时间
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置到期时间
                     * @param ExpireTime 到期时间
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取隔离时间
                     * @return IsolatedTime 隔离时间
                     */
                    std::string GetIsolatedTime() const;

                    /**
                     * 设置隔离时间
                     * @param IsolatedTime 隔离时间
                     */
                    void SetIsolatedTime(const std::string& _isolatedTime);

                    /**
                     * 判断参数 IsolatedTime 是否已赋值
                     * @return IsolatedTime 是否已赋值
                     */
                    bool IsolatedTimeHasBeenSet() const;

                    /**
                     * 获取冲正时间
                     * @return ReversalTime 冲正时间
                     */
                    std::string GetReversalTime() const;

                    /**
                     * 设置冲正时间
                     * @param ReversalTime 冲正时间
                     */
                    void SetReversalTime(const std::string& _reversalTime);

                    /**
                     * 判断参数 ReversalTime 是否已赋值
                     * @return ReversalTime 是否已赋值
                     */
                    bool ReversalTimeHasBeenSet() const;

                    /**
                     * 获取用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAlias 用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserAlias() const;

                    /**
                     * 设置用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserAlias 用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserAlias(const std::string& _userAlias);

                    /**
                     * 判断参数 UserAlias 是否已赋值
                     * @return UserAlias 是否已赋值
                     */
                    bool UserAliasHasBeenSet() const;

                    /**
                     * 获取标签对集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagList 标签对集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> GetTagList() const;

                    /**
                     * 设置标签对集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagList 标签对集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagList(const std::vector<TagInfo>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取引擎拥有的权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Permissions 引擎拥有的权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetPermissions() const;

                    /**
                     * 设置引擎拥有的权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Permissions 引擎拥有的权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPermissions(const std::vector<std::string>& _permissions);

                    /**
                     * 判断参数 Permissions 是否已赋值
                     * @return Permissions 是否已赋值
                     */
                    bool PermissionsHasBeenSet() const;

                    /**
                     * 获取是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoSuspend 是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetAutoSuspend() const;

                    /**
                     * 设置是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoSuspend 是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoSuspend(const bool& _autoSuspend);

                    /**
                     * 判断参数 AutoSuspend 是否已赋值
                     * @return AutoSuspend 是否已赋值
                     */
                    bool AutoSuspendHasBeenSet() const;

                    /**
                     * 获取定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabResumeSuspend 定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCrontabResumeSuspend() const;

                    /**
                     * 设置定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CrontabResumeSuspend 定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCrontabResumeSuspend(const int64_t& _crontabResumeSuspend);

                    /**
                     * 判断参数 CrontabResumeSuspend 是否已赋值
                     * @return CrontabResumeSuspend 是否已赋值
                     */
                    bool CrontabResumeSuspendHasBeenSet() const;

                    /**
                     * 获取定时启停策略，复杂类型：包含启停时间、挂起集群策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CrontabResumeSuspendStrategy 定时启停策略，复杂类型：包含启停时间、挂起集群策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CrontabResumeSuspendStrategy GetCrontabResumeSuspendStrategy() const;

                    /**
                     * 设置定时启停策略，复杂类型：包含启停时间、挂起集群策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CrontabResumeSuspendStrategy 定时启停策略，复杂类型：包含启停时间、挂起集群策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCrontabResumeSuspendStrategy(const CrontabResumeSuspendStrategy& _crontabResumeSuspendStrategy);

                    /**
                     * 判断参数 CrontabResumeSuspendStrategy 是否已赋值
                     * @return CrontabResumeSuspendStrategy 是否已赋值
                     */
                    bool CrontabResumeSuspendStrategyHasBeenSet() const;

                    /**
                     * 获取引擎执行任务类型，有效值：SQL/BATCH
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineExecType 引擎执行任务类型，有效值：SQL/BATCH
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEngineExecType() const;

                    /**
                     * 设置引擎执行任务类型，有效值：SQL/BATCH
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EngineExecType 引擎执行任务类型，有效值：SQL/BATCH
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEngineExecType(const std::string& _engineExecType);

                    /**
                     * 判断参数 EngineExecType 是否已赋值
                     * @return EngineExecType 是否已赋值
                     */
                    bool EngineExecTypeHasBeenSet() const;

                    /**
                     * 获取自动续费标志，0，初始状态，默认不自动续费，若用户有预付费不停服特权，自动续费。1：自动续费。2：明确不自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RenewFlag 自动续费标志，0，初始状态，默认不自动续费，若用户有预付费不停服特权，自动续费。1：自动续费。2：明确不自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置自动续费标志，0，初始状态，默认不自动续费，若用户有预付费不停服特权，自动续费。1：自动续费。2：明确不自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RenewFlag 自动续费标志，0，初始状态，默认不自动续费，若用户有预付费不停服特权，自动续费。1：自动续费。2：明确不自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取集群自动挂起时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AutoSuspendTime 集群自动挂起时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAutoSuspendTime() const;

                    /**
                     * 设置集群自动挂起时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AutoSuspendTime 集群自动挂起时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAutoSuspendTime(const int64_t& _autoSuspendTime);

                    /**
                     * 判断参数 AutoSuspendTime 是否已赋值
                     * @return AutoSuspendTime 是否已赋值
                     */
                    bool AutoSuspendTimeHasBeenSet() const;

                    /**
                     * 获取网络连接配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetworkConnectionSet 网络连接配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NetworkConnection> GetNetworkConnectionSet() const;

                    /**
                     * 设置网络连接配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NetworkConnectionSet 网络连接配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNetworkConnectionSet(const std::vector<NetworkConnection>& _networkConnectionSet);

                    /**
                     * 判断参数 NetworkConnectionSet 是否已赋值
                     * @return NetworkConnectionSet 是否已赋值
                     */
                    bool NetworkConnectionSetHasBeenSet() const;

                    /**
                     * 获取ui的跳转地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UiURL ui的跳转地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUiURL() const;

                    /**
                     * 设置ui的跳转地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UiURL ui的跳转地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUiURL(const std::string& _uiURL);

                    /**
                     * 判断参数 UiURL 是否已赋值
                     * @return UiURL 是否已赋值
                     */
                    bool UiURLHasBeenSet() const;

                private:

                    /**
                     * DataEngine名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * 引擎类型 spark/presto
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 集群资源类型 spark_private/presto_private/presto_cu/spark_cu
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 引用ID
                     */
                    std::string m_quotaId;
                    bool m_quotaIdHasBeenSet;

                    /**
                     * 数据引擎状态  -2已删除 -1失败 0初始化中 1挂起 2运行中 3准备删除 4删除中
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 集群规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 计费模式 0共享模式 1按量计费 2包年包月
                     */
                    int64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 最小集群数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minClusters;
                    bool m_minClustersHasBeenSet;

                    /**
                     * 最大集群数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxClusters;
                    bool m_maxClustersHasBeenSet;

                    /**
                     * 是否自动恢复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoResume;
                    bool m_autoResumeHasBeenSet;

                    /**
                     * 自动恢复时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_spendAfter;
                    bool m_spendAfterHasBeenSet;

                    /**
                     * 集群网段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 是否为默认引擎
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_defaultDataEngine;
                    bool m_defaultDataEngineHasBeenSet;

                    /**
                     * 返回信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 引擎id
                     */
                    std::string m_dataEngineId;
                    bool m_dataEngineIdHasBeenSet;

                    /**
                     * 操作者
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * 到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 隔离时间
                     */
                    std::string m_isolatedTime;
                    bool m_isolatedTimeHasBeenSet;

                    /**
                     * 冲正时间
                     */
                    std::string m_reversalTime;
                    bool m_reversalTimeHasBeenSet;

                    /**
                     * 用户名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userAlias;
                    bool m_userAliasHasBeenSet;

                    /**
                     * 标签对集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TagInfo> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 引擎拥有的权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_permissions;
                    bool m_permissionsHasBeenSet;

                    /**
                     * 是否自定挂起集群：false（默认）：不自动挂起、true：自动挂起
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_autoSuspend;
                    bool m_autoSuspendHasBeenSet;

                    /**
                     * 定时启停集群策略：0（默认）：关闭定时策略、1：开启定时策略（注：定时启停策略与自动挂起策略互斥）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_crontabResumeSuspend;
                    bool m_crontabResumeSuspendHasBeenSet;

                    /**
                     * 定时启停策略，复杂类型：包含启停时间、挂起集群策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CrontabResumeSuspendStrategy m_crontabResumeSuspendStrategy;
                    bool m_crontabResumeSuspendStrategyHasBeenSet;

                    /**
                     * 引擎执行任务类型，有效值：SQL/BATCH
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineExecType;
                    bool m_engineExecTypeHasBeenSet;

                    /**
                     * 自动续费标志，0，初始状态，默认不自动续费，若用户有预付费不停服特权，自动续费。1：自动续费。2：明确不自动续费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 集群自动挂起时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_autoSuspendTime;
                    bool m_autoSuspendTimeHasBeenSet;

                    /**
                     * 网络连接配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NetworkConnection> m_networkConnectionSet;
                    bool m_networkConnectionSetHasBeenSet;

                    /**
                     * ui的跳转地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uiURL;
                    bool m_uiURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEINFO_H_
