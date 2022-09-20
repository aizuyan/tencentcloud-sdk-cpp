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

#include <tencentcloud/teo/v20220901/model/DDoSStatusInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

DDoSStatusInfo::DDoSStatusInfo() :
    m_plyLevelHasBeenSet(false)
{
}

CoreInternalOutcome DDoSStatusInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PlyLevel") && !value["PlyLevel"].IsNull())
    {
        if (!value["PlyLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DDoSStatusInfo.PlyLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_plyLevel = string(value["PlyLevel"].GetString());
        m_plyLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DDoSStatusInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_plyLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PlyLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_plyLevel.c_str(), allocator).Move(), allocator);
    }

}


string DDoSStatusInfo::GetPlyLevel() const
{
    return m_plyLevel;
}

void DDoSStatusInfo::SetPlyLevel(const string& _plyLevel)
{
    m_plyLevel = _plyLevel;
    m_plyLevelHasBeenSet = true;
}

bool DDoSStatusInfo::PlyLevelHasBeenSet() const
{
    return m_plyLevelHasBeenSet;
}

