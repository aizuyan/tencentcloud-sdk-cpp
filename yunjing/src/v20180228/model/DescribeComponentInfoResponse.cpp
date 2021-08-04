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

#include <tencentcloud/yunjing/v20180228/model/DescribeComponentInfoResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Yunjing::V20180228::Model;
using namespace std;

DescribeComponentInfoResponse::DescribeComponentInfoResponse() :
    m_idHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_componentTypeHasBeenSet(false),
    m_homepageHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

CoreInternalOutcome DescribeComponentInfoResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("Id") && !rsp["Id"].IsNull())
    {
        if (!rsp["Id"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = rsp["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (rsp.HasMember("ComponentName") && !rsp["ComponentName"].IsNull())
    {
        if (!rsp["ComponentName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ComponentName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentName = string(rsp["ComponentName"].GetString());
        m_componentNameHasBeenSet = true;
    }

    if (rsp.HasMember("ComponentType") && !rsp["ComponentType"].IsNull())
    {
        if (!rsp["ComponentType"].IsString())
        {
            return CoreInternalOutcome(Error("response `ComponentType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_componentType = string(rsp["ComponentType"].GetString());
        m_componentTypeHasBeenSet = true;
    }

    if (rsp.HasMember("Homepage") && !rsp["Homepage"].IsNull())
    {
        if (!rsp["Homepage"].IsString())
        {
            return CoreInternalOutcome(Error("response `Homepage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_homepage = string(rsp["Homepage"].GetString());
        m_homepageHasBeenSet = true;
    }

    if (rsp.HasMember("Description") && !rsp["Description"].IsNull())
    {
        if (!rsp["Description"].IsString())
        {
            return CoreInternalOutcome(Error("response `Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(rsp["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeComponentInfoResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_componentNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentName.c_str(), allocator).Move(), allocator);
    }

    if (m_componentTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ComponentType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_componentType.c_str(), allocator).Move(), allocator);
    }

    if (m_homepageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Homepage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_homepage.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
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


uint64_t DescribeComponentInfoResponse::GetId() const
{
    return m_id;
}

bool DescribeComponentInfoResponse::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string DescribeComponentInfoResponse::GetComponentName() const
{
    return m_componentName;
}

bool DescribeComponentInfoResponse::ComponentNameHasBeenSet() const
{
    return m_componentNameHasBeenSet;
}

string DescribeComponentInfoResponse::GetComponentType() const
{
    return m_componentType;
}

bool DescribeComponentInfoResponse::ComponentTypeHasBeenSet() const
{
    return m_componentTypeHasBeenSet;
}

string DescribeComponentInfoResponse::GetHomepage() const
{
    return m_homepage;
}

bool DescribeComponentInfoResponse::HomepageHasBeenSet() const
{
    return m_homepageHasBeenSet;
}

string DescribeComponentInfoResponse::GetDescription() const
{
    return m_description;
}

bool DescribeComponentInfoResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}


