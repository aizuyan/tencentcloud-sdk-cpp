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

#include <tencentcloud/teo/v20220901/model/SecRuleRelatedInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

SecRuleRelatedInfo::SecRuleRelatedInfo() :
    m_ruleIdHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_riskLevelHasBeenSet(false),
    m_ruleLevelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_ruleTypeNameHasBeenSet(false),
    m_attackContentHasBeenSet(false),
    m_ruleTypeHasBeenSet(false),
    m_ruleEnabledHasBeenSet(false),
    m_ruleDeletedHasBeenSet(false),
    m_alarmEnabledHasBeenSet(false)
{
}

CoreInternalOutcome SecRuleRelatedInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RuleId") && !value["RuleId"].IsNull())
    {
        if (!value["RuleId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SecRuleRelatedInfo.RuleId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_ruleId = value["RuleId"].GetInt64();
        m_ruleIdHasBeenSet = true;
    }

    if (value.HasMember("Action") && !value["Action"].IsNull())
    {
        if (!value["Action"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecRuleRelatedInfo.Action` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_action = string(value["Action"].GetString());
        m_actionHasBeenSet = true;
    }

    if (value.HasMember("RiskLevel") && !value["RiskLevel"].IsNull())
    {
        if (!value["RiskLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecRuleRelatedInfo.RiskLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_riskLevel = string(value["RiskLevel"].GetString());
        m_riskLevelHasBeenSet = true;
    }

    if (value.HasMember("RuleLevel") && !value["RuleLevel"].IsNull())
    {
        if (!value["RuleLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecRuleRelatedInfo.RuleLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleLevel = string(value["RuleLevel"].GetString());
        m_ruleLevelHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecRuleRelatedInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("RuleTypeName") && !value["RuleTypeName"].IsNull())
    {
        if (!value["RuleTypeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecRuleRelatedInfo.RuleTypeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleTypeName = string(value["RuleTypeName"].GetString());
        m_ruleTypeNameHasBeenSet = true;
    }

    if (value.HasMember("AttackContent") && !value["AttackContent"].IsNull())
    {
        if (!value["AttackContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecRuleRelatedInfo.AttackContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_attackContent = string(value["AttackContent"].GetString());
        m_attackContentHasBeenSet = true;
    }

    if (value.HasMember("RuleType") && !value["RuleType"].IsNull())
    {
        if (!value["RuleType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SecRuleRelatedInfo.RuleType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ruleType = string(value["RuleType"].GetString());
        m_ruleTypeHasBeenSet = true;
    }

    if (value.HasMember("RuleEnabled") && !value["RuleEnabled"].IsNull())
    {
        if (!value["RuleEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SecRuleRelatedInfo.RuleEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ruleEnabled = value["RuleEnabled"].GetBool();
        m_ruleEnabledHasBeenSet = true;
    }

    if (value.HasMember("RuleDeleted") && !value["RuleDeleted"].IsNull())
    {
        if (!value["RuleDeleted"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SecRuleRelatedInfo.RuleDeleted` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ruleDeleted = value["RuleDeleted"].GetBool();
        m_ruleDeletedHasBeenSet = true;
    }

    if (value.HasMember("AlarmEnabled") && !value["AlarmEnabled"].IsNull())
    {
        if (!value["AlarmEnabled"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `SecRuleRelatedInfo.AlarmEnabled` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_alarmEnabled = value["AlarmEnabled"].GetBool();
        m_alarmEnabledHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SecRuleRelatedInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_ruleIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleId, allocator);
    }

    if (m_actionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Action";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_action.c_str(), allocator).Move(), allocator);
    }

    if (m_riskLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RiskLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_riskLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleTypeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleTypeName.c_str(), allocator).Move(), allocator);
    }

    if (m_attackContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AttackContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_attackContent.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ruleType.c_str(), allocator).Move(), allocator);
    }

    if (m_ruleEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleEnabled, allocator);
    }

    if (m_ruleDeletedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RuleDeleted";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ruleDeleted, allocator);
    }

    if (m_alarmEnabledHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AlarmEnabled";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_alarmEnabled, allocator);
    }

}


int64_t SecRuleRelatedInfo::GetRuleId() const
{
    return m_ruleId;
}

void SecRuleRelatedInfo::SetRuleId(const int64_t& _ruleId)
{
    m_ruleId = _ruleId;
    m_ruleIdHasBeenSet = true;
}

bool SecRuleRelatedInfo::RuleIdHasBeenSet() const
{
    return m_ruleIdHasBeenSet;
}

string SecRuleRelatedInfo::GetAction() const
{
    return m_action;
}

void SecRuleRelatedInfo::SetAction(const string& _action)
{
    m_action = _action;
    m_actionHasBeenSet = true;
}

bool SecRuleRelatedInfo::ActionHasBeenSet() const
{
    return m_actionHasBeenSet;
}

string SecRuleRelatedInfo::GetRiskLevel() const
{
    return m_riskLevel;
}

void SecRuleRelatedInfo::SetRiskLevel(const string& _riskLevel)
{
    m_riskLevel = _riskLevel;
    m_riskLevelHasBeenSet = true;
}

bool SecRuleRelatedInfo::RiskLevelHasBeenSet() const
{
    return m_riskLevelHasBeenSet;
}

string SecRuleRelatedInfo::GetRuleLevel() const
{
    return m_ruleLevel;
}

void SecRuleRelatedInfo::SetRuleLevel(const string& _ruleLevel)
{
    m_ruleLevel = _ruleLevel;
    m_ruleLevelHasBeenSet = true;
}

bool SecRuleRelatedInfo::RuleLevelHasBeenSet() const
{
    return m_ruleLevelHasBeenSet;
}

string SecRuleRelatedInfo::GetDescription() const
{
    return m_description;
}

void SecRuleRelatedInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SecRuleRelatedInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SecRuleRelatedInfo::GetRuleTypeName() const
{
    return m_ruleTypeName;
}

void SecRuleRelatedInfo::SetRuleTypeName(const string& _ruleTypeName)
{
    m_ruleTypeName = _ruleTypeName;
    m_ruleTypeNameHasBeenSet = true;
}

bool SecRuleRelatedInfo::RuleTypeNameHasBeenSet() const
{
    return m_ruleTypeNameHasBeenSet;
}

string SecRuleRelatedInfo::GetAttackContent() const
{
    return m_attackContent;
}

void SecRuleRelatedInfo::SetAttackContent(const string& _attackContent)
{
    m_attackContent = _attackContent;
    m_attackContentHasBeenSet = true;
}

bool SecRuleRelatedInfo::AttackContentHasBeenSet() const
{
    return m_attackContentHasBeenSet;
}

string SecRuleRelatedInfo::GetRuleType() const
{
    return m_ruleType;
}

void SecRuleRelatedInfo::SetRuleType(const string& _ruleType)
{
    m_ruleType = _ruleType;
    m_ruleTypeHasBeenSet = true;
}

bool SecRuleRelatedInfo::RuleTypeHasBeenSet() const
{
    return m_ruleTypeHasBeenSet;
}

bool SecRuleRelatedInfo::GetRuleEnabled() const
{
    return m_ruleEnabled;
}

void SecRuleRelatedInfo::SetRuleEnabled(const bool& _ruleEnabled)
{
    m_ruleEnabled = _ruleEnabled;
    m_ruleEnabledHasBeenSet = true;
}

bool SecRuleRelatedInfo::RuleEnabledHasBeenSet() const
{
    return m_ruleEnabledHasBeenSet;
}

bool SecRuleRelatedInfo::GetRuleDeleted() const
{
    return m_ruleDeleted;
}

void SecRuleRelatedInfo::SetRuleDeleted(const bool& _ruleDeleted)
{
    m_ruleDeleted = _ruleDeleted;
    m_ruleDeletedHasBeenSet = true;
}

bool SecRuleRelatedInfo::RuleDeletedHasBeenSet() const
{
    return m_ruleDeletedHasBeenSet;
}

bool SecRuleRelatedInfo::GetAlarmEnabled() const
{
    return m_alarmEnabled;
}

void SecRuleRelatedInfo::SetAlarmEnabled(const bool& _alarmEnabled)
{
    m_alarmEnabled = _alarmEnabled;
    m_alarmEnabledHasBeenSet = true;
}

bool SecRuleRelatedInfo::AlarmEnabledHasBeenSet() const
{
    return m_alarmEnabledHasBeenSet;
}

