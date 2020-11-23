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

#include <tencentcloud/ecm/v20190719/model/DescribeRouteConflictsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Ecm::V20190719::Model;
using namespace rapidjson;
using namespace std;

DescribeRouteConflictsRequest::DescribeRouteConflictsRequest() :
    m_routeTableIdHasBeenSet(false),
    m_destinationCidrBlocksHasBeenSet(false)
{
}

string DescribeRouteConflictsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_routeTableIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RouteTableId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_routeTableId.c_str(), allocator).Move(), allocator);
    }

    if (m_destinationCidrBlocksHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "DestinationCidrBlocks";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_destinationCidrBlocks.begin(); itr != m_destinationCidrBlocks.end(); ++itr)
        {
            d[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string DescribeRouteConflictsRequest::GetRouteTableId() const
{
    return m_routeTableId;
}

void DescribeRouteConflictsRequest::SetRouteTableId(const string& _routeTableId)
{
    m_routeTableId = _routeTableId;
    m_routeTableIdHasBeenSet = true;
}

bool DescribeRouteConflictsRequest::RouteTableIdHasBeenSet() const
{
    return m_routeTableIdHasBeenSet;
}

vector<string> DescribeRouteConflictsRequest::GetDestinationCidrBlocks() const
{
    return m_destinationCidrBlocks;
}

void DescribeRouteConflictsRequest::SetDestinationCidrBlocks(const vector<string>& _destinationCidrBlocks)
{
    m_destinationCidrBlocks = _destinationCidrBlocks;
    m_destinationCidrBlocksHasBeenSet = true;
}

bool DescribeRouteConflictsRequest::DestinationCidrBlocksHasBeenSet() const
{
    return m_destinationCidrBlocksHasBeenSet;
}


