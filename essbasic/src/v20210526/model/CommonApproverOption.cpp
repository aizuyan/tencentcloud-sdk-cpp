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

#include <tencentcloud/essbasic/v20210526/model/CommonApproverOption.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Essbasic::V20210526::Model;
using namespace std;

CommonApproverOption::CommonApproverOption() :
    m_canEditApproverHasBeenSet(false)
{
}

CoreInternalOutcome CommonApproverOption::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("CanEditApprover") && !value["CanEditApprover"].IsNull())
    {
        if (!value["CanEditApprover"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `CommonApproverOption.CanEditApprover` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_canEditApprover = value["CanEditApprover"].GetBool();
        m_canEditApproverHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CommonApproverOption::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_canEditApproverHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CanEditApprover";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_canEditApprover, allocator);
    }

}


bool CommonApproverOption::GetCanEditApprover() const
{
    return m_canEditApprover;
}

void CommonApproverOption::SetCanEditApprover(const bool& _canEditApprover)
{
    m_canEditApprover = _canEditApprover;
    m_canEditApproverHasBeenSet = true;
}

bool CommonApproverOption::CanEditApproverHasBeenSet() const
{
    return m_canEditApproverHasBeenSet;
}

