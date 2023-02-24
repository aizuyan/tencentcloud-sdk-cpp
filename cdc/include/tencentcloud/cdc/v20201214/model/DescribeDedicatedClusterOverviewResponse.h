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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTEROVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTEROVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/VpngwBandwidthData.h>
#include <tencentcloud/cdc/v20201214/model/LocalNetInfo.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterOverview返回参数结构体
                */
                class DescribeDedicatedClusterOverviewResponse : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterOverviewResponse();
                    ~DescribeDedicatedClusterOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云服务器数量
                     * @return CvmCount 云服务器数量
                     */
                    uint64_t GetCvmCount() const;

                    /**
                     * 判断参数 CvmCount 是否已赋值
                     * @return CvmCount 是否已赋值
                     */
                    bool CvmCountHasBeenSet() const;

                    /**
                     * 获取宿主机数量
                     * @return HostCount 宿主机数量
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取vpn通道状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpnConnectionState vpn通道状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVpnConnectionState() const;

                    /**
                     * 判断参数 VpnConnectionState 是否已赋值
                     * @return VpnConnectionState 是否已赋值
                     */
                    bool VpnConnectionStateHasBeenSet() const;

                    /**
                     * 获取vpn网关监控数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpngwBandwidthData vpn网关监控数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VpngwBandwidthData GetVpngwBandwidthData() const;

                    /**
                     * 判断参数 VpngwBandwidthData 是否已赋值
                     * @return VpngwBandwidthData 是否已赋值
                     */
                    bool VpngwBandwidthDataHasBeenSet() const;

                    /**
                     * 获取本地网关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalNetInfo 本地网关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LocalNetInfo GetLocalNetInfo() const;

                    /**
                     * 判断参数 LocalNetInfo 是否已赋值
                     * @return LocalNetInfo 是否已赋值
                     */
                    bool LocalNetInfoHasBeenSet() const;

                    /**
                     * 获取vpn网关通道监控数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpnConnectionBandwidthData vpn网关通道监控数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpngwBandwidthData> GetVpnConnectionBandwidthData() const;

                    /**
                     * 判断参数 VpnConnectionBandwidthData 是否已赋值
                     * @return VpnConnectionBandwidthData 是否已赋值
                     */
                    bool VpnConnectionBandwidthDataHasBeenSet() const;

                private:

                    /**
                     * 云服务器数量
                     */
                    uint64_t m_cvmCount;
                    bool m_cvmCountHasBeenSet;

                    /**
                     * 宿主机数量
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * vpn通道状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpnConnectionState;
                    bool m_vpnConnectionStateHasBeenSet;

                    /**
                     * vpn网关监控数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VpngwBandwidthData m_vpngwBandwidthData;
                    bool m_vpngwBandwidthDataHasBeenSet;

                    /**
                     * 本地网关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LocalNetInfo m_localNetInfo;
                    bool m_localNetInfoHasBeenSet;

                    /**
                     * vpn网关通道监控数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpngwBandwidthData> m_vpnConnectionBandwidthData;
                    bool m_vpnConnectionBandwidthDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTEROVERVIEWRESPONSE_H_
