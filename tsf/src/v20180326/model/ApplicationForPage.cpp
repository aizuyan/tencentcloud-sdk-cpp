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

#include <tencentcloud/tsf/v20180326/model/ApplicationForPage.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ApplicationForPage::ApplicationForPage() :
    m_applicationIdHasBeenSet(false),
    m_applicationNameHasBeenSet(false),
    m_applicationDescHasBeenSet(false),
    m_applicationTypeHasBeenSet(false),
    m_microserviceTypeHasBeenSet(false),
    m_progLangHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_applicationResourceTypeHasBeenSet(false),
    m_applicationRuntimeTypeHasBeenSet(false),
    m_apigatewayServiceIdHasBeenSet(false),
    m_applicationRemarkNameHasBeenSet(false),
    m_serviceConfigListHasBeenSet(false),
    m_ignoreCreateImageRepositoryHasBeenSet(false)
{
}

CoreInternalOutcome ApplicationForPage::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationName") && !value["ApplicationName"].IsNull())
    {
        if (!value["ApplicationName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.ApplicationName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationName = string(value["ApplicationName"].GetString());
        m_applicationNameHasBeenSet = true;
    }

    if (value.HasMember("ApplicationDesc") && !value["ApplicationDesc"].IsNull())
    {
        if (!value["ApplicationDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.ApplicationDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationDesc = string(value["ApplicationDesc"].GetString());
        m_applicationDescHasBeenSet = true;
    }

    if (value.HasMember("ApplicationType") && !value["ApplicationType"].IsNull())
    {
        if (!value["ApplicationType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.ApplicationType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationType = string(value["ApplicationType"].GetString());
        m_applicationTypeHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceType") && !value["MicroserviceType"].IsNull())
    {
        if (!value["MicroserviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.MicroserviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceType = string(value["MicroserviceType"].GetString());
        m_microserviceTypeHasBeenSet = true;
    }

    if (value.HasMember("ProgLang") && !value["ProgLang"].IsNull())
    {
        if (!value["ProgLang"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.ProgLang` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_progLang = string(value["ProgLang"].GetString());
        m_progLangHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationResourceType") && !value["ApplicationResourceType"].IsNull())
    {
        if (!value["ApplicationResourceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.ApplicationResourceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationResourceType = string(value["ApplicationResourceType"].GetString());
        m_applicationResourceTypeHasBeenSet = true;
    }

    if (value.HasMember("ApplicationRuntimeType") && !value["ApplicationRuntimeType"].IsNull())
    {
        if (!value["ApplicationRuntimeType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.ApplicationRuntimeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationRuntimeType = string(value["ApplicationRuntimeType"].GetString());
        m_applicationRuntimeTypeHasBeenSet = true;
    }

    if (value.HasMember("ApigatewayServiceId") && !value["ApigatewayServiceId"].IsNull())
    {
        if (!value["ApigatewayServiceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.ApigatewayServiceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apigatewayServiceId = string(value["ApigatewayServiceId"].GetString());
        m_apigatewayServiceIdHasBeenSet = true;
    }

    if (value.HasMember("ApplicationRemarkName") && !value["ApplicationRemarkName"].IsNull())
    {
        if (!value["ApplicationRemarkName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.ApplicationRemarkName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationRemarkName = string(value["ApplicationRemarkName"].GetString());
        m_applicationRemarkNameHasBeenSet = true;
    }

    if (value.HasMember("ServiceConfigList") && !value["ServiceConfigList"].IsNull())
    {
        if (!value["ServiceConfigList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.ServiceConfigList` is not array type"));

        const rapidjson::Value &tmpValue = value["ServiceConfigList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ServiceConfig item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_serviceConfigList.push_back(item);
        }
        m_serviceConfigListHasBeenSet = true;
    }

    if (value.HasMember("IgnoreCreateImageRepository") && !value["IgnoreCreateImageRepository"].IsNull())
    {
        if (!value["IgnoreCreateImageRepository"].IsBool())
        {
            return CoreInternalOutcome(Core::Error("response `ApplicationForPage.IgnoreCreateImageRepository` IsBool=false incorrectly").SetRequestId(requestId));
        }
        m_ignoreCreateImageRepository = value["IgnoreCreateImageRepository"].GetBool();
        m_ignoreCreateImageRepositoryHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ApplicationForPage::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationName.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationType.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_progLangHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProgLang";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_progLang.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationResourceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationResourceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationResourceType.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationRuntimeTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationRuntimeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationRuntimeType.c_str(), allocator).Move(), allocator);
    }

    if (m_apigatewayServiceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApigatewayServiceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apigatewayServiceId.c_str(), allocator).Move(), allocator);
    }

    if (m_applicationRemarkNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationRemarkName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationRemarkName.c_str(), allocator).Move(), allocator);
    }

    if (m_serviceConfigListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ServiceConfigList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_serviceConfigList.begin(); itr != m_serviceConfigList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_ignoreCreateImageRepositoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IgnoreCreateImageRepository";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_ignoreCreateImageRepository, allocator);
    }

}


string ApplicationForPage::GetApplicationId() const
{
    return m_applicationId;
}

void ApplicationForPage::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ApplicationForPage::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ApplicationForPage::GetApplicationName() const
{
    return m_applicationName;
}

void ApplicationForPage::SetApplicationName(const string& _applicationName)
{
    m_applicationName = _applicationName;
    m_applicationNameHasBeenSet = true;
}

bool ApplicationForPage::ApplicationNameHasBeenSet() const
{
    return m_applicationNameHasBeenSet;
}

string ApplicationForPage::GetApplicationDesc() const
{
    return m_applicationDesc;
}

void ApplicationForPage::SetApplicationDesc(const string& _applicationDesc)
{
    m_applicationDesc = _applicationDesc;
    m_applicationDescHasBeenSet = true;
}

bool ApplicationForPage::ApplicationDescHasBeenSet() const
{
    return m_applicationDescHasBeenSet;
}

string ApplicationForPage::GetApplicationType() const
{
    return m_applicationType;
}

void ApplicationForPage::SetApplicationType(const string& _applicationType)
{
    m_applicationType = _applicationType;
    m_applicationTypeHasBeenSet = true;
}

bool ApplicationForPage::ApplicationTypeHasBeenSet() const
{
    return m_applicationTypeHasBeenSet;
}

string ApplicationForPage::GetMicroserviceType() const
{
    return m_microserviceType;
}

void ApplicationForPage::SetMicroserviceType(const string& _microserviceType)
{
    m_microserviceType = _microserviceType;
    m_microserviceTypeHasBeenSet = true;
}

bool ApplicationForPage::MicroserviceTypeHasBeenSet() const
{
    return m_microserviceTypeHasBeenSet;
}

string ApplicationForPage::GetProgLang() const
{
    return m_progLang;
}

void ApplicationForPage::SetProgLang(const string& _progLang)
{
    m_progLang = _progLang;
    m_progLangHasBeenSet = true;
}

bool ApplicationForPage::ProgLangHasBeenSet() const
{
    return m_progLangHasBeenSet;
}

string ApplicationForPage::GetCreateTime() const
{
    return m_createTime;
}

void ApplicationForPage::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ApplicationForPage::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string ApplicationForPage::GetUpdateTime() const
{
    return m_updateTime;
}

void ApplicationForPage::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ApplicationForPage::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

string ApplicationForPage::GetApplicationResourceType() const
{
    return m_applicationResourceType;
}

void ApplicationForPage::SetApplicationResourceType(const string& _applicationResourceType)
{
    m_applicationResourceType = _applicationResourceType;
    m_applicationResourceTypeHasBeenSet = true;
}

bool ApplicationForPage::ApplicationResourceTypeHasBeenSet() const
{
    return m_applicationResourceTypeHasBeenSet;
}

string ApplicationForPage::GetApplicationRuntimeType() const
{
    return m_applicationRuntimeType;
}

void ApplicationForPage::SetApplicationRuntimeType(const string& _applicationRuntimeType)
{
    m_applicationRuntimeType = _applicationRuntimeType;
    m_applicationRuntimeTypeHasBeenSet = true;
}

bool ApplicationForPage::ApplicationRuntimeTypeHasBeenSet() const
{
    return m_applicationRuntimeTypeHasBeenSet;
}

string ApplicationForPage::GetApigatewayServiceId() const
{
    return m_apigatewayServiceId;
}

void ApplicationForPage::SetApigatewayServiceId(const string& _apigatewayServiceId)
{
    m_apigatewayServiceId = _apigatewayServiceId;
    m_apigatewayServiceIdHasBeenSet = true;
}

bool ApplicationForPage::ApigatewayServiceIdHasBeenSet() const
{
    return m_apigatewayServiceIdHasBeenSet;
}

string ApplicationForPage::GetApplicationRemarkName() const
{
    return m_applicationRemarkName;
}

void ApplicationForPage::SetApplicationRemarkName(const string& _applicationRemarkName)
{
    m_applicationRemarkName = _applicationRemarkName;
    m_applicationRemarkNameHasBeenSet = true;
}

bool ApplicationForPage::ApplicationRemarkNameHasBeenSet() const
{
    return m_applicationRemarkNameHasBeenSet;
}

vector<ServiceConfig> ApplicationForPage::GetServiceConfigList() const
{
    return m_serviceConfigList;
}

void ApplicationForPage::SetServiceConfigList(const vector<ServiceConfig>& _serviceConfigList)
{
    m_serviceConfigList = _serviceConfigList;
    m_serviceConfigListHasBeenSet = true;
}

bool ApplicationForPage::ServiceConfigListHasBeenSet() const
{
    return m_serviceConfigListHasBeenSet;
}

bool ApplicationForPage::GetIgnoreCreateImageRepository() const
{
    return m_ignoreCreateImageRepository;
}

void ApplicationForPage::SetIgnoreCreateImageRepository(const bool& _ignoreCreateImageRepository)
{
    m_ignoreCreateImageRepository = _ignoreCreateImageRepository;
    m_ignoreCreateImageRepositoryHasBeenSet = true;
}

bool ApplicationForPage::IgnoreCreateImageRepositoryHasBeenSet() const
{
    return m_ignoreCreateImageRepositoryHasBeenSet;
}

