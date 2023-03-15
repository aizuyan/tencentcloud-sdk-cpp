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

#include <tencentcloud/tdmq/v20200217/model/VirtualHostQuota.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

VirtualHostQuota::VirtualHostQuota() :
    m_maxVirtualHostHasBeenSet(false),
    m_usedVirtualHostHasBeenSet(false)
{
}

CoreInternalOutcome VirtualHostQuota::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("MaxVirtualHost") && !value["MaxVirtualHost"].IsNull())
    {
        if (!value["MaxVirtualHost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualHostQuota.MaxVirtualHost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_maxVirtualHost = value["MaxVirtualHost"].GetInt64();
        m_maxVirtualHostHasBeenSet = true;
    }

    if (value.HasMember("UsedVirtualHost") && !value["UsedVirtualHost"].IsNull())
    {
        if (!value["UsedVirtualHost"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `VirtualHostQuota.UsedVirtualHost` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_usedVirtualHost = value["UsedVirtualHost"].GetInt64();
        m_usedVirtualHostHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void VirtualHostQuota::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_maxVirtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MaxVirtualHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_maxVirtualHost, allocator);
    }

    if (m_usedVirtualHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedVirtualHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_usedVirtualHost, allocator);
    }

}


int64_t VirtualHostQuota::GetMaxVirtualHost() const
{
    return m_maxVirtualHost;
}

void VirtualHostQuota::SetMaxVirtualHost(const int64_t& _maxVirtualHost)
{
    m_maxVirtualHost = _maxVirtualHost;
    m_maxVirtualHostHasBeenSet = true;
}

bool VirtualHostQuota::MaxVirtualHostHasBeenSet() const
{
    return m_maxVirtualHostHasBeenSet;
}

int64_t VirtualHostQuota::GetUsedVirtualHost() const
{
    return m_usedVirtualHost;
}

void VirtualHostQuota::SetUsedVirtualHost(const int64_t& _usedVirtualHost)
{
    m_usedVirtualHost = _usedVirtualHost;
    m_usedVirtualHostHasBeenSet = true;
}

bool VirtualHostQuota::UsedVirtualHostHasBeenSet() const
{
    return m_usedVirtualHostHasBeenSet;
}

