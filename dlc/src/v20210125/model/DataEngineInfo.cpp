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

#include <tencentcloud/dlc/v20210125/model/DataEngineInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

DataEngineInfo::DataEngineInfo() :
    m_dataEngineNameHasBeenSet(false),
    m_engineTypeHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_quotaIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_sizeHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_minClustersHasBeenSet(false),
    m_maxClustersHasBeenSet(false),
    m_autoResumeHasBeenSet(false),
    m_spendAfterHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_defaultDataEngineHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_dataEngineIdHasBeenSet(false),
    m_subAccountUinHasBeenSet(false),
    m_expireTimeHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_reversalTimeHasBeenSet(false),
    m_userAliasHasBeenSet(false),
    m_tagListHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_autoSuspendHasBeenSet(false),
    m_crontabResumeSuspendHasBeenSet(false),
    m_crontabResumeSuspendStrategyHasBeenSet(false),
    m_engineExecTypeHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_autoSuspendTimeHasBeenSet(false),
    m_networkConnectionSetHasBeenSet(false),
    m_uiURLHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_imageVersionIdHasBeenSet(false),
    m_childImageVersionIdHasBeenSet(false),
    m_imageVersionNameHasBeenSet(false),
    m_startStandbyClusterHasBeenSet(false),
    m_elasticSwitchHasBeenSet(false),
    m_elasticLimitHasBeenSet(false)
{
}

CoreInternalOutcome DataEngineInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("DataEngineName") && !value["DataEngineName"].IsNull())
    {
        if (!value["DataEngineName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.DataEngineName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineName = string(value["DataEngineName"].GetString());
        m_dataEngineNameHasBeenSet = true;
    }

    if (value.HasMember("EngineType") && !value["EngineType"].IsNull())
    {
        if (!value["EngineType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.EngineType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineType = string(value["EngineType"].GetString());
        m_engineTypeHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("QuotaId") && !value["QuotaId"].IsNull())
    {
        if (!value["QuotaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.QuotaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_quotaId = string(value["QuotaId"].GetString());
        m_quotaIdHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.State` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetInt64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.CreateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetInt64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.UpdateTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetInt64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("Size") && !value["Size"].IsNull())
    {
        if (!value["Size"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.Size` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_size = value["Size"].GetInt64();
        m_sizeHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.Mode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetInt64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("MinClusters") && !value["MinClusters"].IsNull())
    {
        if (!value["MinClusters"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.MinClusters` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_minClusters = value["MinClusters"].GetInt64();
        m_minClustersHasBeenSet = true;
    }

    if (value.HasMember("MaxClusters") && !value["MaxClusters"].IsNull())
    {
        if (!value["MaxClusters"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.MaxClusters` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxClusters = value["MaxClusters"].GetInt64();
        m_maxClustersHasBeenSet = true;
    }

    if (value.HasMember("AutoResume") && !value["AutoResume"].IsNull())
    {
        if (!value["AutoResume"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.AutoResume` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoResume = value["AutoResume"].GetBool();
        m_autoResumeHasBeenSet = true;
    }

    if (value.HasMember("SpendAfter") && !value["SpendAfter"].IsNull())
    {
        if (!value["SpendAfter"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.SpendAfter` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_spendAfter = value["SpendAfter"].GetInt64();
        m_spendAfterHasBeenSet = true;
    }

    if (value.HasMember("CidrBlock") && !value["CidrBlock"].IsNull())
    {
        if (!value["CidrBlock"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.CidrBlock` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cidrBlock = string(value["CidrBlock"].GetString());
        m_cidrBlockHasBeenSet = true;
    }

    if (value.HasMember("DefaultDataEngine") && !value["DefaultDataEngine"].IsNull())
    {
        if (!value["DefaultDataEngine"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.DefaultDataEngine` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_defaultDataEngine = value["DefaultDataEngine"].GetBool();
        m_defaultDataEngineHasBeenSet = true;
    }

    if (value.HasMember("Message") && !value["Message"].IsNull())
    {
        if (!value["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.Message` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_message = string(value["Message"].GetString());
        m_messageHasBeenSet = true;
    }

    if (value.HasMember("DataEngineId") && !value["DataEngineId"].IsNull())
    {
        if (!value["DataEngineId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.DataEngineId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dataEngineId = string(value["DataEngineId"].GetString());
        m_dataEngineIdHasBeenSet = true;
    }

    if (value.HasMember("SubAccountUin") && !value["SubAccountUin"].IsNull())
    {
        if (!value["SubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.SubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAccountUin = string(value["SubAccountUin"].GetString());
        m_subAccountUinHasBeenSet = true;
    }

    if (value.HasMember("ExpireTime") && !value["ExpireTime"].IsNull())
    {
        if (!value["ExpireTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.ExpireTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expireTime = string(value["ExpireTime"].GetString());
        m_expireTimeHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("ReversalTime") && !value["ReversalTime"].IsNull())
    {
        if (!value["ReversalTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.ReversalTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_reversalTime = string(value["ReversalTime"].GetString());
        m_reversalTimeHasBeenSet = true;
    }

    if (value.HasMember("UserAlias") && !value["UserAlias"].IsNull())
    {
        if (!value["UserAlias"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.UserAlias` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_userAlias = string(value["UserAlias"].GetString());
        m_userAliasHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagList.push_back(item);
        }
        m_tagListHasBeenSet = true;
    }

    if (value.HasMember("Permissions") && !value["Permissions"].IsNull())
    {
        if (!value["Permissions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.Permissions` is not array type"));

        const rapidjson::Value &tmpValue = value["Permissions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_permissions.push_back((*itr).GetString());
        }
        m_permissionsHasBeenSet = true;
    }

    if (value.HasMember("AutoSuspend") && !value["AutoSuspend"].IsNull())
    {
        if (!value["AutoSuspend"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.AutoSuspend` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_autoSuspend = value["AutoSuspend"].GetBool();
        m_autoSuspendHasBeenSet = true;
    }

    if (value.HasMember("CrontabResumeSuspend") && !value["CrontabResumeSuspend"].IsNull())
    {
        if (!value["CrontabResumeSuspend"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.CrontabResumeSuspend` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_crontabResumeSuspend = value["CrontabResumeSuspend"].GetInt64();
        m_crontabResumeSuspendHasBeenSet = true;
    }

    if (value.HasMember("CrontabResumeSuspendStrategy") && !value["CrontabResumeSuspendStrategy"].IsNull())
    {
        if (!value["CrontabResumeSuspendStrategy"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.CrontabResumeSuspendStrategy` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_crontabResumeSuspendStrategy.Deserialize(value["CrontabResumeSuspendStrategy"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_crontabResumeSuspendStrategyHasBeenSet = true;
    }

    if (value.HasMember("EngineExecType") && !value["EngineExecType"].IsNull())
    {
        if (!value["EngineExecType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.EngineExecType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineExecType = string(value["EngineExecType"].GetString());
        m_engineExecTypeHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.RenewFlag` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = value["RenewFlag"].GetInt64();
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("AutoSuspendTime") && !value["AutoSuspendTime"].IsNull())
    {
        if (!value["AutoSuspendTime"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.AutoSuspendTime` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_autoSuspendTime = value["AutoSuspendTime"].GetInt64();
        m_autoSuspendTimeHasBeenSet = true;
    }

    if (value.HasMember("NetworkConnectionSet") && !value["NetworkConnectionSet"].IsNull())
    {
        if (!value["NetworkConnectionSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.NetworkConnectionSet` is not array type"));

        const rapidjson::Value &tmpValue = value["NetworkConnectionSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            NetworkConnection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_networkConnectionSet.push_back(item);
        }
        m_networkConnectionSetHasBeenSet = true;
    }

    if (value.HasMember("UiURL") && !value["UiURL"].IsNull())
    {
        if (!value["UiURL"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.UiURL` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uiURL = string(value["UiURL"].GetString());
        m_uiURLHasBeenSet = true;
    }

    if (value.HasMember("ResourceType") && !value["ResourceType"].IsNull())
    {
        if (!value["ResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.ResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceType = string(value["ResourceType"].GetString());
        m_resourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ImageVersionId") && !value["ImageVersionId"].IsNull())
    {
        if (!value["ImageVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.ImageVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageVersionId = string(value["ImageVersionId"].GetString());
        m_imageVersionIdHasBeenSet = true;
    }

    if (value.HasMember("ChildImageVersionId") && !value["ChildImageVersionId"].IsNull())
    {
        if (!value["ChildImageVersionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.ChildImageVersionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_childImageVersionId = string(value["ChildImageVersionId"].GetString());
        m_childImageVersionIdHasBeenSet = true;
    }

    if (value.HasMember("ImageVersionName") && !value["ImageVersionName"].IsNull())
    {
        if (!value["ImageVersionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.ImageVersionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_imageVersionName = string(value["ImageVersionName"].GetString());
        m_imageVersionNameHasBeenSet = true;
    }

    if (value.HasMember("StartStandbyCluster") && !value["StartStandbyCluster"].IsNull())
    {
        if (!value["StartStandbyCluster"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.StartStandbyCluster` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_startStandbyCluster = value["StartStandbyCluster"].GetBool();
        m_startStandbyClusterHasBeenSet = true;
    }

    if (value.HasMember("ElasticSwitch") && !value["ElasticSwitch"].IsNull())
    {
        if (!value["ElasticSwitch"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.ElasticSwitch` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_elasticSwitch = value["ElasticSwitch"].GetBool();
        m_elasticSwitchHasBeenSet = true;
    }

    if (value.HasMember("ElasticLimit") && !value["ElasticLimit"].IsNull())
    {
        if (!value["ElasticLimit"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DataEngineInfo.ElasticLimit` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_elasticLimit = value["ElasticLimit"].GetInt64();
        m_elasticLimitHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DataEngineInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataEngineNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineName.c_str(), allocator).Move(), allocator);
    }

    if (m_engineTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineType.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_quotaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_quotaId.c_str(), allocator).Move(), allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_sizeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Size";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_size, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_minClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MinClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_minClusters, allocator);
    }

    if (m_maxClustersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxClusters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxClusters, allocator);
    }

    if (m_autoResumeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoResume";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoResume, allocator);
    }

    if (m_spendAfterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SpendAfter";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_spendAfter, allocator);
    }

    if (m_cidrBlockHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CidrBlock";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cidrBlock.c_str(), allocator).Move(), allocator);
    }

    if (m_defaultDataEngineHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DefaultDataEngine";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_defaultDataEngine, allocator);
    }

    if (m_messageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Message";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_message.c_str(), allocator).Move(), allocator);
    }

    if (m_dataEngineIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DataEngineId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dataEngineId.c_str(), allocator).Move(), allocator);
    }

    if (m_subAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAccountUin.c_str(), allocator).Move(), allocator);
    }

    if (m_expireTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExpireTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_expireTime.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_reversalTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReversalTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_reversalTime.c_str(), allocator).Move(), allocator);
    }

    if (m_userAliasHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserAlias";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_userAlias.c_str(), allocator).Move(), allocator);
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_permissionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Permissions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_permissions.begin(); itr != m_permissions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_autoSuspendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSuspend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoSuspend, allocator);
    }

    if (m_crontabResumeSuspendHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabResumeSuspend";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_crontabResumeSuspend, allocator);
    }

    if (m_crontabResumeSuspendStrategyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CrontabResumeSuspendStrategy";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_crontabResumeSuspendStrategy.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_engineExecTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineExecType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineExecType.c_str(), allocator).Move(), allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_renewFlag, allocator);
    }

    if (m_autoSuspendTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AutoSuspendTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_autoSuspendTime, allocator);
    }

    if (m_networkConnectionSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NetworkConnectionSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_networkConnectionSet.begin(); itr != m_networkConnectionSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_uiURLHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UiURL";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_uiURL.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_imageVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_childImageVersionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ChildImageVersionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_childImageVersionId.c_str(), allocator).Move(), allocator);
    }

    if (m_imageVersionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageVersionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_imageVersionName.c_str(), allocator).Move(), allocator);
    }

    if (m_startStandbyClusterHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartStandbyCluster";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_startStandbyCluster, allocator);
    }

    if (m_elasticSwitchHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticSwitch";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticSwitch, allocator);
    }

    if (m_elasticLimitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElasticLimit";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_elasticLimit, allocator);
    }

}


string DataEngineInfo::GetDataEngineName() const
{
    return m_dataEngineName;
}

void DataEngineInfo::SetDataEngineName(const string& _dataEngineName)
{
    m_dataEngineName = _dataEngineName;
    m_dataEngineNameHasBeenSet = true;
}

bool DataEngineInfo::DataEngineNameHasBeenSet() const
{
    return m_dataEngineNameHasBeenSet;
}

string DataEngineInfo::GetEngineType() const
{
    return m_engineType;
}

void DataEngineInfo::SetEngineType(const string& _engineType)
{
    m_engineType = _engineType;
    m_engineTypeHasBeenSet = true;
}

bool DataEngineInfo::EngineTypeHasBeenSet() const
{
    return m_engineTypeHasBeenSet;
}

string DataEngineInfo::GetClusterType() const
{
    return m_clusterType;
}

void DataEngineInfo::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool DataEngineInfo::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

string DataEngineInfo::GetQuotaId() const
{
    return m_quotaId;
}

void DataEngineInfo::SetQuotaId(const string& _quotaId)
{
    m_quotaId = _quotaId;
    m_quotaIdHasBeenSet = true;
}

bool DataEngineInfo::QuotaIdHasBeenSet() const
{
    return m_quotaIdHasBeenSet;
}

int64_t DataEngineInfo::GetState() const
{
    return m_state;
}

void DataEngineInfo::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool DataEngineInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

int64_t DataEngineInfo::GetCreateTime() const
{
    return m_createTime;
}

void DataEngineInfo::SetCreateTime(const int64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DataEngineInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DataEngineInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void DataEngineInfo::SetUpdateTime(const int64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool DataEngineInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t DataEngineInfo::GetSize() const
{
    return m_size;
}

void DataEngineInfo::SetSize(const int64_t& _size)
{
    m_size = _size;
    m_sizeHasBeenSet = true;
}

bool DataEngineInfo::SizeHasBeenSet() const
{
    return m_sizeHasBeenSet;
}

int64_t DataEngineInfo::GetMode() const
{
    return m_mode;
}

void DataEngineInfo::SetMode(const int64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DataEngineInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

int64_t DataEngineInfo::GetMinClusters() const
{
    return m_minClusters;
}

void DataEngineInfo::SetMinClusters(const int64_t& _minClusters)
{
    m_minClusters = _minClusters;
    m_minClustersHasBeenSet = true;
}

bool DataEngineInfo::MinClustersHasBeenSet() const
{
    return m_minClustersHasBeenSet;
}

int64_t DataEngineInfo::GetMaxClusters() const
{
    return m_maxClusters;
}

void DataEngineInfo::SetMaxClusters(const int64_t& _maxClusters)
{
    m_maxClusters = _maxClusters;
    m_maxClustersHasBeenSet = true;
}

bool DataEngineInfo::MaxClustersHasBeenSet() const
{
    return m_maxClustersHasBeenSet;
}

bool DataEngineInfo::GetAutoResume() const
{
    return m_autoResume;
}

void DataEngineInfo::SetAutoResume(const bool& _autoResume)
{
    m_autoResume = _autoResume;
    m_autoResumeHasBeenSet = true;
}

bool DataEngineInfo::AutoResumeHasBeenSet() const
{
    return m_autoResumeHasBeenSet;
}

int64_t DataEngineInfo::GetSpendAfter() const
{
    return m_spendAfter;
}

void DataEngineInfo::SetSpendAfter(const int64_t& _spendAfter)
{
    m_spendAfter = _spendAfter;
    m_spendAfterHasBeenSet = true;
}

bool DataEngineInfo::SpendAfterHasBeenSet() const
{
    return m_spendAfterHasBeenSet;
}

string DataEngineInfo::GetCidrBlock() const
{
    return m_cidrBlock;
}

void DataEngineInfo::SetCidrBlock(const string& _cidrBlock)
{
    m_cidrBlock = _cidrBlock;
    m_cidrBlockHasBeenSet = true;
}

bool DataEngineInfo::CidrBlockHasBeenSet() const
{
    return m_cidrBlockHasBeenSet;
}

bool DataEngineInfo::GetDefaultDataEngine() const
{
    return m_defaultDataEngine;
}

void DataEngineInfo::SetDefaultDataEngine(const bool& _defaultDataEngine)
{
    m_defaultDataEngine = _defaultDataEngine;
    m_defaultDataEngineHasBeenSet = true;
}

bool DataEngineInfo::DefaultDataEngineHasBeenSet() const
{
    return m_defaultDataEngineHasBeenSet;
}

string DataEngineInfo::GetMessage() const
{
    return m_message;
}

void DataEngineInfo::SetMessage(const string& _message)
{
    m_message = _message;
    m_messageHasBeenSet = true;
}

bool DataEngineInfo::MessageHasBeenSet() const
{
    return m_messageHasBeenSet;
}

string DataEngineInfo::GetDataEngineId() const
{
    return m_dataEngineId;
}

void DataEngineInfo::SetDataEngineId(const string& _dataEngineId)
{
    m_dataEngineId = _dataEngineId;
    m_dataEngineIdHasBeenSet = true;
}

bool DataEngineInfo::DataEngineIdHasBeenSet() const
{
    return m_dataEngineIdHasBeenSet;
}

string DataEngineInfo::GetSubAccountUin() const
{
    return m_subAccountUin;
}

void DataEngineInfo::SetSubAccountUin(const string& _subAccountUin)
{
    m_subAccountUin = _subAccountUin;
    m_subAccountUinHasBeenSet = true;
}

bool DataEngineInfo::SubAccountUinHasBeenSet() const
{
    return m_subAccountUinHasBeenSet;
}

string DataEngineInfo::GetExpireTime() const
{
    return m_expireTime;
}

void DataEngineInfo::SetExpireTime(const string& _expireTime)
{
    m_expireTime = _expireTime;
    m_expireTimeHasBeenSet = true;
}

bool DataEngineInfo::ExpireTimeHasBeenSet() const
{
    return m_expireTimeHasBeenSet;
}

string DataEngineInfo::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void DataEngineInfo::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool DataEngineInfo::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

string DataEngineInfo::GetReversalTime() const
{
    return m_reversalTime;
}

void DataEngineInfo::SetReversalTime(const string& _reversalTime)
{
    m_reversalTime = _reversalTime;
    m_reversalTimeHasBeenSet = true;
}

bool DataEngineInfo::ReversalTimeHasBeenSet() const
{
    return m_reversalTimeHasBeenSet;
}

string DataEngineInfo::GetUserAlias() const
{
    return m_userAlias;
}

void DataEngineInfo::SetUserAlias(const string& _userAlias)
{
    m_userAlias = _userAlias;
    m_userAliasHasBeenSet = true;
}

bool DataEngineInfo::UserAliasHasBeenSet() const
{
    return m_userAliasHasBeenSet;
}

vector<TagInfo> DataEngineInfo::GetTagList() const
{
    return m_tagList;
}

void DataEngineInfo::SetTagList(const vector<TagInfo>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool DataEngineInfo::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

vector<string> DataEngineInfo::GetPermissions() const
{
    return m_permissions;
}

void DataEngineInfo::SetPermissions(const vector<string>& _permissions)
{
    m_permissions = _permissions;
    m_permissionsHasBeenSet = true;
}

bool DataEngineInfo::PermissionsHasBeenSet() const
{
    return m_permissionsHasBeenSet;
}

bool DataEngineInfo::GetAutoSuspend() const
{
    return m_autoSuspend;
}

void DataEngineInfo::SetAutoSuspend(const bool& _autoSuspend)
{
    m_autoSuspend = _autoSuspend;
    m_autoSuspendHasBeenSet = true;
}

bool DataEngineInfo::AutoSuspendHasBeenSet() const
{
    return m_autoSuspendHasBeenSet;
}

int64_t DataEngineInfo::GetCrontabResumeSuspend() const
{
    return m_crontabResumeSuspend;
}

void DataEngineInfo::SetCrontabResumeSuspend(const int64_t& _crontabResumeSuspend)
{
    m_crontabResumeSuspend = _crontabResumeSuspend;
    m_crontabResumeSuspendHasBeenSet = true;
}

bool DataEngineInfo::CrontabResumeSuspendHasBeenSet() const
{
    return m_crontabResumeSuspendHasBeenSet;
}

CrontabResumeSuspendStrategy DataEngineInfo::GetCrontabResumeSuspendStrategy() const
{
    return m_crontabResumeSuspendStrategy;
}

void DataEngineInfo::SetCrontabResumeSuspendStrategy(const CrontabResumeSuspendStrategy& _crontabResumeSuspendStrategy)
{
    m_crontabResumeSuspendStrategy = _crontabResumeSuspendStrategy;
    m_crontabResumeSuspendStrategyHasBeenSet = true;
}

bool DataEngineInfo::CrontabResumeSuspendStrategyHasBeenSet() const
{
    return m_crontabResumeSuspendStrategyHasBeenSet;
}

string DataEngineInfo::GetEngineExecType() const
{
    return m_engineExecType;
}

void DataEngineInfo::SetEngineExecType(const string& _engineExecType)
{
    m_engineExecType = _engineExecType;
    m_engineExecTypeHasBeenSet = true;
}

bool DataEngineInfo::EngineExecTypeHasBeenSet() const
{
    return m_engineExecTypeHasBeenSet;
}

int64_t DataEngineInfo::GetRenewFlag() const
{
    return m_renewFlag;
}

void DataEngineInfo::SetRenewFlag(const int64_t& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool DataEngineInfo::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

int64_t DataEngineInfo::GetAutoSuspendTime() const
{
    return m_autoSuspendTime;
}

void DataEngineInfo::SetAutoSuspendTime(const int64_t& _autoSuspendTime)
{
    m_autoSuspendTime = _autoSuspendTime;
    m_autoSuspendTimeHasBeenSet = true;
}

bool DataEngineInfo::AutoSuspendTimeHasBeenSet() const
{
    return m_autoSuspendTimeHasBeenSet;
}

vector<NetworkConnection> DataEngineInfo::GetNetworkConnectionSet() const
{
    return m_networkConnectionSet;
}

void DataEngineInfo::SetNetworkConnectionSet(const vector<NetworkConnection>& _networkConnectionSet)
{
    m_networkConnectionSet = _networkConnectionSet;
    m_networkConnectionSetHasBeenSet = true;
}

bool DataEngineInfo::NetworkConnectionSetHasBeenSet() const
{
    return m_networkConnectionSetHasBeenSet;
}

string DataEngineInfo::GetUiURL() const
{
    return m_uiURL;
}

void DataEngineInfo::SetUiURL(const string& _uiURL)
{
    m_uiURL = _uiURL;
    m_uiURLHasBeenSet = true;
}

bool DataEngineInfo::UiURLHasBeenSet() const
{
    return m_uiURLHasBeenSet;
}

string DataEngineInfo::GetResourceType() const
{
    return m_resourceType;
}

void DataEngineInfo::SetResourceType(const string& _resourceType)
{
    m_resourceType = _resourceType;
    m_resourceTypeHasBeenSet = true;
}

bool DataEngineInfo::ResourceTypeHasBeenSet() const
{
    return m_resourceTypeHasBeenSet;
}

string DataEngineInfo::GetImageVersionId() const
{
    return m_imageVersionId;
}

void DataEngineInfo::SetImageVersionId(const string& _imageVersionId)
{
    m_imageVersionId = _imageVersionId;
    m_imageVersionIdHasBeenSet = true;
}

bool DataEngineInfo::ImageVersionIdHasBeenSet() const
{
    return m_imageVersionIdHasBeenSet;
}

string DataEngineInfo::GetChildImageVersionId() const
{
    return m_childImageVersionId;
}

void DataEngineInfo::SetChildImageVersionId(const string& _childImageVersionId)
{
    m_childImageVersionId = _childImageVersionId;
    m_childImageVersionIdHasBeenSet = true;
}

bool DataEngineInfo::ChildImageVersionIdHasBeenSet() const
{
    return m_childImageVersionIdHasBeenSet;
}

string DataEngineInfo::GetImageVersionName() const
{
    return m_imageVersionName;
}

void DataEngineInfo::SetImageVersionName(const string& _imageVersionName)
{
    m_imageVersionName = _imageVersionName;
    m_imageVersionNameHasBeenSet = true;
}

bool DataEngineInfo::ImageVersionNameHasBeenSet() const
{
    return m_imageVersionNameHasBeenSet;
}

bool DataEngineInfo::GetStartStandbyCluster() const
{
    return m_startStandbyCluster;
}

void DataEngineInfo::SetStartStandbyCluster(const bool& _startStandbyCluster)
{
    m_startStandbyCluster = _startStandbyCluster;
    m_startStandbyClusterHasBeenSet = true;
}

bool DataEngineInfo::StartStandbyClusterHasBeenSet() const
{
    return m_startStandbyClusterHasBeenSet;
}

bool DataEngineInfo::GetElasticSwitch() const
{
    return m_elasticSwitch;
}

void DataEngineInfo::SetElasticSwitch(const bool& _elasticSwitch)
{
    m_elasticSwitch = _elasticSwitch;
    m_elasticSwitchHasBeenSet = true;
}

bool DataEngineInfo::ElasticSwitchHasBeenSet() const
{
    return m_elasticSwitchHasBeenSet;
}

int64_t DataEngineInfo::GetElasticLimit() const
{
    return m_elasticLimit;
}

void DataEngineInfo::SetElasticLimit(const int64_t& _elasticLimit)
{
    m_elasticLimit = _elasticLimit;
    m_elasticLimitHasBeenSet = true;
}

bool DataEngineInfo::ElasticLimitHasBeenSet() const
{
    return m_elasticLimitHasBeenSet;
}

