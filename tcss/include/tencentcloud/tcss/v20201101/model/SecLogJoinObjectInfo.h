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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOINOBJECTINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOINOBJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 安全日志接入对象详情
                */
                class SecLogJoinObjectInfo : public AbstractModel
                {
                public:
                    SecLogJoinObjectInfo();
                    ~SecLogJoinObjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机ID
                     * @return HostID 主机ID
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置主机ID
                     * @param HostID 主机ID
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostName 主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostName 主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostIP 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostIP 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取主机状态
                     * @return HostStatus 主机状态
                     */
                    std::string GetHostStatus() const;

                    /**
                     * 设置主机状态
                     * @param HostStatus 主机状态
                     */
                    void SetHostStatus(const std::string& _hostStatus);

                    /**
                     * 判断参数 HostStatus 是否已赋值
                     * @return HostStatus 是否已赋值
                     */
                    bool HostStatusHasBeenSet() const;

                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterID 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterID() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterID 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterID(const std::string& _clusterID);

                    /**
                     * 判断参数 ClusterID 是否已赋值
                     * @return ClusterID 是否已赋值
                     */
                    bool ClusterIDHasBeenSet() const;

                    /**
                     * 获取集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterName 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIP 外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PublicIP 外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取接入状态(true:已接入  false:未接入)
                     * @return JoinState 接入状态(true:已接入  false:未接入)
                     */
                    bool GetJoinState() const;

                    /**
                     * 设置接入状态(true:已接入  false:未接入)
                     * @param JoinState 接入状态(true:已接入  false:未接入)
                     */
                    void SetJoinState(const bool& _joinState);

                    /**
                     * 判断参数 JoinState 是否已赋值
                     * @return JoinState 是否已赋值
                     */
                    bool JoinStateHasBeenSet() const;

                    /**
                     * 获取集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterVersion 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterVersion() const;

                    /**
                     * 设置集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterVersion 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterVersion(const std::string& _clusterVersion);

                    /**
                     * 判断参数 ClusterVersion 是否已赋值
                     * @return ClusterVersion 是否已赋值
                     */
                    bool ClusterVersionHasBeenSet() const;

                    /**
                     * 获取集群主节点地址
                     * @return ClusterMainAddress 集群主节点地址
                     */
                    std::string GetClusterMainAddress() const;

                    /**
                     * 设置集群主节点地址
                     * @param ClusterMainAddress 集群主节点地址
                     */
                    void SetClusterMainAddress(const std::string& _clusterMainAddress);

                    /**
                     * 判断参数 ClusterMainAddress 是否已赋值
                     * @return ClusterMainAddress 是否已赋值
                     */
                    bool ClusterMainAddressHasBeenSet() const;

                private:

                    /**
                     * 主机ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * 主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 主机状态
                     */
                    std::string m_hostStatus;
                    bool m_hostStatusHasBeenSet;

                    /**
                     * 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterID;
                    bool m_clusterIDHasBeenSet;

                    /**
                     * 集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 外网IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * 接入状态(true:已接入  false:未接入)
                     */
                    bool m_joinState;
                    bool m_joinStateHasBeenSet;

                    /**
                     * 集群版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterVersion;
                    bool m_clusterVersionHasBeenSet;

                    /**
                     * 集群主节点地址
                     */
                    std::string m_clusterMainAddress;
                    bool m_clusterMainAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOINOBJECTINFO_H_
