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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLUSTERINFO_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 集群信息实体
                */
                class ClusterInfo : public AbstractModel
                {
                public:
                    ClusterInfo();
                    ~ClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     */
                    int64_t GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param ClusterId 集群Id
                     */
                    void SetClusterId(const int64_t& _clusterId);

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
                     * 获取集群最大磁盘 单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxDiskSize 集群最大磁盘 单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxDiskSize() const;

                    /**
                     * 设置集群最大磁盘 单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxDiskSize 集群最大磁盘 单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxDiskSize(const int64_t& _maxDiskSize);

                    /**
                     * 判断参数 MaxDiskSize 是否已赋值
                     * @return MaxDiskSize 是否已赋值
                     */
                    bool MaxDiskSizeHasBeenSet() const;

                    /**
                     * 获取集群最大带宽 单位MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxBandWidth 集群最大带宽 单位MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxBandWidth() const;

                    /**
                     * 设置集群最大带宽 单位MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxBandWidth 集群最大带宽 单位MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxBandWidth(const int64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取集群当前可用磁盘  单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableDiskSize 集群当前可用磁盘  单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAvailableDiskSize() const;

                    /**
                     * 设置集群当前可用磁盘  单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AvailableDiskSize 集群当前可用磁盘  单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAvailableDiskSize(const int64_t& _availableDiskSize);

                    /**
                     * 判断参数 AvailableDiskSize 是否已赋值
                     * @return AvailableDiskSize 是否已赋值
                     */
                    bool AvailableDiskSizeHasBeenSet() const;

                    /**
                     * 获取集群当前可用带宽 单位MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableBandWidth 集群当前可用带宽 单位MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAvailableBandWidth() const;

                    /**
                     * 设置集群当前可用带宽 单位MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AvailableBandWidth 集群当前可用带宽 单位MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAvailableBandWidth(const int64_t& _availableBandWidth);

                    /**
                     * 判断参数 AvailableBandWidth 是否已赋值
                     * @return AvailableBandWidth 是否已赋值
                     */
                    bool AvailableBandWidthHasBeenSet() const;

                    /**
                     * 获取集群所属可用区，表明集群归属的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneId 集群所属可用区，表明集群归属的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置集群所属可用区，表明集群归属的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneId 集群所属可用区，表明集群归属的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取集群节点所在的可用区，若该集群为跨可用区集群，则包含该集群节点所在的多个可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneIds 集群节点所在的可用区，若该集群为跨可用区集群，则包含该集群节点所在的多个可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetZoneIds() const;

                    /**
                     * 设置集群节点所在的可用区，若该集群为跨可用区集群，则包含该集群节点所在的多个可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ZoneIds 集群节点所在的可用区，若该集群为跨可用区集群，则包含该集群节点所在的多个可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetZoneIds(const std::vector<int64_t>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     */
                    bool ZoneIdsHasBeenSet() const;

                private:

                    /**
                     * 集群Id
                     */
                    int64_t m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 集群最大磁盘 单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxDiskSize;
                    bool m_maxDiskSizeHasBeenSet;

                    /**
                     * 集群最大带宽 单位MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * 集群当前可用磁盘  单位GB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_availableDiskSize;
                    bool m_availableDiskSizeHasBeenSet;

                    /**
                     * 集群当前可用带宽 单位MB/s
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_availableBandWidth;
                    bool m_availableBandWidthHasBeenSet;

                    /**
                     * 集群所属可用区，表明集群归属的可用区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 集群节点所在的可用区，若该集群为跨可用区集群，则包含该集群节点所在的多个可用区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CLUSTERINFO_H_
