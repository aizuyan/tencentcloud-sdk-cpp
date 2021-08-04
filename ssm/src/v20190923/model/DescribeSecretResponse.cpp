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

#include <tencentcloud/ssm/v20190923/model/DescribeSecretResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssm::V20190923::Model;
using namespace std;

DescribeSecretResponse::DescribeSecretResponse() :
    m_secretNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_createUinHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_deleteTimeHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_secretTypeHasBeenSet(false),
    m_productNameHasBeenSet(false),
    m_resourceIDHasBeenSet(false),
    m_rotationStatusHasBeenSet(false),
    m_rotationFrequencyHasBeenSet(false)
{
}

CoreInternalOutcome DescribeSecretResponse::Deserialize(const string &payload)
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


    if (rsp.HasMember("SecretName") && !rsp["SecretName"].IsNull())
    {
        if (!rsp["SecretName"].IsString())
        {
            return CoreInternalOutcome(Error("response `SecretName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_secretName = string(rsp["SecretName"].GetString());
        m_secretNameHasBeenSet = true;
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

    if (rsp.HasMember("KmsKeyId") && !rsp["KmsKeyId"].IsNull())
    {
        if (!rsp["KmsKeyId"].IsString())
        {
            return CoreInternalOutcome(Error("response `KmsKeyId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_kmsKeyId = string(rsp["KmsKeyId"].GetString());
        m_kmsKeyIdHasBeenSet = true;
    }

    if (rsp.HasMember("CreateUin") && !rsp["CreateUin"].IsNull())
    {
        if (!rsp["CreateUin"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CreateUin` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createUin = rsp["CreateUin"].GetUint64();
        m_createUinHasBeenSet = true;
    }

    if (rsp.HasMember("Status") && !rsp["Status"].IsNull())
    {
        if (!rsp["Status"].IsString())
        {
            return CoreInternalOutcome(Error("response `Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(rsp["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (rsp.HasMember("DeleteTime") && !rsp["DeleteTime"].IsNull())
    {
        if (!rsp["DeleteTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `DeleteTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_deleteTime = rsp["DeleteTime"].GetUint64();
        m_deleteTimeHasBeenSet = true;
    }

    if (rsp.HasMember("CreateTime") && !rsp["CreateTime"].IsNull())
    {
        if (!rsp["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Error("response `CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = rsp["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (rsp.HasMember("SecretType") && !rsp["SecretType"].IsNull())
    {
        if (!rsp["SecretType"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `SecretType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_secretType = rsp["SecretType"].GetInt64();
        m_secretTypeHasBeenSet = true;
    }

    if (rsp.HasMember("ProductName") && !rsp["ProductName"].IsNull())
    {
        if (!rsp["ProductName"].IsString())
        {
            return CoreInternalOutcome(Error("response `ProductName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_productName = string(rsp["ProductName"].GetString());
        m_productNameHasBeenSet = true;
    }

    if (rsp.HasMember("ResourceID") && !rsp["ResourceID"].IsNull())
    {
        if (!rsp["ResourceID"].IsString())
        {
            return CoreInternalOutcome(Error("response `ResourceID` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceID = string(rsp["ResourceID"].GetString());
        m_resourceIDHasBeenSet = true;
    }

    if (rsp.HasMember("RotationStatus") && !rsp["RotationStatus"].IsNull())
    {
        if (!rsp["RotationStatus"].IsBool())
        {
            return CoreInternalOutcome(Error("response `RotationStatus` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_rotationStatus = rsp["RotationStatus"].GetBool();
        m_rotationStatusHasBeenSet = true;
    }

    if (rsp.HasMember("RotationFrequency") && !rsp["RotationFrequency"].IsNull())
    {
        if (!rsp["RotationFrequency"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `RotationFrequency` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_rotationFrequency = rsp["RotationFrequency"].GetInt64();
        m_rotationFrequencyHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeSecretResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_secretNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_secretName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_kmsKeyIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "KmsKeyId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_kmsKeyId.c_str(), allocator).Move(), allocator);
    }

    if (m_createUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createUin, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_deleteTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DeleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_deleteTime, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_secretTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecretType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_secretType, allocator);
    }

    if (m_productNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProductName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_productName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceIDHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceID";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceID.c_str(), allocator).Move(), allocator);
    }

    if (m_rotationStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotationStatus, allocator);
    }

    if (m_rotationFrequencyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RotationFrequency";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_rotationFrequency, allocator);
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


string DescribeSecretResponse::GetSecretName() const
{
    return m_secretName;
}

bool DescribeSecretResponse::SecretNameHasBeenSet() const
{
    return m_secretNameHasBeenSet;
}

string DescribeSecretResponse::GetDescription() const
{
    return m_description;
}

bool DescribeSecretResponse::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string DescribeSecretResponse::GetKmsKeyId() const
{
    return m_kmsKeyId;
}

bool DescribeSecretResponse::KmsKeyIdHasBeenSet() const
{
    return m_kmsKeyIdHasBeenSet;
}

uint64_t DescribeSecretResponse::GetCreateUin() const
{
    return m_createUin;
}

bool DescribeSecretResponse::CreateUinHasBeenSet() const
{
    return m_createUinHasBeenSet;
}

string DescribeSecretResponse::GetStatus() const
{
    return m_status;
}

bool DescribeSecretResponse::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

uint64_t DescribeSecretResponse::GetDeleteTime() const
{
    return m_deleteTime;
}

bool DescribeSecretResponse::DeleteTimeHasBeenSet() const
{
    return m_deleteTimeHasBeenSet;
}

uint64_t DescribeSecretResponse::GetCreateTime() const
{
    return m_createTime;
}

bool DescribeSecretResponse::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

int64_t DescribeSecretResponse::GetSecretType() const
{
    return m_secretType;
}

bool DescribeSecretResponse::SecretTypeHasBeenSet() const
{
    return m_secretTypeHasBeenSet;
}

string DescribeSecretResponse::GetProductName() const
{
    return m_productName;
}

bool DescribeSecretResponse::ProductNameHasBeenSet() const
{
    return m_productNameHasBeenSet;
}

string DescribeSecretResponse::GetResourceID() const
{
    return m_resourceID;
}

bool DescribeSecretResponse::ResourceIDHasBeenSet() const
{
    return m_resourceIDHasBeenSet;
}

bool DescribeSecretResponse::GetRotationStatus() const
{
    return m_rotationStatus;
}

bool DescribeSecretResponse::RotationStatusHasBeenSet() const
{
    return m_rotationStatusHasBeenSet;
}

int64_t DescribeSecretResponse::GetRotationFrequency() const
{
    return m_rotationFrequency;
}

bool DescribeSecretResponse::RotationFrequencyHasBeenSet() const
{
    return m_rotationFrequencyHasBeenSet;
}


