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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/VpcEndpointInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * RabbiteMQ集群基本信息
                */
                class RabbitMQClusterInfo : public AbstractModel
                {
                public:
                    RabbitMQClusterInfo();
                    ~RabbitMQClusterInfo() = default;
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
                     * 获取VPC及网络信息
                     * @return Vpcs VPC及网络信息
                     */
                    std::vector<VpcEndpointInfo> GetVpcs() const;

                    /**
                     * 设置VPC及网络信息
                     * @param Vpcs VPC及网络信息
                     */
                    void SetVpcs(const std::vector<VpcEndpointInfo>& _vpcs);

                    /**
                     * 判断参数 Vpcs 是否已赋值
                     * @return Vpcs 是否已赋值
                     */
                    bool VpcsHasBeenSet() const;

                    /**
                     * 获取虚拟主机数量
                     * @return VirtualHostNumber 虚拟主机数量
                     */
                    int64_t GetVirtualHostNumber() const;

                    /**
                     * 设置虚拟主机数量
                     * @param VirtualHostNumber 虚拟主机数量
                     */
                    void SetVirtualHostNumber(const int64_t& _virtualHostNumber);

                    /**
                     * 判断参数 VirtualHostNumber 是否已赋值
                     * @return VirtualHostNumber 是否已赋值
                     */
                    bool VirtualHostNumberHasBeenSet() const;

                    /**
                     * 获取队列数量
                     * @return QueueNumber 队列数量
                     */
                    int64_t GetQueueNumber() const;

                    /**
                     * 设置队列数量
                     * @param QueueNumber 队列数量
                     */
                    void SetQueueNumber(const int64_t& _queueNumber);

                    /**
                     * 判断参数 QueueNumber 是否已赋值
                     * @return QueueNumber 是否已赋值
                     */
                    bool QueueNumberHasBeenSet() const;

                    /**
                     * 获取每秒生产消息数 单位：条/秒
                     * @return MessagePublishRate 每秒生产消息数 单位：条/秒
                     */
                    double GetMessagePublishRate() const;

                    /**
                     * 设置每秒生产消息数 单位：条/秒
                     * @param MessagePublishRate 每秒生产消息数 单位：条/秒
                     */
                    void SetMessagePublishRate(const double& _messagePublishRate);

                    /**
                     * 判断参数 MessagePublishRate 是否已赋值
                     * @return MessagePublishRate 是否已赋值
                     */
                    bool MessagePublishRateHasBeenSet() const;

                    /**
                     * 获取堆积消息数 单位：条
                     * @return MessageStackNumber 堆积消息数 单位：条
                     */
                    int64_t GetMessageStackNumber() const;

                    /**
                     * 设置堆积消息数 单位：条
                     * @param MessageStackNumber 堆积消息数 单位：条
                     */
                    void SetMessageStackNumber(const int64_t& _messageStackNumber);

                    /**
                     * 判断参数 MessageStackNumber 是否已赋值
                     * @return MessageStackNumber 是否已赋值
                     */
                    bool MessageStackNumberHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpireTime 过期时间
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置过期时间
                     * @param ExpireTime 过期时间
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Channel数量
                     * @return ChannelNumber Channel数量
                     */
                    int64_t GetChannelNumber() const;

                    /**
                     * 设置Channel数量
                     * @param ChannelNumber Channel数量
                     */
                    void SetChannelNumber(const int64_t& _channelNumber);

                    /**
                     * 判断参数 ChannelNumber 是否已赋值
                     * @return ChannelNumber 是否已赋值
                     */
                    bool ChannelNumberHasBeenSet() const;

                    /**
                     * 获取Connection数量
                     * @return ConnectionNumber Connection数量
                     */
                    int64_t GetConnectionNumber() const;

                    /**
                     * 设置Connection数量
                     * @param ConnectionNumber Connection数量
                     */
                    void SetConnectionNumber(const int64_t& _connectionNumber);

                    /**
                     * 判断参数 ConnectionNumber 是否已赋值
                     * @return ConnectionNumber 是否已赋值
                     */
                    bool ConnectionNumberHasBeenSet() const;

                    /**
                     * 获取Consumer数量
                     * @return ConsumerNumber Consumer数量
                     */
                    int64_t GetConsumerNumber() const;

                    /**
                     * 设置Consumer数量
                     * @param ConsumerNumber Consumer数量
                     */
                    void SetConsumerNumber(const int64_t& _consumerNumber);

                    /**
                     * 判断参数 ConsumerNumber 是否已赋值
                     * @return ConsumerNumber 是否已赋值
                     */
                    bool ConsumerNumberHasBeenSet() const;

                    /**
                     * 获取Exchang数量
                     * @return ExchangeNumber Exchang数量
                     */
                    int64_t GetExchangeNumber() const;

                    /**
                     * 设置Exchang数量
                     * @param ExchangeNumber Exchang数量
                     */
                    void SetExchangeNumber(const int64_t& _exchangeNumber);

                    /**
                     * 判断参数 ExchangeNumber 是否已赋值
                     * @return ExchangeNumber 是否已赋值
                     */
                    bool ExchangeNumberHasBeenSet() const;

                    /**
                     * 获取集群异常。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExceptionInformation 集群异常。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExceptionInformation() const;

                    /**
                     * 设置集群异常。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExceptionInformation 集群异常。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExceptionInformation(const std::string& _exceptionInformation);

                    /**
                     * 判断参数 ExceptionInformation 是否已赋值
                     * @return ExceptionInformation 是否已赋值
                     */
                    bool ExceptionInformationHasBeenSet() const;

                    /**
                     * 获取实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterStatus 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetClusterStatus() const;

                    /**
                     * 设置实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterStatus 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterStatus(const int64_t& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     */
                    bool ClusterStatusHasBeenSet() const;

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
                     * VPC及网络信息
                     */
                    std::vector<VpcEndpointInfo> m_vpcs;
                    bool m_vpcsHasBeenSet;

                    /**
                     * 虚拟主机数量
                     */
                    int64_t m_virtualHostNumber;
                    bool m_virtualHostNumberHasBeenSet;

                    /**
                     * 队列数量
                     */
                    int64_t m_queueNumber;
                    bool m_queueNumberHasBeenSet;

                    /**
                     * 每秒生产消息数 单位：条/秒
                     */
                    double m_messagePublishRate;
                    bool m_messagePublishRateHasBeenSet;

                    /**
                     * 堆积消息数 单位：条
                     */
                    int64_t m_messageStackNumber;
                    bool m_messageStackNumberHasBeenSet;

                    /**
                     * 过期时间
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Channel数量
                     */
                    int64_t m_channelNumber;
                    bool m_channelNumberHasBeenSet;

                    /**
                     * Connection数量
                     */
                    int64_t m_connectionNumber;
                    bool m_connectionNumberHasBeenSet;

                    /**
                     * Consumer数量
                     */
                    int64_t m_consumerNumber;
                    bool m_consumerNumberHasBeenSet;

                    /**
                     * Exchang数量
                     */
                    int64_t m_exchangeNumber;
                    bool m_exchangeNumberHasBeenSet;

                    /**
                     * 集群异常。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_exceptionInformation;
                    bool m_exceptionInformationHasBeenSet;

                    /**
                     * 实例状态，0表示创建中，1表示正常，2表示隔离中，3表示已销毁，4 - 异常, 5 - 发货失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_RABBITMQCLUSTERINFO_H_
