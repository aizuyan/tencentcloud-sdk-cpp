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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_HPCCLUSTERINFO_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_HPCCLUSTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 高性能计算集群
                */
                class HpcClusterInfo : public AbstractModel
                {
                public:
                    HpcClusterInfo();
                    ~HpcClusterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取高性能计算集群ID
                     * @return HpcClusterId 高性能计算集群ID
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置高性能计算集群ID
                     * @param HpcClusterId 高性能计算集群ID
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     */
                    bool HpcClusterIdHasBeenSet() const;

                    /**
                     * 获取高性能计算集群名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 高性能计算集群名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置高性能计算集群名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 高性能计算集群名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取高性能计算集群备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 高性能计算集群备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置高性能计算集群备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Remark 高性能计算集群备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取集群下设备容量
                     * @return CvmQuotaTotal 集群下设备容量
                     */
                    uint64_t GetCvmQuotaTotal() const;

                    /**
                     * 设置集群下设备容量
                     * @param CvmQuotaTotal 集群下设备容量
                     */
                    void SetCvmQuotaTotal(const uint64_t& _cvmQuotaTotal);

                    /**
                     * 判断参数 CvmQuotaTotal 是否已赋值
                     * @return CvmQuotaTotal 是否已赋值
                     */
                    bool CvmQuotaTotalHasBeenSet() const;

                    /**
                     * 获取集群所在可用区
                     * @return Zone 集群所在可用区
                     */
                    std::string GetZone() const;

                    /**
                     * 设置集群所在可用区
                     * @param Zone 集群所在可用区
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取集群当前已有设备量
                     * @return CurrentNum 集群当前已有设备量
                     */
                    uint64_t GetCurrentNum() const;

                    /**
                     * 设置集群当前已有设备量
                     * @param CurrentNum 集群当前已有设备量
                     */
                    void SetCurrentNum(const uint64_t& _currentNum);

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取集群内实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceIds 集群内实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置集群内实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceIds 集群内实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 高性能计算集群ID
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * 高性能计算集群名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 高性能计算集群备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 集群下设备容量
                     */
                    uint64_t m_cvmQuotaTotal;
                    bool m_cvmQuotaTotalHasBeenSet;

                    /**
                     * 集群所在可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 集群当前已有设备量
                     */
                    uint64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * 集群创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 集群内实例ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_HPCCLUSTERINFO_H_
