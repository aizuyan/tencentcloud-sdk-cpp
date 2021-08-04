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

#include <tencentcloud/iai/v20200303/model/DeleteFaceResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

DeleteFaceResponse::DeleteFaceResponse() :
    m_sucDeletedNumHasBeenSet(false),
    m_sucFaceIdsHasBeenSet(false)
{
}

CoreInternalOutcome DeleteFaceResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SucDeletedNum") && !rsp["SucDeletedNum"].IsNull())
    {
        if (!rsp["SucDeletedNum"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `SucDeletedNum` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_sucDeletedNum = rsp["SucDeletedNum"].GetUint64();
        m_sucDeletedNumHasBeenSet = true;
    }

    if (rsp.HasMember("SucFaceIds") && !rsp["SucFaceIds"].IsNull())
    {
        if (!rsp["SucFaceIds"].IsArray())
            return CoreInternalOutcome(Error("response `SucFaceIds` is not array type"));

        const rapidjson::Value &tmpValue = rsp["SucFaceIds"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_sucFaceIds.push_back((*itr).GetString());
        }
        m_sucFaceIdsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DeleteFaceResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_sucDeletedNumHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SucDeletedNum";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sucDeletedNum, allocator);
    }

    if (m_sucFaceIdsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SucFaceIds";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_sucFaceIds.begin(); itr != m_sucFaceIds.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
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


uint64_t DeleteFaceResponse::GetSucDeletedNum() const
{
    return m_sucDeletedNum;
}

bool DeleteFaceResponse::SucDeletedNumHasBeenSet() const
{
    return m_sucDeletedNumHasBeenSet;
}

vector<string> DeleteFaceResponse::GetSucFaceIds() const
{
    return m_sucFaceIds;
}

bool DeleteFaceResponse::SucFaceIdsHasBeenSet() const
{
    return m_sucFaceIdsHasBeenSet;
}


