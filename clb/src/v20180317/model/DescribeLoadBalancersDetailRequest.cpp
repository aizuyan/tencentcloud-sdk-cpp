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

#include <tencentcloud/clb/v20180317/model/DescribeLoadBalancersDetailRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Clb::V20180317::Model;
using namespace rapidjson;
using namespace std;

DescribeLoadBalancersDetailRequest::DescribeLoadBalancersDetailRequest() :
    m_limitHasBeenSet(false),
    m_offsetHasBeenSet(false),
    m_fieldsHasBeenSet(false),
    m_targetTypeHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

string DescribeLoadBalancersDetailRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_limitHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Limit";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_limit, allocator);
    }

    if (m_offsetHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Offset";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_offset, allocator);
    }

    if (m_fieldsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Fields";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_fields.begin(); itr != m_fields.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_targetTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "TargetType";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_targetType.c_str(), allocator).Move(), allocator);
    }

    if (m_filtersHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Filters";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filters.begin(); itr != m_filters.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


uint64_t DescribeLoadBalancersDetailRequest::GetLimit() const
{
    return m_limit;
}

void DescribeLoadBalancersDetailRequest::SetLimit(const uint64_t& _limit)
{
    m_limit = _limit;
    m_limitHasBeenSet = true;
}

bool DescribeLoadBalancersDetailRequest::LimitHasBeenSet() const
{
    return m_limitHasBeenSet;
}

uint64_t DescribeLoadBalancersDetailRequest::GetOffset() const
{
    return m_offset;
}

void DescribeLoadBalancersDetailRequest::SetOffset(const uint64_t& _offset)
{
    m_offset = _offset;
    m_offsetHasBeenSet = true;
}

bool DescribeLoadBalancersDetailRequest::OffsetHasBeenSet() const
{
    return m_offsetHasBeenSet;
}

vector<string> DescribeLoadBalancersDetailRequest::GetFields() const
{
    return m_fields;
}

void DescribeLoadBalancersDetailRequest::SetFields(const vector<string>& _fields)
{
    m_fields = _fields;
    m_fieldsHasBeenSet = true;
}

bool DescribeLoadBalancersDetailRequest::FieldsHasBeenSet() const
{
    return m_fieldsHasBeenSet;
}

string DescribeLoadBalancersDetailRequest::GetTargetType() const
{
    return m_targetType;
}

void DescribeLoadBalancersDetailRequest::SetTargetType(const string& _targetType)
{
    m_targetType = _targetType;
    m_targetTypeHasBeenSet = true;
}

bool DescribeLoadBalancersDetailRequest::TargetTypeHasBeenSet() const
{
    return m_targetTypeHasBeenSet;
}

vector<Filter> DescribeLoadBalancersDetailRequest::GetFilters() const
{
    return m_filters;
}

void DescribeLoadBalancersDetailRequest::SetFilters(const vector<Filter>& _filters)
{
    m_filters = _filters;
    m_filtersHasBeenSet = true;
}

bool DescribeLoadBalancersDetailRequest::FiltersHasBeenSet() const
{
    return m_filtersHasBeenSet;
}


