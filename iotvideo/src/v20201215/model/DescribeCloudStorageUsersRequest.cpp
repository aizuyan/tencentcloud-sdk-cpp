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

#include <tencentcloud/iotvideo/v20201215/model/DescribeCloudStorageUsersRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

DescribeCloudStorageUsersRequest::DescribeCloudStorageUsersRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false)
{
}

string DescribeCloudStorageUsersRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_productIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_productId.c_str(), allocator).Move(), allocator);
    }

    if (m_deviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeviceName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_deviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_limitHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeCloudStorageUsersRequest::GetProductId() const
{
    return m_productId;
}

void DescribeCloudStorageUsersRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool DescribeCloudStorageUsersRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string DescribeCloudStorageUsersRequest::GetDeviceName() const
{
    return m_deviceName;
}

void DescribeCloudStorageUsersRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool DescribeCloudStorageUsersRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

uint64_t DescribeCloudStorageUsersRequest::GetLimit() const
{
    return m_limit;
}

void DescribeCloudStorageUsersRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeCloudStorageUsersRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeCloudStorageUsersRequest::GetOffset() const
{
    return m_offset;
}

void DescribeCloudStorageUsersRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeCloudStorageUsersRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}


