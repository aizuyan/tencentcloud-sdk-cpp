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

#include <tencentcloud/lighthouse/v20200324/model/Instance.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lighthouse::V20200324::Model;
using namespace rapidjson;
using namespace std;

Instance::Instance() :
    m_instanceIdHasBeenSet(false),
    m_bundleIdHasBeenSet(false),
    m_blueprintIdHasBeenSet(false),
    m_cPUHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_instanceChargeTypeHasBeenSet(false),
    m_systemDiskHasBeenSet(false),
    m_privateAddressesHasBeenSet(false),
    m_publicAddressesHasBeenSet(false),
    m_internetAccessibleHasBeenSet(false),
    m_renewFlagHasBeenSet(false),
    m_loginSettingsHasBeenSet(false),
    m_instanceStateHasBeenSet(false),
    m_uuidHasBeenSet(false),
    m_latestOperationHasBeenSet(false),
    m_latestOperationStateHasBeenSet(false),
    m_latestOperationRequestIdHasBeenSet(false),
    m_isolatedTimeHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_expiredTimeHasBeenSet(false),
    m_platformTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_osNameHasBeenSet(false)
{
}

CoreInternalOutcome Instance::Deserialize(const Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("BundleId") && !value["BundleId"].IsNull())
    {
        if (!value["BundleId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.BundleId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_bundleId = string(value["BundleId"].GetString());
        m_bundleIdHasBeenSet = true;
    }

    if (value.HasMember("BlueprintId") && !value["BlueprintId"].IsNull())
    {
        if (!value["BlueprintId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.BlueprintId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_blueprintId = string(value["BlueprintId"].GetString());
        m_blueprintIdHasBeenSet = true;
    }

    if (value.HasMember("CPU") && !value["CPU"].IsNull())
    {
        if (!value["CPU"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Instance.CPU` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cPU = value["CPU"].GetInt64();
        m_cPUHasBeenSet = true;
    }

    if (value.HasMember("Memory") && !value["Memory"].IsNull())
    {
        if (!value["Memory"].IsInt64())
        {
            return CoreInternalOutcome(Error("response `Instance.Memory` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_memory = value["Memory"].GetInt64();
        m_memoryHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("InstanceChargeType") && !value["InstanceChargeType"].IsNull())
    {
        if (!value["InstanceChargeType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceChargeType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceChargeType = string(value["InstanceChargeType"].GetString());
        m_instanceChargeTypeHasBeenSet = true;
    }

    if (value.HasMember("SystemDisk") && !value["SystemDisk"].IsNull())
    {
        if (!value["SystemDisk"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Instance.SystemDisk` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_systemDisk.Deserialize(value["SystemDisk"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_systemDiskHasBeenSet = true;
    }

    if (value.HasMember("PrivateAddresses") && !value["PrivateAddresses"].IsNull())
    {
        if (!value["PrivateAddresses"].IsArray())
            return CoreInternalOutcome(Error("response `Instance.PrivateAddresses` is not array type"));

        const Value &tmpValue = value["PrivateAddresses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_privateAddresses.push_back((*itr).GetString());
        }
        m_privateAddressesHasBeenSet = true;
    }

    if (value.HasMember("PublicAddresses") && !value["PublicAddresses"].IsNull())
    {
        if (!value["PublicAddresses"].IsArray())
            return CoreInternalOutcome(Error("response `Instance.PublicAddresses` is not array type"));

        const Value &tmpValue = value["PublicAddresses"];
        for (Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_publicAddresses.push_back((*itr).GetString());
        }
        m_publicAddressesHasBeenSet = true;
    }

    if (value.HasMember("InternetAccessible") && !value["InternetAccessible"].IsNull())
    {
        if (!value["InternetAccessible"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Instance.InternetAccessible` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_internetAccessible.Deserialize(value["InternetAccessible"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_internetAccessibleHasBeenSet = true;
    }

    if (value.HasMember("RenewFlag") && !value["RenewFlag"].IsNull())
    {
        if (!value["RenewFlag"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.RenewFlag` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_renewFlag = string(value["RenewFlag"].GetString());
        m_renewFlagHasBeenSet = true;
    }

    if (value.HasMember("LoginSettings") && !value["LoginSettings"].IsNull())
    {
        if (!value["LoginSettings"].IsObject())
        {
            return CoreInternalOutcome(Error("response `Instance.LoginSettings` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_loginSettings.Deserialize(value["LoginSettings"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_loginSettingsHasBeenSet = true;
    }

    if (value.HasMember("InstanceState") && !value["InstanceState"].IsNull())
    {
        if (!value["InstanceState"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.InstanceState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceState = string(value["InstanceState"].GetString());
        m_instanceStateHasBeenSet = true;
    }

    if (value.HasMember("Uuid") && !value["Uuid"].IsNull())
    {
        if (!value["Uuid"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.Uuid` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_uuid = string(value["Uuid"].GetString());
        m_uuidHasBeenSet = true;
    }

    if (value.HasMember("LatestOperation") && !value["LatestOperation"].IsNull())
    {
        if (!value["LatestOperation"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.LatestOperation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperation = string(value["LatestOperation"].GetString());
        m_latestOperationHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationState") && !value["LatestOperationState"].IsNull())
    {
        if (!value["LatestOperationState"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.LatestOperationState` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationState = string(value["LatestOperationState"].GetString());
        m_latestOperationStateHasBeenSet = true;
    }

    if (value.HasMember("LatestOperationRequestId") && !value["LatestOperationRequestId"].IsNull())
    {
        if (!value["LatestOperationRequestId"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.LatestOperationRequestId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_latestOperationRequestId = string(value["LatestOperationRequestId"].GetString());
        m_latestOperationRequestIdHasBeenSet = true;
    }

    if (value.HasMember("IsolatedTime") && !value["IsolatedTime"].IsNull())
    {
        if (!value["IsolatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.IsolatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_isolatedTime = string(value["IsolatedTime"].GetString());
        m_isolatedTimeHasBeenSet = true;
    }

    if (value.HasMember("CreatedTime") && !value["CreatedTime"].IsNull())
    {
        if (!value["CreatedTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.CreatedTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createdTime = string(value["CreatedTime"].GetString());
        m_createdTimeHasBeenSet = true;
    }

    if (value.HasMember("ExpiredTime") && !value["ExpiredTime"].IsNull())
    {
        if (!value["ExpiredTime"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.ExpiredTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_expiredTime = string(value["ExpiredTime"].GetString());
        m_expiredTimeHasBeenSet = true;
    }

    if (value.HasMember("PlatformType") && !value["PlatformType"].IsNull())
    {
        if (!value["PlatformType"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.PlatformType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platformType = string(value["PlatformType"].GetString());
        m_platformTypeHasBeenSet = true;
    }

    if (value.HasMember("Platform") && !value["Platform"].IsNull())
    {
        if (!value["Platform"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.Platform` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_platform = string(value["Platform"].GetString());
        m_platformHasBeenSet = true;
    }

    if (value.HasMember("OsName") && !value["OsName"].IsNull())
    {
        if (!value["OsName"].IsString())
        {
            return CoreInternalOutcome(Error("response `Instance.OsName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_osName = string(value["OsName"].GetString());
        m_osNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void Instance::ToJsonObject(Value &value, Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_bundleIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BundleId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_bundleId.c_str(), allocator).Move(), allocator);
    }

    if (m_blueprintIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "BlueprintId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_blueprintId.c_str(), allocator).Move(), allocator);
    }

    if (m_cPUHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CPU";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cPU, allocator);
    }

    if (m_memoryHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Memory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_memory, allocator);
    }

    if (m_instanceNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceChargeTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceChargeType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceChargeType.c_str(), allocator).Move(), allocator);
    }

    if (m_systemDiskHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SystemDisk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_systemDisk.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_privateAddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PrivateAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_privateAddresses.begin(); itr != m_privateAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_publicAddressesHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PublicAddresses";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kArrayType).Move(), allocator);

        for (auto itr = m_publicAddresses.begin(); itr != m_publicAddresses.end(); ++itr)
        {
            value[key.c_str()].PushBack(Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_internetAccessibleHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InternetAccessible";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_internetAccessible.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_renewFlagHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "RenewFlag";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_renewFlag.c_str(), allocator).Move(), allocator);
    }

    if (m_loginSettingsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LoginSettings";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(kObjectType).Move(), allocator);
        m_loginSettings.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_instanceStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "InstanceState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_instanceState.c_str(), allocator).Move(), allocator);
    }

    if (m_uuidHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Uuid";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_uuid.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LatestOperation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_latestOperation.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationStateHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LatestOperationState";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_latestOperationState.c_str(), allocator).Move(), allocator);
    }

    if (m_latestOperationRequestIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "LatestOperationRequestId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_latestOperationRequestId.c_str(), allocator).Move(), allocator);
    }

    if (m_isolatedTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "IsolatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_isolatedTime.c_str(), allocator).Move(), allocator);
    }

    if (m_createdTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "CreatedTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_createdTime.c_str(), allocator).Move(), allocator);
    }

    if (m_expiredTimeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ExpiredTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_expiredTime.c_str(), allocator).Move(), allocator);
    }

    if (m_platformTypeHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "PlatformType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_platformType.c_str(), allocator).Move(), allocator);
    }

    if (m_platformHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "Platform";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_platform.c_str(), allocator).Move(), allocator);
    }

    if (m_osNameHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "OsName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, Value(m_osName.c_str(), allocator).Move(), allocator);
    }

}


string Instance::GetInstanceId() const
{
    return m_instanceId;
}

void Instance::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool Instance::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string Instance::GetBundleId() const
{
    return m_bundleId;
}

void Instance::SetBundleId(const string& _bundleId)
{
    m_bundleId = _bundleId;
    m_bundleIdHasBeenSet = true;
}

bool Instance::BundleIdHasBeenSet() const
{
    return m_bundleIdHasBeenSet;
}

string Instance::GetBlueprintId() const
{
    return m_blueprintId;
}

void Instance::SetBlueprintId(const string& _blueprintId)
{
    m_blueprintId = _blueprintId;
    m_blueprintIdHasBeenSet = true;
}

bool Instance::BlueprintIdHasBeenSet() const
{
    return m_blueprintIdHasBeenSet;
}

int64_t Instance::GetCPU() const
{
    return m_cPU;
}

void Instance::SetCPU(const int64_t& _cPU)
{
    m_cPU = _cPU;
    m_cPUHasBeenSet = true;
}

bool Instance::CPUHasBeenSet() const
{
    return m_cPUHasBeenSet;
}

int64_t Instance::GetMemory() const
{
    return m_memory;
}

void Instance::SetMemory(const int64_t& _memory)
{
    m_memory = _memory;
    m_memoryHasBeenSet = true;
}

bool Instance::MemoryHasBeenSet() const
{
    return m_memoryHasBeenSet;
}

string Instance::GetInstanceName() const
{
    return m_instanceName;
}

void Instance::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool Instance::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string Instance::GetInstanceChargeType() const
{
    return m_instanceChargeType;
}

void Instance::SetInstanceChargeType(const string& _instanceChargeType)
{
    m_instanceChargeType = _instanceChargeType;
    m_instanceChargeTypeHasBeenSet = true;
}

bool Instance::InstanceChargeTypeHasBeenSet() const
{
    return m_instanceChargeTypeHasBeenSet;
}

SystemDisk Instance::GetSystemDisk() const
{
    return m_systemDisk;
}

void Instance::SetSystemDisk(const SystemDisk& _systemDisk)
{
    m_systemDisk = _systemDisk;
    m_systemDiskHasBeenSet = true;
}

bool Instance::SystemDiskHasBeenSet() const
{
    return m_systemDiskHasBeenSet;
}

vector<string> Instance::GetPrivateAddresses() const
{
    return m_privateAddresses;
}

void Instance::SetPrivateAddresses(const vector<string>& _privateAddresses)
{
    m_privateAddresses = _privateAddresses;
    m_privateAddressesHasBeenSet = true;
}

bool Instance::PrivateAddressesHasBeenSet() const
{
    return m_privateAddressesHasBeenSet;
}

vector<string> Instance::GetPublicAddresses() const
{
    return m_publicAddresses;
}

void Instance::SetPublicAddresses(const vector<string>& _publicAddresses)
{
    m_publicAddresses = _publicAddresses;
    m_publicAddressesHasBeenSet = true;
}

bool Instance::PublicAddressesHasBeenSet() const
{
    return m_publicAddressesHasBeenSet;
}

InternetAccessible Instance::GetInternetAccessible() const
{
    return m_internetAccessible;
}

void Instance::SetInternetAccessible(const InternetAccessible& _internetAccessible)
{
    m_internetAccessible = _internetAccessible;
    m_internetAccessibleHasBeenSet = true;
}

bool Instance::InternetAccessibleHasBeenSet() const
{
    return m_internetAccessibleHasBeenSet;
}

string Instance::GetRenewFlag() const
{
    return m_renewFlag;
}

void Instance::SetRenewFlag(const string& _renewFlag)
{
    m_renewFlag = _renewFlag;
    m_renewFlagHasBeenSet = true;
}

bool Instance::RenewFlagHasBeenSet() const
{
    return m_renewFlagHasBeenSet;
}

LoginSettings Instance::GetLoginSettings() const
{
    return m_loginSettings;
}

void Instance::SetLoginSettings(const LoginSettings& _loginSettings)
{
    m_loginSettings = _loginSettings;
    m_loginSettingsHasBeenSet = true;
}

bool Instance::LoginSettingsHasBeenSet() const
{
    return m_loginSettingsHasBeenSet;
}

string Instance::GetInstanceState() const
{
    return m_instanceState;
}

void Instance::SetInstanceState(const string& _instanceState)
{
    m_instanceState = _instanceState;
    m_instanceStateHasBeenSet = true;
}

bool Instance::InstanceStateHasBeenSet() const
{
    return m_instanceStateHasBeenSet;
}

string Instance::GetUuid() const
{
    return m_uuid;
}

void Instance::SetUuid(const string& _uuid)
{
    m_uuid = _uuid;
    m_uuidHasBeenSet = true;
}

bool Instance::UuidHasBeenSet() const
{
    return m_uuidHasBeenSet;
}

string Instance::GetLatestOperation() const
{
    return m_latestOperation;
}

void Instance::SetLatestOperation(const string& _latestOperation)
{
    m_latestOperation = _latestOperation;
    m_latestOperationHasBeenSet = true;
}

bool Instance::LatestOperationHasBeenSet() const
{
    return m_latestOperationHasBeenSet;
}

string Instance::GetLatestOperationState() const
{
    return m_latestOperationState;
}

void Instance::SetLatestOperationState(const string& _latestOperationState)
{
    m_latestOperationState = _latestOperationState;
    m_latestOperationStateHasBeenSet = true;
}

bool Instance::LatestOperationStateHasBeenSet() const
{
    return m_latestOperationStateHasBeenSet;
}

string Instance::GetLatestOperationRequestId() const
{
    return m_latestOperationRequestId;
}

void Instance::SetLatestOperationRequestId(const string& _latestOperationRequestId)
{
    m_latestOperationRequestId = _latestOperationRequestId;
    m_latestOperationRequestIdHasBeenSet = true;
}

bool Instance::LatestOperationRequestIdHasBeenSet() const
{
    return m_latestOperationRequestIdHasBeenSet;
}

string Instance::GetIsolatedTime() const
{
    return m_isolatedTime;
}

void Instance::SetIsolatedTime(const string& _isolatedTime)
{
    m_isolatedTime = _isolatedTime;
    m_isolatedTimeHasBeenSet = true;
}

bool Instance::IsolatedTimeHasBeenSet() const
{
    return m_isolatedTimeHasBeenSet;
}

string Instance::GetCreatedTime() const
{
    return m_createdTime;
}

void Instance::SetCreatedTime(const string& _createdTime)
{
    m_createdTime = _createdTime;
    m_createdTimeHasBeenSet = true;
}

bool Instance::CreatedTimeHasBeenSet() const
{
    return m_createdTimeHasBeenSet;
}

string Instance::GetExpiredTime() const
{
    return m_expiredTime;
}

void Instance::SetExpiredTime(const string& _expiredTime)
{
    m_expiredTime = _expiredTime;
    m_expiredTimeHasBeenSet = true;
}

bool Instance::ExpiredTimeHasBeenSet() const
{
    return m_expiredTimeHasBeenSet;
}

string Instance::GetPlatformType() const
{
    return m_platformType;
}

void Instance::SetPlatformType(const string& _platformType)
{
    m_platformType = _platformType;
    m_platformTypeHasBeenSet = true;
}

bool Instance::PlatformTypeHasBeenSet() const
{
    return m_platformTypeHasBeenSet;
}

string Instance::GetPlatform() const
{
    return m_platform;
}

void Instance::SetPlatform(const string& _platform)
{
    m_platform = _platform;
    m_platformHasBeenSet = true;
}

bool Instance::PlatformHasBeenSet() const
{
    return m_platformHasBeenSet;
}

string Instance::GetOsName() const
{
    return m_osName;
}

void Instance::SetOsName(const string& _osName)
{
    m_osName = _osName;
    m_osNameHasBeenSet = true;
}

bool Instance::OsNameHasBeenSet() const
{
    return m_osNameHasBeenSet;
}

