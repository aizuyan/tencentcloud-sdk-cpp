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

#include <tencentcloud/chdfs/v20201112/model/DescribeMountPointsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace rapidjson;
using namespace std;

DescribeMountPointsRequest::DescribeMountPointsRequest() :
    m_fileSystemIdHasBeenSet(false),
    m_accessGroupIdHasBeenSet(false),
    m_ownerUinHasBeenSet(false)
{
}

string DescribeMountPointsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_fileSystemIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "FileSystemId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_fileSystemId.c_str(), allocator).Move(), allocator);
    }

    if (m_accessGroupIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "AccessGroupId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_accessGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_ownerUinHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OwnerUin";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_ownerUin, allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeMountPointsRequest::GetFileSystemId() const
{
    return m_fileSystemId;
}

void DescribeMountPointsRequest::SetFileSystemId(const string& _fileSystemId)
{
    m_fileSystemId = _fileSystemId;
    m_fileSystemIdHasBeenSet = true;
}

bool DescribeMountPointsRequest::FileSystemIdHasBeenSet() const
{
    return m_fileSystemIdHasBeenSet;
}

string DescribeMountPointsRequest::GetAccessGroupId() const
{
    return m_accessGroupId;
}

void DescribeMountPointsRequest::SetAccessGroupId(const string& _accessGroupId)
{
    m_accessGroupId = _accessGroupId;
    m_accessGroupIdHasBeenSet = true;
}

bool DescribeMountPointsRequest::AccessGroupIdHasBeenSet() const
{
    return m_accessGroupIdHasBeenSet;
}

uint64_t DescribeMountPointsRequest::GetOwnerUin() const
{
    return m_ownerUin;
}

void DescribeMountPointsRequest::SetOwnerUin(const uint64_t& _ownerUin)
{
    m_ownerUin = _ownerUin;
    m_ownerUinHasBeenSet = true;
}

bool DescribeMountPointsRequest::OwnerUinHasBeenSet() const
{
    return m_ownerUinHasBeenSet;
}


