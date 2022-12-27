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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcConfig.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RocketMQ集群基本信息
                */
                class RocketMQClusterInfo : public AbstractModel
                {
                public:
                    RocketMQClusterInfo();
                    ~RocketMQClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群名称
                     * @return ClusterName 集群名称
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群名称
                     * @param ClusterName 集群名称
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取地域信息
                     * @return Region 地域信息
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息
                     * @param Region 地域信息
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取创建时间，毫秒为单位
                     * @return CreateTime 创建时间，毫秒为单位
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间，毫秒为单位
                     * @param CreateTime 创建时间，毫秒为单位
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取集群说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 集群说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置集群说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 集群说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取公网接入地址
                     * @return PublicEndPoint 公网接入地址
                     */
                    std::string GetPublicEndPoint() const;

                    /**
                     * 设置公网接入地址
                     * @param PublicEndPoint 公网接入地址
                     */
                    void SetPublicEndPoint(const std::string& _publicEndPoint);

                    /**
                     * 判断参数 PublicEndPoint 是否已赋值
                     * @return PublicEndPoint 是否已赋值
                     */
                    bool PublicEndPointHasBeenSet() const;

                    /**
                     * 获取VPC接入地址
                     * @return VpcEndPoint VPC接入地址
                     */
                    std::string GetVpcEndPoint() const;

                    /**
                     * 设置VPC接入地址
                     * @param VpcEndPoint VPC接入地址
                     */
                    void SetVpcEndPoint(const std::string& _vpcEndPoint);

                    /**
                     * 判断参数 VpcEndPoint 是否已赋值
                     * @return VpcEndPoint 是否已赋值
                     */
                    bool VpcEndPointHasBeenSet() const;

                    /**
                     * 获取是否支持命名空间接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportNamespaceEndpoint 是否支持命名空间接入点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetSupportNamespaceEndpoint() const;

                    /**
                     * 设置是否支持命名空间接入点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SupportNamespaceEndpoint 是否支持命名空间接入点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSupportNamespaceEndpoint(const bool& _supportNamespaceEndpoint);

                    /**
                     * 判断参数 SupportNamespaceEndpoint 是否已赋值
                     * @return SupportNamespaceEndpoint 是否已赋值
                     */
                    bool SupportNamespaceEndpointHasBeenSet() const;

                    /**
                     * 获取VPC信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vpcs VPC信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcConfig> GetVpcs() const;

                    /**
                     * 设置VPC信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Vpcs VPC信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVpcs(const std::vector<VpcConfig>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取是否为专享实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsVip 是否为专享实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置是否为专享实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsVip 是否为专享实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取Rocketmq集群标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RocketMQFlag Rocketmq集群标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetRocketMQFlag() const;

                    /**
                     * 设置Rocketmq集群标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RocketMQFlag Rocketmq集群标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRocketMQFlag(const bool& _rocketMQFlag);

                    /**
                     * 判断参数 RocketMQFlag 是否已赋值
                     * @return RocketMQFlag 是否已赋值
                     */
                    bool RocketMQFlagHasBeenSet() const;

                    /**
                     * 获取计费状态，1表示正常，2表示已停服，3表示已销毁
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 计费状态，1表示正常，2表示已停服，3表示已销毁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置计费状态，1表示正常，2表示已停服，3表示已销毁
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 计费状态，1表示正常，2表示已停服，3表示已销毁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取欠费停服时间，毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsolateTime 欠费停服时间，毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetIsolateTime() const;

                    /**
                     * 设置欠费停服时间，毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsolateTime 欠费停服时间，毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsolateTime(const int64_t& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取HTTP协议公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpPublicEndpoint HTTP协议公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHttpPublicEndpoint() const;

                    /**
                     * 设置HTTP协议公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HttpPublicEndpoint HTTP协议公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttpPublicEndpoint(const std::string& _httpPublicEndpoint);

                    /**
                     * 判断参数 HttpPublicEndpoint 是否已赋值
                     * @return HttpPublicEndpoint 是否已赋值
                     */
                    bool HttpPublicEndpointHasBeenSet() const;

                    /**
                     * 获取HTTP协议VPC接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpVpcEndpoint HTTP协议VPC接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHttpVpcEndpoint() const;

                    /**
                     * 设置HTTP协议VPC接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HttpVpcEndpoint HTTP协议VPC接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHttpVpcEndpoint(const std::string& _httpVpcEndpoint);

                    /**
                     * 判断参数 HttpVpcEndpoint 是否已赋值
                     * @return HttpVpcEndpoint 是否已赋值
                     */
                    bool HttpVpcEndpointHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 地域信息
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 创建时间，毫秒为单位
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 集群说明信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 公网接入地址
                     */
                    std::string m_publicEndPoint;
                    bool m_publicEndPointHasBeenSet;

                    /**
                     * VPC接入地址
                     */
                    std::string m_vpcEndPoint;
                    bool m_vpcEndPointHasBeenSet;

                    /**
                     * 是否支持命名空间接入点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportNamespaceEndpoint;
                    bool m_supportNamespaceEndpointHasBeenSet;

                    /**
                     * VPC信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VpcConfig> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * 是否为专享实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * Rocketmq集群标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_rocketMQFlag;
                    bool m_rocketMQFlagHasBeenSet;

                    /**
                     * 计费状态，1表示正常，2表示已停服，3表示已销毁
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 欠费停服时间，毫秒为单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * HTTP协议公网接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpPublicEndpoint;
                    bool m_httpPublicEndpointHasBeenSet;

                    /**
                     * HTTP协议VPC接入地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_httpVpcEndpoint;
                    bool m_httpVpcEndpointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_ROCKETMQCLUSTERINFO_H_
