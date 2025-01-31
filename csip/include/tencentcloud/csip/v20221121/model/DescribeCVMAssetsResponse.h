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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CVMAssetVO.h>
#include <tencentcloud/csip/v20221121/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCVMAssets返回参数结构体
                */
                class DescribeCVMAssetsResponse : public AbstractModel
                {
                public:
                    DescribeCVMAssetsResponse();
                    ~DescribeCVMAssetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取-
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取-
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CVMAssetVO> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取地域列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegionList 地域列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     */
                    bool RegionListHasBeenSet() const;

                    /**
                     * 获取防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefenseStatusList 防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> GetDefenseStatusList() const;

                    /**
                     * 判断参数 DefenseStatusList 是否已赋值
                     * @return DefenseStatusList 是否已赋值
                     */
                    bool DefenseStatusListHasBeenSet() const;

                    /**
                     * 获取vpc枚举
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcList vpc枚举
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> GetVpcList() const;

                    /**
                     * 判断参数 VpcList 是否已赋值
                     * @return VpcList 是否已赋值
                     */
                    bool VpcListHasBeenSet() const;

                    /**
                     * 获取资产类型枚举
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetTypeList 资产类型枚举
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> GetAssetTypeList() const;

                    /**
                     * 判断参数 AssetTypeList 是否已赋值
                     * @return AssetTypeList 是否已赋值
                     */
                    bool AssetTypeListHasBeenSet() const;

                    /**
                     * 获取操作系统枚举
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SystemTypeList 操作系统枚举
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> GetSystemTypeList() const;

                    /**
                     * 判断参数 SystemTypeList 是否已赋值
                     * @return SystemTypeList 是否已赋值
                     */
                    bool SystemTypeListHasBeenSet() const;

                    /**
                     * 获取ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpTypeList ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> GetIpTypeList() const;

                    /**
                     * 判断参数 IpTypeList 是否已赋值
                     * @return IpTypeList 是否已赋值
                     */
                    bool IpTypeListHasBeenSet() const;

                    /**
                     * 获取appid列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppIdList appid列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> GetAppIdList() const;

                    /**
                     * 判断参数 AppIdList 是否已赋值
                     * @return AppIdList 是否已赋值
                     */
                    bool AppIdListHasBeenSet() const;

                    /**
                     * 获取可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ZoneList 可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> GetZoneList() const;

                    /**
                     * 判断参数 ZoneList 是否已赋值
                     * @return ZoneList 是否已赋值
                     */
                    bool ZoneListHasBeenSet() const;

                private:

                    /**
                     * -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * -
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CVMAssetVO> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 地域列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                    /**
                     * 防护状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_defenseStatusList;
                    bool m_defenseStatusListHasBeenSet;

                    /**
                     * vpc枚举
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_vpcList;
                    bool m_vpcListHasBeenSet;

                    /**
                     * 资产类型枚举
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_assetTypeList;
                    bool m_assetTypeListHasBeenSet;

                    /**
                     * 操作系统枚举
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_systemTypeList;
                    bool m_systemTypeListHasBeenSet;

                    /**
                     * ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_ipTypeList;
                    bool m_ipTypeListHasBeenSet;

                    /**
                     * appid列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_appIdList;
                    bool m_appIdListHasBeenSet;

                    /**
                     * 可用区列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FilterDataObject> m_zoneList;
                    bool m_zoneListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECVMASSETSRESPONSE_H_
