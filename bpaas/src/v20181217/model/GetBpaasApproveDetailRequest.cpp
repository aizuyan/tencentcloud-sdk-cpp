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

#include <tencentcloud/bpaas/v20181217/model/GetBpaasApproveDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Bpaas::V20181217::Model;
using namespace std;

GetBpaasApproveDetailRequest::GetBpaasApproveDetailRequest() :
    m_approveIdHasBeenSet(false)
{
}

string GetBpaasApproveDetailRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_approveIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApproveId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_approveId, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t GetBpaasApproveDetailRequest::GetApproveId() const
{
    return m_approveId;
}

void GetBpaasApproveDetailRequest::SetApproveId(const uint64_t& _approveId)
{
    m_approveId = _approveId;
    m_approveIdHasBeenSet = true;
}

bool GetBpaasApproveDetailRequest::ApproveIdHasBeenSet() const
{
    return m_approveIdHasBeenSet;
}


