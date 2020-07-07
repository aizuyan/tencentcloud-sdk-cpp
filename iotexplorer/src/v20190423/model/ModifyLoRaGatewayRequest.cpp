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

#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaGatewayRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Iotexplorer::V20190423::Model;
using namespace rapidjson;
using namespace std;

ModifyLoRaGatewayRequest::ModifyLoRaGatewayRequest() :
    m_descriptionHasBeenSet(false),
    m_gatewayIdHasBeenSet(false),
    m_locationHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_isPublicHasBeenSet(false),
    m_positionHasBeenSet(false),
    m_positionDetailsHasBeenSet(false)
{
}

string ModifyLoRaGatewayRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_descriptionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_gatewayIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "GatewayId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_gatewayId.c_str(), allocator).Move(), allocator);
    }

    if (m_locationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Location";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_location.ToJsonObject(d[key.c_str()], allocator);
    }

    if (m_nameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_isPublicHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsPublic";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_isPublic, allocator);
    }

    if (m_positionHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Position";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_position.c_str(), allocator).Move(), allocator);
    }

    if (m_positionDetailsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PositionDetails";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_positionDetails.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyLoRaGatewayRequest::GetDescription() const
{
    return m_description;
}

void ModifyLoRaGatewayRequest::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool ModifyLoRaGatewayRequest::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string ModifyLoRaGatewayRequest::GetGatewayId() const
{
    return m_gatewayId;
}

void ModifyLoRaGatewayRequest::SetGatewayId(const string& _gatewayId)
{
    m_gatewayId = _gatewayId;
    m_gatewayIdHasBeenSet = true;
}

bool ModifyLoRaGatewayRequest::GatewayIdHasBeenSet() const
{
    return m_gatewayIdHasBeenSet;
}

LoRaGatewayLocation ModifyLoRaGatewayRequest::GetLocation() const
{
    return m_location;
}

void ModifyLoRaGatewayRequest::SetLocation(const LoRaGatewayLocation& _location)
{
    m_location = _location;
    m_locationHasBeenSet = true;
}

bool ModifyLoRaGatewayRequest::LocationHasBeenSet() const
{
    return m_locationHasBeenSet;
}

string ModifyLoRaGatewayRequest::GetName() const
{
    return m_name;
}

void ModifyLoRaGatewayRequest::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ModifyLoRaGatewayRequest::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

bool ModifyLoRaGatewayRequest::GetIsPublic() const
{
    return m_isPublic;
}

void ModifyLoRaGatewayRequest::SetIsPublic(const bool& _isPublic)
{
    m_isPublic = _isPublic;
    m_isPublicHasBeenSet = true;
}

bool ModifyLoRaGatewayRequest::IsPublicHasBeenSet() const
{
    return m_isPublicHasBeenSet;
}

string ModifyLoRaGatewayRequest::GetPosition() const
{
    return m_position;
}

void ModifyLoRaGatewayRequest::SetPosition(const string& _position)
{
    m_position = _position;
    m_positionHasBeenSet = true;
}

bool ModifyLoRaGatewayRequest::PositionHasBeenSet() const
{
    return m_positionHasBeenSet;
}

string ModifyLoRaGatewayRequest::GetPositionDetails() const
{
    return m_positionDetails;
}

void ModifyLoRaGatewayRequest::SetPositionDetails(const string& _positionDetails)
{
    m_positionDetails = _positionDetails;
    m_positionDetailsHasBeenSet = true;
}

bool ModifyLoRaGatewayRequest::PositionDetailsHasBeenSet() const
{
    return m_positionDetailsHasBeenSet;
}


