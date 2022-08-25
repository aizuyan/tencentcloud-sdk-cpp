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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYACCESSINFO_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYACCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/IPDetail.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * 加速通道接入点详细信息(包含id、地域、ip等）
                */
                class ProxyAccessInfo : public AbstractModel
                {
                public:
                    ProxyAccessInfo();
                    ~ProxyAccessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionId 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionId 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionName 地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RegionName 地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取通道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProxyId 通道ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置通道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProxyId 通道ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取通道接入ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vip 通道接入ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVip() const;

                    /**
                     * 设置通道接入ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Vip 通道接入ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取三网通道VIP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipList 三网通道VIP列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IPDetail> GetVipList() const;

                    /**
                     * 设置三网通道VIP列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VipList 三网通道VIP列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVipList(const std::vector<IPDetail>& _vipList);

                    /**
                     * 判断参数 VipList 是否已赋值
                     * @return VipList 是否已赋值
                     */
                    bool VipListHasBeenSet() const;

                    /**
                     * 获取接入点IDC类型。ec或dc
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceRegionIdcType 接入点IDC类型。ec或dc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSourceRegionIdcType() const;

                    /**
                     * 设置接入点IDC类型。ec或dc
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SourceRegionIdcType 接入点IDC类型。ec或dc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSourceRegionIdcType(const std::string& _sourceRegionIdcType);

                    /**
                     * 判断参数 SourceRegionIdcType 是否已赋值
                     * @return SourceRegionIdcType 是否已赋值
                     */
                    bool SourceRegionIdcTypeHasBeenSet() const;

                private:

                    /**
                     * 地域ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 地域名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * 通道ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 通道接入ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 三网通道VIP列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IPDetail> m_vipList;
                    bool m_vipListHasBeenSet;

                    /**
                     * 接入点IDC类型。ec或dc
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceRegionIdcType;
                    bool m_sourceRegionIdcTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_PROXYACCESSINFO_H_
