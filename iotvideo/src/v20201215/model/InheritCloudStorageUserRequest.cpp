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

#include <tencentcloud/iotvideo/v20201215/model/InheritCloudStorageUserRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotvideo::V20201215::Model;
using namespace std;

InheritCloudStorageUserRequest::InheritCloudStorageUserRequest() :
    m_productIdHasBeenSet(false),
    m_deviceNameHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_toUserIdHasBeenSet(false)
{
}

string InheritCloudStorageUserRequest::ToJsonString() const
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

    if (m_userIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_userId.c_str(), allocator).Move(), allocator);
    }

    if (m_toUserIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ToUserId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_toUserId.c_str(), allocator).Move(), allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string InheritCloudStorageUserRequest::GetProductId() const
{
    return m_productId;
}

void InheritCloudStorageUserRequest::SetProductId(const string& _productId)
{
    m_productId = _productId;
    m_productIdHasBeenSet = true;
}

bool InheritCloudStorageUserRequest::ProductIdHasBeenSet() const
{
    return m_productIdHasBeenSet;
}

string InheritCloudStorageUserRequest::GetDeviceName() const
{
    return m_deviceName;
}

void InheritCloudStorageUserRequest::SetDeviceName(const string& _deviceName)
{
    m_deviceName = _deviceName;
    m_deviceNameHasBeenSet = true;
}

bool InheritCloudStorageUserRequest::DeviceNameHasBeenSet() const
{
    return m_deviceNameHasBeenSet;
}

string InheritCloudStorageUserRequest::GetUserId() const
{
    return m_userId;
}

void InheritCloudStorageUserRequest::SetUserId(const string& _userId)
{
    m_userId = _userId;
    m_userIdHasBeenSet = true;
}

bool InheritCloudStorageUserRequest::UserIdHasBeenSet() const
{
    return m_userIdHasBeenSet;
}

string InheritCloudStorageUserRequest::GetToUserId() const
{
    return m_toUserId;
}

void InheritCloudStorageUserRequest::SetToUserId(const string& _toUserId)
{
    m_toUserId = _toUserId;
    m_toUserIdHasBeenSet = true;
}

bool InheritCloudStorageUserRequest::ToUserIdHasBeenSet() const
{
    return m_toUserIdHasBeenSet;
}


