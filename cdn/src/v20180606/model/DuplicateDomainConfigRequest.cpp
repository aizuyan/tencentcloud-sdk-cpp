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

#include <tencentcloud/cdn/v20180606/model/DuplicateDomainConfigRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Cdn::V20180606::Model;
using namespace rapidjson;
using namespace std;

DuplicateDomainConfigRequest::DuplicateDomainConfigRequest() :
    m_domainHasBeenSet(false),
    m_referenceDomainHasBeenSet(false)
{
}

string DuplicateDomainConfigRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_domainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Domain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_domain.c_str(), allocator).Move(), allocator);
    }

    if (m_referenceDomainHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ReferenceDomain";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_referenceDomain.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DuplicateDomainConfigRequest::GetDomain() const
{
    return m_domain;
}

void DuplicateDomainConfigRequest::SetDomain(const string& _domain)
{
    m_domain = _domain;
    m_domainHasBeenSet = true;
}

bool DuplicateDomainConfigRequest::DomainHasBeenSet() const
{
    return m_domainHasBeenSet;
}

string DuplicateDomainConfigRequest::GetReferenceDomain() const
{
    return m_referenceDomain;
}

void DuplicateDomainConfigRequest::SetReferenceDomain(const string& _referenceDomain)
{
    m_referenceDomain = _referenceDomain;
    m_referenceDomainHasBeenSet = true;
}

bool DuplicateDomainConfigRequest::ReferenceDomainHasBeenSet() const
{
    return m_referenceDomainHasBeenSet;
}


