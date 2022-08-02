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

#include <tencentcloud/essbasic/v20210526/model/ChannelCreateBatchCancelFlowUrlResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

ChannelCreateBatchCancelFlowUrlResponse::ChannelCreateBatchCancelFlowUrlResponse() :
    m_batchCancelFlowUrlHasBeenSet(false),
    m_failMessagesHasBeenSet(false),
    m_urlExpireOnHasBeenSet(false)
{
}

CoreInternalOutcome ChannelCreateBatchCancelFlowUrlResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("BatchCancelFlowUrl") && !rsp["BatchCancelFlowUrl"].IsNull())
    {
        if (!rsp["BatchCancelFlowUrl"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `BatchCancelFlowUrl` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_batchCancelFlowUrl = string(rsp["BatchCancelFlowUrl"].GetString());
        m_batchCancelFlowUrlHasBeenSet = true;
    }

    if (rsp.HasMember("FailMessages") && !rsp["FailMessages"].IsNull())
    {
        if (!rsp["FailMessages"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FailMessages` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FailMessages"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_failMessages.push_back((*itr).GetString());
        }
        m_failMessagesHasBeenSet = true;
    }

    if (rsp.HasMember("UrlExpireOn") && !rsp["UrlExpireOn"].IsNull())
    {
        if (!rsp["UrlExpireOn"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UrlExpireOn` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_urlExpireOn = string(rsp["UrlExpireOn"].GetString());
        m_urlExpireOnHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ChannelCreateBatchCancelFlowUrlResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_batchCancelFlowUrlHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchCancelFlowUrl";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_batchCancelFlowUrl.c_str(), allocator).Move(), allocator);
    }

    if (m_failMessagesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FailMessages";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_failMessages.begin(); itr != m_failMessages.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_urlExpireOnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UrlExpireOn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_urlExpireOn.c_str(), allocator).Move(), allocator);
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


string ChannelCreateBatchCancelFlowUrlResponse::GetBatchCancelFlowUrl() const
{
    return m_batchCancelFlowUrl;
}

bool ChannelCreateBatchCancelFlowUrlResponse::BatchCancelFlowUrlHasBeenSet() const
{
    return m_batchCancelFlowUrlHasBeenSet;
}

vector<string> ChannelCreateBatchCancelFlowUrlResponse::GetFailMessages() const
{
    return m_failMessages;
}

bool ChannelCreateBatchCancelFlowUrlResponse::FailMessagesHasBeenSet() const
{
    return m_failMessagesHasBeenSet;
}

string ChannelCreateBatchCancelFlowUrlResponse::GetUrlExpireOn() const
{
    return m_urlExpireOn;
}

bool ChannelCreateBatchCancelFlowUrlResponse::UrlExpireOnHasBeenSet() const
{
    return m_urlExpireOnHasBeenSet;
}


