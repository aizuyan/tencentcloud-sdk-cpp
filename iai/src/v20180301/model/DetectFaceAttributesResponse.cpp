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

#include <tencentcloud/iai/v20180301/model/DetectFaceAttributesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iai::V20180301::Model;
using namespace std;

DetectFaceAttributesResponse::DetectFaceAttributesResponse() :
    m_imageWidthHasBeenSet(false),
    m_imageHeightHasBeenSet(false),
    m_faceDetailInfosHasBeenSet(false),
    m_faceModelVersionHasBeenSet(false)
{
}

CoreInternalOutcome DetectFaceAttributesResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("ImageWidth") && !rsp["ImageWidth"].IsNull())
    {
        if (!rsp["ImageWidth"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImageWidth` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageWidth = rsp["ImageWidth"].GetUint64();
        m_imageWidthHasBeenSet = true;
    }

    if (rsp.HasMember("ImageHeight") && !rsp["ImageHeight"].IsNull())
    {
        if (!rsp["ImageHeight"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `ImageHeight` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_imageHeight = rsp["ImageHeight"].GetUint64();
        m_imageHeightHasBeenSet = true;
    }

    if (rsp.HasMember("FaceDetailInfos") && !rsp["FaceDetailInfos"].IsNull())
    {
        if (!rsp["FaceDetailInfos"].IsArray())
            return CoreInternalOutcome(Error("response `FaceDetailInfos` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FaceDetailInfos"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FaceDetailInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_faceDetailInfos.push_back(item);
        }
        m_faceDetailInfosHasBeenSet = true;
    }

    if (rsp.HasMember("FaceModelVersion") && !rsp["FaceModelVersion"].IsNull())
    {
        if (!rsp["FaceModelVersion"].IsString())
        {
            return CoreInternalOutcome(Error("response `FaceModelVersion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_faceModelVersion = string(rsp["FaceModelVersion"].GetString());
        m_faceModelVersionHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DetectFaceAttributesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_imageWidthHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageWidth";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageWidth, allocator);
    }

    if (m_imageHeightHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ImageHeight";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_imageHeight, allocator);
    }

    if (m_faceDetailInfosHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceDetailInfos";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_faceDetailInfos.begin(); itr != m_faceDetailInfos.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_faceModelVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FaceModelVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_faceModelVersion.c_str(), allocator).Move(), allocator);
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


uint64_t DetectFaceAttributesResponse::GetImageWidth() const
{
    return m_imageWidth;
}

bool DetectFaceAttributesResponse::ImageWidthHasBeenSet() const
{
    return m_imageWidthHasBeenSet;
}

uint64_t DetectFaceAttributesResponse::GetImageHeight() const
{
    return m_imageHeight;
}

bool DetectFaceAttributesResponse::ImageHeightHasBeenSet() const
{
    return m_imageHeightHasBeenSet;
}

vector<FaceDetailInfo> DetectFaceAttributesResponse::GetFaceDetailInfos() const
{
    return m_faceDetailInfos;
}

bool DetectFaceAttributesResponse::FaceDetailInfosHasBeenSet() const
{
    return m_faceDetailInfosHasBeenSet;
}

string DetectFaceAttributesResponse::GetFaceModelVersion() const
{
    return m_faceModelVersion;
}

bool DetectFaceAttributesResponse::FaceModelVersionHasBeenSet() const
{
    return m_faceModelVersionHasBeenSet;
}


