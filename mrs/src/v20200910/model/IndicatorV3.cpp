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

#include <tencentcloud/mrs/v20200910/model/IndicatorV3.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mrs::V20200910::Model;
using namespace std;

IndicatorV3::IndicatorV3() :
    m_tableIndictorsHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

CoreInternalOutcome IndicatorV3::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TableIndictors") && !value["TableIndictors"].IsNull())
    {
        if (!value["TableIndictors"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IndicatorV3.TableIndictors` is not array type"));

        const rapidjson::Value &tmpValue = value["TableIndictors"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TableIndicators item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tableIndictors.push_back(item);
        }
        m_tableIndictorsHasBeenSet = true;
    }

    if (value.HasMember("Version") && !value["Version"].IsNull())
    {
        if (!value["Version"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IndicatorV3.Version` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_version = string(value["Version"].GetString());
        m_versionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IndicatorV3::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tableIndictorsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TableIndictors";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tableIndictors.begin(); itr != m_tableIndictors.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_versionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Version";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_version.c_str(), allocator).Move(), allocator);
    }

}


vector<TableIndicators> IndicatorV3::GetTableIndictors() const
{
    return m_tableIndictors;
}

void IndicatorV3::SetTableIndictors(const vector<TableIndicators>& _tableIndictors)
{
    m_tableIndictors = _tableIndictors;
    m_tableIndictorsHasBeenSet = true;
}

bool IndicatorV3::TableIndictorsHasBeenSet() const
{
    return m_tableIndictorsHasBeenSet;
}

string IndicatorV3::GetVersion() const
{
    return m_version;
}

void IndicatorV3::SetVersion(const string& _version)
{
    m_version = _version;
    m_versionHasBeenSet = true;
}

bool IndicatorV3::VersionHasBeenSet() const
{
    return m_versionHasBeenSet;
}

