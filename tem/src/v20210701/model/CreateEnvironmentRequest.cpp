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

#include <tencentcloud/tem/v20210701/model/CreateEnvironmentRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

CreateEnvironmentRequest::CreateEnvironmentRequest() :
    m_environmentNameHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_subnetIdsHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_k8sVersionHasBeenSet(false),
    m_sourceChannelHasBeenSet(false),
    m_enableTswTraceServiceHasBeenSet(false)
{
}

string CreateEnvironmentRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_environmentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnvironmentName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_environmentName.c_str(), allocator).Move(), allocator);
    }

    if (m_vpcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Vpc";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_vpc.c_str(), allocator).Move(), allocator);
    }

    if (m_subnetIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubnetIds";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_subnetIds.begin(); itr != m_subnetIds.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_k8sVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "K8sVersion";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_k8sVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceChannelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceChannel";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_sourceChannel, allocator);
    }

    if (m_enableTswTraceServiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EnableTswTraceService";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_enableTswTraceService, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateEnvironmentRequest::GetEnvironmentName() const
{
    return m_environmentName;
}

void CreateEnvironmentRequest::SetEnvironmentName(const string& _environmentName)
{
    m_environmentName = _environmentName;
    m_environmentNameHasBeenSet = true;
}

bool CreateEnvironmentRequest::EnvironmentNameHasBeenSet() const
{
    return m_environmentNameHasBeenSet;
}

string CreateEnvironmentRequest::GetVpc() const
{
    return m_vpc;
}

void CreateEnvironmentRequest::SetVpc(const string& _vpc)
{
    m_vpc = _vpc;
    m_vpcHasBeenSet = true;
}

bool CreateEnvironmentRequest::VpcHasBeenSet() const
{
    return m_vpcHasBeenSet;
}

vector<string> CreateEnvironmentRequest::GetSubnetIds() const
{
    return m_subnetIds;
}

void CreateEnvironmentRequest::SetSubnetIds(const vector<string>& _subnetIds)
{
    m_subnetIds = _subnetIds;
    m_subnetIdsHasBeenSet = true;
}

bool CreateEnvironmentRequest::SubnetIdsHasBeenSet() const
{
    return m_subnetIdsHasBeenSet;
}

string CreateEnvironmentRequest::GetDescription() const
{
    return m_description;
}

void CreateEnvironmentRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CreateEnvironmentRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CreateEnvironmentRequest::GetK8sVersion() const
{
    return m_k8sVersion;
}

void CreateEnvironmentRequest::SetK8sVersion(const string& _k8sVersion)
{
    m_k8sVersion = _k8sVersion;
    m_k8sVersionHasBeenSet = true;
}

bool CreateEnvironmentRequest::K8sVersionHasBeenSet() const
{
    return m_k8sVersionHasBeenSet;
}

int64_t CreateEnvironmentRequest::GetSourceChannel() const
{
    return m_sourceChannel;
}

void CreateEnvironmentRequest::SetSourceChannel(const int64_t& _sourceChannel)
{
    m_sourceChannel = _sourceChannel;
    m_sourceChannelHasBeenSet = true;
}

bool CreateEnvironmentRequest::SourceChannelHasBeenSet() const
{
    return m_sourceChannelHasBeenSet;
}

bool CreateEnvironmentRequest::GetEnableTswTraceService() const
{
    return m_enableTswTraceService;
}

void CreateEnvironmentRequest::SetEnableTswTraceService(const bool& _enableTswTraceService)
{
    m_enableTswTraceService = _enableTswTraceService;
    m_enableTswTraceServiceHasBeenSet = true;
}

bool CreateEnvironmentRequest::EnableTswTraceServiceHasBeenSet() const
{
    return m_enableTswTraceServiceHasBeenSet;
}


