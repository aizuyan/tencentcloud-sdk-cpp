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

#include <tencentcloud/tci/v20190318/model/ModifyLibraryResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tci::V20190318::Model;
using namespace std;

ModifyLibraryResponse::ModifyLibraryResponse() :
    m_libraryIdHasBeenSet(false),
    m_libraryNameHasBeenSet(false)
{
}

CoreInternalOutcome ModifyLibraryResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("LibraryId") && !rsp["LibraryId"].IsNull())
    {
        if (!rsp["LibraryId"].IsString())
        {
            return CoreInternalOutcome(Error("response `LibraryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryId = string(rsp["LibraryId"].GetString());
        m_libraryIdHasBeenSet = true;
    }

    if (rsp.HasMember("LibraryName") && !rsp["LibraryName"].IsNull())
    {
        if (!rsp["LibraryName"].IsString())
        {
            return CoreInternalOutcome(Error("response `LibraryName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libraryName = string(rsp["LibraryName"].GetString());
        m_libraryNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string ModifyLibraryResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_libraryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryId.c_str(), allocator).Move(), allocator);
    }

    if (m_libraryNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibraryName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libraryName.c_str(), allocator).Move(), allocator);
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


string ModifyLibraryResponse::GetLibraryId() const
{
    return m_libraryId;
}

bool ModifyLibraryResponse::LibraryIdHasBeenSet() const
{
    return m_libraryIdHasBeenSet;
}

string ModifyLibraryResponse::GetLibraryName() const
{
    return m_libraryName;
}

bool ModifyLibraryResponse::LibraryNameHasBeenSet() const
{
    return m_libraryNameHasBeenSet;
}


