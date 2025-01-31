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

#include <tencentcloud/wedata/v20210820/model/OperateResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

OperateResult::OperateResult() :
    m_resultHasBeenSet(false),
    m_errorIdHasBeenSet(false),
    m_errorDescHasBeenSet(false)
{
}

CoreInternalOutcome OperateResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `OperateResult.Result` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_result = value["Result"].GetBool();
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("ErrorId") && !value["ErrorId"].IsNull())
    {
        if (!value["ErrorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperateResult.ErrorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorId = string(value["ErrorId"].GetString());
        m_errorIdHasBeenSet = true;
    }

    if (value.HasMember("ErrorDesc") && !value["ErrorDesc"].IsNull())
    {
        if (!value["ErrorDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperateResult.ErrorDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorDesc = string(value["ErrorDesc"].GetString());
        m_errorDescHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperateResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_result, allocator);
    }

    if (m_errorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorId.c_str(), allocator).Move(), allocator);
    }

    if (m_errorDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorDesc.c_str(), allocator).Move(), allocator);
    }

}


bool OperateResult::GetResult() const
{
    return m_result;
}

void OperateResult::SetResult(const bool& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool OperateResult::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

string OperateResult::GetErrorId() const
{
    return m_errorId;
}

void OperateResult::SetErrorId(const string& _errorId)
{
    m_errorId = _errorId;
    m_errorIdHasBeenSet = true;
}

bool OperateResult::ErrorIdHasBeenSet() const
{
    return m_errorIdHasBeenSet;
}

string OperateResult::GetErrorDesc() const
{
    return m_errorDesc;
}

void OperateResult::SetErrorDesc(const string& _errorDesc)
{
    m_errorDesc = _errorDesc;
    m_errorDescHasBeenSet = true;
}

bool OperateResult::ErrorDescHasBeenSet() const
{
    return m_errorDescHasBeenSet;
}

