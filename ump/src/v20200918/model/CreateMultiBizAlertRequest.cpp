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

#include <tencentcloud/ump/v20200918/model/CreateMultiBizAlertRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ump::V20200918::Model;
using namespace rapidjson;
using namespace std;

CreateMultiBizAlertRequest::CreateMultiBizAlertRequest() :
    m_groupCodeHasBeenSet(false),
    m_mallIdHasBeenSet(false),
    m_zoneIdHasBeenSet(false),
    m_cameraIdHasBeenSet(false),
    m_captureTimeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_imageHasBeenSet(false)
{
}

string CreateMultiBizAlertRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_groupCodeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GroupCode";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_groupCode.c_str(), allocator).Move(), allocator);
    }

    if (m_mallIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "MallId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_mallId, allocator);
    }

    if (m_zoneIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_zoneId, allocator);
    }

    if (m_cameraIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CameraId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_cameraId, allocator);
    }

    if (m_captureTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CaptureTime";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_captureTime, allocator);
    }

    if (m_stateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_state, allocator);
    }

    if (m_imageHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Image";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_image.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string CreateMultiBizAlertRequest::GetGroupCode() const
{
    return m_groupCode;
}

void CreateMultiBizAlertRequest::SetGroupCode(const string& _groupCode)
{
    m_groupCode = _groupCode;
    m_groupCodeHasBeenSet = true;
}

bool CreateMultiBizAlertRequest::GroupCodeHasBeenSet() const
{
    return m_groupCodeHasBeenSet;
}

uint64_t CreateMultiBizAlertRequest::GetMallId() const
{
    return m_mallId;
}

void CreateMultiBizAlertRequest::SetMallId(const uint64_t& _mallId)
{
    m_mallId = _mallId;
    m_mallIdHasBeenSet = true;
}

bool CreateMultiBizAlertRequest::MallIdHasBeenSet() const
{
    return m_mallIdHasBeenSet;
}

uint64_t CreateMultiBizAlertRequest::GetZoneId() const
{
    return m_zoneId;
}

void CreateMultiBizAlertRequest::SetZoneId(const uint64_t& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool CreateMultiBizAlertRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

uint64_t CreateMultiBizAlertRequest::GetCameraId() const
{
    return m_cameraId;
}

void CreateMultiBizAlertRequest::SetCameraId(const uint64_t& _cameraId)
{
    m_cameraId = _cameraId;
    m_cameraIdHasBeenSet = true;
}

bool CreateMultiBizAlertRequest::CameraIdHasBeenSet() const
{
    return m_cameraIdHasBeenSet;
}

uint64_t CreateMultiBizAlertRequest::GetCaptureTime() const
{
    return m_captureTime;
}

void CreateMultiBizAlertRequest::SetCaptureTime(const uint64_t& _captureTime)
{
    m_captureTime = _captureTime;
    m_captureTimeHasBeenSet = true;
}

bool CreateMultiBizAlertRequest::CaptureTimeHasBeenSet() const
{
    return m_captureTimeHasBeenSet;
}

int64_t CreateMultiBizAlertRequest::GetState() const
{
    return m_state;
}

void CreateMultiBizAlertRequest::SetState(const int64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool CreateMultiBizAlertRequest::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string CreateMultiBizAlertRequest::GetImage() const
{
    return m_image;
}

void CreateMultiBizAlertRequest::SetImage(const string& _image)
{
    m_image = _image;
    m_imageHasBeenSet = true;
}

bool CreateMultiBizAlertRequest::ImageHasBeenSet() const
{
    return m_imageHasBeenSet;
}


