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

#include <tencentcloud/wedata/v20210820/model/MakeUpTasksNewRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

MakeUpTasksNewRequest::MakeUpTasksNewRequest() :
    m_taskIdListHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_makeUpTypeHasBeenSet(false),
    m_projectIdHasBeenSet(false),
    m_checkParentHasBeenSet(false)
{
}

string MakeUpTasksNewRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_taskIdListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskIdList";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_taskIdList.begin(); itr != m_taskIdList.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_startTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StartTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_startTime.c_str(), allocator).Move(), allocator);
    }

    if (m_endTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EndTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_endTime.c_str(), allocator).Move(), allocator);
    }

    if (m_makeUpTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MakeUpType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_makeUpType, allocator);
    }

    if (m_projectIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProjectId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_projectId.c_str(), allocator).Move(), allocator);
    }

    if (m_checkParentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CheckParent";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_checkParent, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<string> MakeUpTasksNewRequest::GetTaskIdList() const
{
    return m_taskIdList;
}

void MakeUpTasksNewRequest::SetTaskIdList(const vector<string>& _taskIdList)
{
    m_taskIdList = _taskIdList;
    m_taskIdListHasBeenSet = true;
}

bool MakeUpTasksNewRequest::TaskIdListHasBeenSet() const
{
    return m_taskIdListHasBeenSet;
}

string MakeUpTasksNewRequest::GetStartTime() const
{
    return m_startTime;
}

void MakeUpTasksNewRequest::SetStartTime(const string& _startTime)
{
    m_startTime = _startTime;
    m_startTimeHasBeenSet = true;
}

bool MakeUpTasksNewRequest::StartTimeHasBeenSet() const
{
    return m_startTimeHasBeenSet;
}

string MakeUpTasksNewRequest::GetEndTime() const
{
    return m_endTime;
}

void MakeUpTasksNewRequest::SetEndTime(const string& _endTime)
{
    m_endTime = _endTime;
    m_endTimeHasBeenSet = true;
}

bool MakeUpTasksNewRequest::EndTimeHasBeenSet() const
{
    return m_endTimeHasBeenSet;
}

uint64_t MakeUpTasksNewRequest::GetMakeUpType() const
{
    return m_makeUpType;
}

void MakeUpTasksNewRequest::SetMakeUpType(const uint64_t& _makeUpType)
{
    m_makeUpType = _makeUpType;
    m_makeUpTypeHasBeenSet = true;
}

bool MakeUpTasksNewRequest::MakeUpTypeHasBeenSet() const
{
    return m_makeUpTypeHasBeenSet;
}

string MakeUpTasksNewRequest::GetProjectId() const
{
    return m_projectId;
}

void MakeUpTasksNewRequest::SetProjectId(const string& _projectId)
{
    m_projectId = _projectId;
    m_projectIdHasBeenSet = true;
}

bool MakeUpTasksNewRequest::ProjectIdHasBeenSet() const
{
    return m_projectIdHasBeenSet;
}

bool MakeUpTasksNewRequest::GetCheckParent() const
{
    return m_checkParent;
}

void MakeUpTasksNewRequest::SetCheckParent(const bool& _checkParent)
{
    m_checkParent = _checkParent;
    m_checkParentHasBeenSet = true;
}

bool MakeUpTasksNewRequest::CheckParentHasBeenSet() const
{
    return m_checkParentHasBeenSet;
}


