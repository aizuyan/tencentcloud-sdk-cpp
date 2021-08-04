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

#include <tencentcloud/bda/v20200324/model/CreateTraceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

CreateTraceResponse::CreateTraceResponse() :
    m_traceIdHasBeenSet(false),
    m_bodyModelVersionHasBeenSet(false),
    m_inputRetCodeHasBeenSet(false),
    m_inputRetCodeDetailsHasBeenSet(false)
{
}

CoreInternalOutcome CreateTraceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("TraceId") && !rsp["TraceId"].IsNull())
    {
        if (!rsp["TraceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `TraceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_traceId = string(rsp["TraceId"].GetString());
        m_traceIdHasBeenSet = true;
    }

    if (rsp.HasMember("BodyModelVersion") && !rsp["BodyModelVersion"].IsNull())
    {
        if (!rsp["BodyModelVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `BodyModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bodyModelVersion = string(rsp["BodyModelVersion"].GetString());
        m_bodyModelVersionHasBeenSet = true;
    }

    if (rsp.HasMember("InputRetCode") && !rsp["InputRetCode"].IsNull())
    {
        if (!rsp["InputRetCode"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `InputRetCode` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_inputRetCode = rsp["InputRetCode"].GetInt64();
        m_inputRetCodeHasBeenSet = true;
    }

    if (rsp.HasMember("InputRetCodeDetails") && !rsp["InputRetCodeDetails"].IsNull())
    {
        if (!rsp["InputRetCodeDetails"].IsArray())
            return CoreInternalOutcome(Error("response `InputRetCodeDetails` is not array type"));

        const rapidjson::Value &tmpValue = rsp["InputRetCodeDetails"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_inputRetCodeDetails.push_back((*itr).GetInt64());
        }
        m_inputRetCodeDetailsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string CreateTraceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_traceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TraceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_traceId.c_str(), allocator).Move(), allocator);
    }

    if (m_bodyModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BodyModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_bodyModelVersion.c_str(), allocator).Move(), allocator);
    }

    if (m_inputRetCodeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputRetCode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_inputRetCode, allocator);
    }

    if (m_inputRetCodeDetailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InputRetCodeDetails";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_inputRetCodeDetails.begin(); itr != m_inputRetCodeDetails.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
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


string CreateTraceResponse::GetTraceId() const
{
    return m_traceId;
}

bool CreateTraceResponse::TraceIdHasBeenSet() const
{
    return m_traceIdHasBeenSet;
}

string CreateTraceResponse::GetBodyModelVersion() const
{
    return m_bodyModelVersion;
}

bool CreateTraceResponse::BodyModelVersionHasBeenSet() const
{
    return m_bodyModelVersionHasBeenSet;
}

int64_t CreateTraceResponse::GetInputRetCode() const
{
    return m_inputRetCode;
}

bool CreateTraceResponse::InputRetCodeHasBeenSet() const
{
    return m_inputRetCodeHasBeenSet;
}

vector<int64_t> CreateTraceResponse::GetInputRetCodeDetails() const
{
    return m_inputRetCodeDetails;
}

bool CreateTraceResponse::InputRetCodeDetailsHasBeenSet() const
{
    return m_inputRetCodeDetailsHasBeenSet;
}


