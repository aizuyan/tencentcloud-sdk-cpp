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

#include <tencentcloud/lighthouse/v20200324/model/ResetInstanceRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace rapidjson;
using namespace std;

ResetInstanceRequest::ResetInstanceRequest() :
    m_instanceIdHasBeenSet(false),
    m_blueprintIdHasBeenSet(false)
{
}

string ResetInstanceRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_blueprintIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlueprintId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_blueprintId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ResetInstanceRequest::GetInstanceId() const
{
    return m_instanceId;
}

void ResetInstanceRequest::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ResetInstanceRequest::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ResetInstanceRequest::GetBlueprintId() const
{
    return m_blueprintId;
}

void ResetInstanceRequest::SetBlueprintId(const string& _blueprintId)
{
    m_blueprintId = _blueprintId;
    m_blueprintIdHasBeenSet = true;
}

bool ResetInstanceRequest::BlueprintIdHasBeenSet() const
{
    return m_blueprintIdHasBeenSet;
}


