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

#include <tencentcloud/teo/v20220901/model/ModifyAliasDomainRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

ModifyAliasDomainRequest::ModifyAliasDomainRequest() :
    m_zoneIdHasBeenSet(false),
    m_aliasNameHasBeenSet(false),
    m_targetNameHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_certIdHasBeenSet(false)
{
}

string ModifyAliasDomainRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_zoneIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ZoneId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_zoneId.c_str(), allocator).Move(), allocator);
    }

    if (m_aliasNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AliasName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_aliasName.c_str(), allocator).Move(), allocator);
    }

    if (m_targetNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetName";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_targetName.c_str(), allocator).Move(), allocator);
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_certType.c_str(), allocator).Move(), allocator);
    }

    if (m_certIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_certId.begin(); itr != m_certId.end(); ++itr)
        {
            d[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string ModifyAliasDomainRequest::GetZoneId() const
{
    return m_zoneId;
}

void ModifyAliasDomainRequest::SetZoneId(const string& _zoneId)
{
    m_zoneId = _zoneId;
    m_zoneIdHasBeenSet = true;
}

bool ModifyAliasDomainRequest::ZoneIdHasBeenSet() const
{
    return m_zoneIdHasBeenSet;
}

string ModifyAliasDomainRequest::GetAliasName() const
{
    return m_aliasName;
}

void ModifyAliasDomainRequest::SetAliasName(const string& _aliasName)
{
    m_aliasName = _aliasName;
    m_aliasNameHasBeenSet = true;
}

bool ModifyAliasDomainRequest::AliasNameHasBeenSet() const
{
    return m_aliasNameHasBeenSet;
}

string ModifyAliasDomainRequest::GetTargetName() const
{
    return m_targetName;
}

void ModifyAliasDomainRequest::SetTargetName(const string& _targetName)
{
    m_targetName = _targetName;
    m_targetNameHasBeenSet = true;
}

bool ModifyAliasDomainRequest::TargetNameHasBeenSet() const
{
    return m_targetNameHasBeenSet;
}

string ModifyAliasDomainRequest::GetCertType() const
{
    return m_certType;
}

void ModifyAliasDomainRequest::SetCertType(const string& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool ModifyAliasDomainRequest::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

vector<string> ModifyAliasDomainRequest::GetCertId() const
{
    return m_certId;
}

void ModifyAliasDomainRequest::SetCertId(const vector<string>& _certId)
{
    m_certId = _certId;
    m_certIdHasBeenSet = true;
}

bool ModifyAliasDomainRequest::CertIdHasBeenSet() const
{
    return m_certIdHasBeenSet;
}


