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

#include <tencentcloud/tcm/v20210413/model/UnlinkPrometheusRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

UnlinkPrometheusRequest::UnlinkPrometheusRequest() :
    m_meshIDHasBeenSet(false)
{
}

string UnlinkPrometheusRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_meshIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MeshID";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_meshID.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string UnlinkPrometheusRequest::GetMeshID() const
{
    return m_meshID;
}

void UnlinkPrometheusRequest::SetMeshID(const string& _meshID)
{
    m_meshID = _meshID;
    m_meshIDHasBeenSet = true;
}

bool UnlinkPrometheusRequest::MeshIDHasBeenSet() const
{
    return m_meshIDHasBeenSet;
}


