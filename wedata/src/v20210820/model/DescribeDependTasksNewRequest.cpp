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

#include <tencentcloud/wedata/v20210820/model/DescribeDependTasksNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

DescribeDependTasksNewRequest::DescribeDependTasksNewRequest() :
    m_taskIdHasBeenSet(false),
    m_deepHasBeenSet(false),
    m_upHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_workflowIdHasBeenSet(false)
{
}

string DescribeDependTasksNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_deepHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Deep";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_deep, allocator);
    }

    if (m_upHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Up";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_up, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_workflowIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WorkflowId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_workflowId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeDependTasksNewRequest::GetTaskId() const
{
    return m_taskId;
}

void DescribeDependTasksNewRequest::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeDependTasksNewRequest::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

uint64_t DescribeDependTasksNewRequest::GetDeep() const
{
    return m_deep;
}

void DescribeDependTasksNewRequest::SetDeep(const uint64_t& _deep)
{
    m_deep = _deep;
    m_deepHasBeenSet = true;
}

bool DescribeDependTasksNewRequest::DeepHasBeenSet() const
{
    return m_deepHasBeenSet;
}

uint64_t DescribeDependTasksNewRequest::GetUp() const
{
    return m_up;
}

void DescribeDependTasksNewRequest::SetUp(const uint64_t& _up)
{
    m_up = _up;
    m_upHasBeenSet = true;
}

bool DescribeDependTasksNewRequest::UpHasBeenSet() const
{
    return m_upHasBeenSet;
}

string DescribeDependTasksNewRequest::GetProjectId() const
{
    return m_projectId;
}

void DescribeDependTasksNewRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool DescribeDependTasksNewRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

string DescribeDependTasksNewRequest::GetWorkflowId() const
{
    return m_workflowId;
}

void DescribeDependTasksNewRequest::SetWorkflowId(const string& _workflowId)
{
    m_workflowId = _workflowId;
    m_workflowIdHasBeenSet = true;
}

bool DescribeDependTasksNewRequest::WorkflowIdHasBeenSet() const
{
    return m_workflowIdHasBeenSet;
}


