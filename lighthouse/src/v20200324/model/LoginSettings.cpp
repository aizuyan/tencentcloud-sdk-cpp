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

#include <tencentcloud/lighthouse/v20200324/model/LoginSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace rapidjson;
using namespace std;

LoginSettings::LoginSettings() :
    m_keyIdsHasBeenSet(false)
{
}

CoreInternalOutcome LoginSettings::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("KeyIds") && !value["KeyIds"].IsNull())
    {
        if (!value["KeyIds"].IsArray())
            return CoreInternalOutcome(Error("response `LoginSettings.KeyIds` is not array type"));

        const Value &tmpValue = value["KeyIds"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_keyIds.push_back((*itr).GetString());
        }
        m_keyIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void LoginSettings::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_keyIdsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "KeyIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_keyIds.begin(); itr != m_keyIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


vector<string> LoginSettings::GetKeyIds() const
{
    return m_keyIds;
}

void LoginSettings::SetKeyIds(const vector<string>& _keyIds)
{
    m_keyIds = _keyIds;
    m_keyIdsHasBeenSet = true;
}

bool LoginSettings::KeyIdsHasBeenSet() const
{
    return m_keyIdsHasBeenSet;
}

