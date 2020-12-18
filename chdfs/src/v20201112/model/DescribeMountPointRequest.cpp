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

#include <tencentcloud/chdfs/v20201112/model/DescribeMountPointRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace rapidjson;
using namespace std;

DescribeMountPointRequest::DescribeMountPointRequest() :
    m_mountPointIdHasBeenSet(false)
{
}

string DescribeMountPointRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_mountPointIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MountPointId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_mountPointId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMountPointRequest::GetMountPointId() const
{
    return m_mountPointId;
}

void DescribeMountPointRequest::SetMountPointId(const string& _mountPointId)
{
    m_mountPointId = _mountPointId;
    m_mountPointIdHasBeenSet = true;
}

bool DescribeMountPointRequest::MountPointIdHasBeenSet() const
{
    return m_mountPointIdHasBeenSet;
}


