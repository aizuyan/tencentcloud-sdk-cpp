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

#include <tencentcloud/mps/v20190612/model/DescribeInputRTSPPullSettings.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

DescribeInputRTSPPullSettings::DescribeInputRTSPPullSettings() :
    m_sourceAddressesHasBeenSet(false)
{
}

CoreInternalOutcome DescribeInputRTSPPullSettings::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SourceAddresses") && !value["SourceAddresses"].IsNull())
    {
        if (!value["SourceAddresses"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeInputRTSPPullSettings.SourceAddresses` is not array type"));

        const rapidjson::Value &tmpValue = value["SourceAddresses"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            DescribeRTSPPullSourceAddress item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_sourceAddresses.push_back(item);
        }
        m_sourceAddressesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeInputRTSPPullSettings::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sourceAddressesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_sourceAddresses.begin(); itr != m_sourceAddresses.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


vector<DescribeRTSPPullSourceAddress> DescribeInputRTSPPullSettings::GetSourceAddresses() const
{
    return m_sourceAddresses;
}

void DescribeInputRTSPPullSettings::SetSourceAddresses(const vector<DescribeRTSPPullSourceAddress>& _sourceAddresses)
{
    m_sourceAddresses = _sourceAddresses;
    m_sourceAddressesHasBeenSet = true;
}

bool DescribeInputRTSPPullSettings::SourceAddressesHasBeenSet() const
{
    return m_sourceAddressesHasBeenSet;
}

