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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 授权绑定详情信息
                */
                class LicenseBindDetail : public AbstractModel
                {
                public:
                    LicenseBindDetail();
                    ~LicenseBindDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器别名
                     * @return MachineName 机器别名
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置机器别名
                     * @param MachineName 机器别名
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取机器公网IP
                     * @return MachineWanIp 机器公网IP
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置机器公网IP
                     * @param MachineWanIp 机器公网IP
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取机器内网IP
                     * @return MachineIp 机器内网IP
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置机器内网IP
                     * @param MachineIp 机器内网IP
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取云服务器UUID
                     * @return Quuid 云服务器UUID
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置云服务器UUID
                     * @param Quuid 云服务器UUID
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取云镜客户端UUID
                     * @return Uuid 云镜客户端UUID
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置云镜客户端UUID
                     * @param Uuid 云镜客户端UUID
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取标签信息
                     * @return Tags 标签信息
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签信息
                     * @param Tags 标签信息
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取云镜客户端状态,OFFLINE 离线,ONLINE 在线,UNINSTALL 未安装
                     * @return AgentStatus 云镜客户端状态,OFFLINE 离线,ONLINE 在线,UNINSTALL 未安装
                     */
                    std::string GetAgentStatus() const;

                    /**
                     * 设置云镜客户端状态,OFFLINE 离线,ONLINE 在线,UNINSTALL 未安装
                     * @param AgentStatus 云镜客户端状态,OFFLINE 离线,ONLINE 在线,UNINSTALL 未安装
                     */
                    void SetAgentStatus(const std::string& _agentStatus);

                    /**
                     * 判断参数 AgentStatus 是否已赋值
                     * @return AgentStatus 是否已赋值
                     */
                    bool AgentStatusHasBeenSet() const;

                    /**
                     * 获取是否允许解绑,false 不允许解绑
                     * @return IsUnBind 是否允许解绑,false 不允许解绑
                     */
                    bool GetIsUnBind() const;

                    /**
                     * 设置是否允许解绑,false 不允许解绑
                     * @param IsUnBind 是否允许解绑,false 不允许解绑
                     */
                    void SetIsUnBind(const bool& _isUnBind);

                    /**
                     * 判断参数 IsUnBind 是否已赋值
                     * @return IsUnBind 是否已赋值
                     */
                    bool IsUnBindHasBeenSet() const;

                    /**
                     * 获取是否允许换绑,false 不允许换绑
                     * @return IsSwitchBind 是否允许换绑,false 不允许换绑
                     */
                    bool GetIsSwitchBind() const;

                    /**
                     * 设置是否允许换绑,false 不允许换绑
                     * @param IsSwitchBind 是否允许换绑,false 不允许换绑
                     */
                    void SetIsSwitchBind(const bool& _isSwitchBind);

                    /**
                     * 判断参数 IsSwitchBind 是否已赋值
                     * @return IsSwitchBind 是否已赋值
                     */
                    bool IsSwitchBindHasBeenSet() const;

                    /**
                     * 获取主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineExtraInfo 主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MachineExtraInfo 主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 机器别名
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 机器公网IP
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 机器内网IP
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 云服务器UUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 云镜客户端UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 标签信息
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 云镜客户端状态,OFFLINE 离线,ONLINE 在线,UNINSTALL 未安装
                     */
                    std::string m_agentStatus;
                    bool m_agentStatusHasBeenSet;

                    /**
                     * 是否允许解绑,false 不允许解绑
                     */
                    bool m_isUnBind;
                    bool m_isUnBindHasBeenSet;

                    /**
                     * 是否允许换绑,false 不允许换绑
                     */
                    bool m_isSwitchBind;
                    bool m_isSwitchBindHasBeenSet;

                    /**
                     * 主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LICENSEBINDDETAIL_H_
