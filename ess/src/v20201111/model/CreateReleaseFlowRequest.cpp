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

#include <tencentcloud/ess/v20201111/model/CreateReleaseFlowRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ess::V20201111::Model;
using namespace std;

CreateReleaseFlowRequest::CreateReleaseFlowRequest() :
    m_operatorHasBeenSet(false),
    m_needRelievedFlowIdHasBeenSet(false),
    m_reliveInfoHasBeenSet(false),
    m_releasedApproversHasBeenSet(false)
{
}

string CreateReleaseFlowRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_operator.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_needRelievedFlowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NeedRelievedFlowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_needRelievedFlowId.c_str(), allocator).Move(), allocator);
    }

    if (m_reliveInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReliveInfo";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_reliveInfo.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_releasedApproversHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ReleasedApprovers";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_releasedApprovers.begin(); itr != m_releasedApprovers.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


UserInfo CreateReleaseFlowRequest::GetOperator() const
{
    return m_operator;
}

void CreateReleaseFlowRequest::SetOperator(const UserInfo& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool CreateReleaseFlowRequest::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string CreateReleaseFlowRequest::GetNeedRelievedFlowId() const
{
    return m_needRelievedFlowId;
}

void CreateReleaseFlowRequest::SetNeedRelievedFlowId(const string& _needRelievedFlowId)
{
    m_needRelievedFlowId = _needRelievedFlowId;
    m_needRelievedFlowIdHasBeenSet = true;
}

bool CreateReleaseFlowRequest::NeedRelievedFlowIdHasBeenSet() const
{
    return m_needRelievedFlowIdHasBeenSet;
}

RelieveInfo CreateReleaseFlowRequest::GetReliveInfo() const
{
    return m_reliveInfo;
}

void CreateReleaseFlowRequest::SetReliveInfo(const RelieveInfo& _reliveInfo)
{
    m_reliveInfo = _reliveInfo;
    m_reliveInfoHasBeenSet = true;
}

bool CreateReleaseFlowRequest::ReliveInfoHasBeenSet() const
{
    return m_reliveInfoHasBeenSet;
}

vector<ReleasedApprover> CreateReleaseFlowRequest::GetReleasedApprovers() const
{
    return m_releasedApprovers;
}

void CreateReleaseFlowRequest::SetReleasedApprovers(const vector<ReleasedApprover>& _releasedApprovers)
{
    m_releasedApprovers = _releasedApprovers;
    m_releasedApproversHasBeenSet = true;
}

bool CreateReleaseFlowRequest::ReleasedApproversHasBeenSet() const
{
    return m_releasedApproversHasBeenSet;
}


