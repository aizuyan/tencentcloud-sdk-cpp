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

#include <tencentcloud/gse/v20191112/model/DescribeGameServerSessionDetailsResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gse::V20191112::Model;
using namespace std;

DescribeGameServerSessionDetailsResponse::DescribeGameServerSessionDetailsResponse() :
    m_gameServerSessionDetailsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

CoreInternalOutcome DescribeGameServerSessionDetailsResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("GameServerSessionDetails") && !rsp["GameServerSessionDetails"].IsNull())
    {
        if (!rsp["GameServerSessionDetails"].IsArray())
            return CoreInternalOutcome(Error("response `GameServerSessionDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["GameServerSessionDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            GameServerSessionDetail item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_gameServerSessionDetails.push_back(item);
        }
        m_gameServerSessionDetailsHasBeenSet = true;
    }

    if (rsp.HasMember("NextToken") && !rsp["NextToken"].IsNull())
    {
        if (!rsp["NextToken"].IsString())
        {
            return CoreInternalOutcome(Error("response `NextToken` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_nextToken = string(rsp["NextToken"].GetString());
        m_nextTokenHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeGameServerSessionDetailsResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_gameServerSessionDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GameServerSessionDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_gameServerSessionDetails.begin(); itr != m_gameServerSessionDetails.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_nextTokenHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NextToken";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_nextToken.c_str(), allocator).Move(), allocator);
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);
    
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<GameServerSessionDetail> DescribeGameServerSessionDetailsResponse::GetGameServerSessionDetails() const
{
    return m_gameServerSessionDetails;
}

bool DescribeGameServerSessionDetailsResponse::GameServerSessionDetailsHasBeenSet() const
{
    return m_gameServerSessionDetailsHasBeenSet;
}

string DescribeGameServerSessionDetailsResponse::GetNextToken() const
{
    return m_nextToken;
}

bool DescribeGameServerSessionDetailsResponse::NextTokenHasBeenSet() const
{
    return m_nextTokenHasBeenSet;
}


