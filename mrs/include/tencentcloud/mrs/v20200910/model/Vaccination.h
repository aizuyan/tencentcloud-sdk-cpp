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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_VACCINATION_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_VACCINATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 免疫接种记录
                */
                class Vaccination : public AbstractModel
                {
                public:
                    Vaccination();
                    ~Vaccination() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetId() const;

                    /**
                     * 设置序号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Id 序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取疫苗名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vaccine 疫苗名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVaccine() const;

                    /**
                     * 设置疫苗名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Vaccine 疫苗名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVaccine(const std::string& _vaccine);

                    /**
                     * 判断参数 Vaccine 是否已赋值
                     * @return Vaccine 是否已赋值
                     */
                    bool VaccineHasBeenSet() const;

                    /**
                     * 获取剂次
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dose 剂次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDose() const;

                    /**
                     * 设置剂次
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Dose 剂次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDose(const std::string& _dose);

                    /**
                     * 判断参数 Dose 是否已赋值
                     * @return Dose 是否已赋值
                     */
                    bool DoseHasBeenSet() const;

                    /**
                     * 获取接种日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Date 接种日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDate() const;

                    /**
                     * 设置接种日期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Date 接种日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取疫苗批号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LotNumber 疫苗批号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLotNumber() const;

                    /**
                     * 设置疫苗批号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LotNumber 疫苗批号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLotNumber(const std::string& _lotNumber);

                    /**
                     * 判断参数 LotNumber 是否已赋值
                     * @return LotNumber 是否已赋值
                     */
                    bool LotNumberHasBeenSet() const;

                    /**
                     * 获取生产企业
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Manufacturer 生产企业
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置生产企业
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Manufacturer 生产企业
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取接种单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Clinic 接种单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClinic() const;

                    /**
                     * 设置接种单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Clinic 接种单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClinic(const std::string& _clinic);

                    /**
                     * 判断参数 Clinic 是否已赋值
                     * @return Clinic 是否已赋值
                     */
                    bool ClinicHasBeenSet() const;

                    /**
                     * 获取接种部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Site 接种部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSite() const;

                    /**
                     * 设置接种部位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Site 接种部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSite(const std::string& _site);

                    /**
                     * 判断参数 Site 是否已赋值
                     * @return Site 是否已赋值
                     */
                    bool SiteHasBeenSet() const;

                    /**
                     * 获取接种者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Provider 接种者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置接种者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Provider 接种者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取疫苗批号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Lot 疫苗批号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLot() const;

                    /**
                     * 设置疫苗批号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Lot 疫苗批号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLot(const std::string& _lot);

                    /**
                     * 判断参数 Lot 是否已赋值
                     * @return Lot 是否已赋值
                     */
                    bool LotHasBeenSet() const;

                private:

                    /**
                     * 序号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 疫苗名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vaccine;
                    bool m_vaccineHasBeenSet;

                    /**
                     * 剂次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dose;
                    bool m_doseHasBeenSet;

                    /**
                     * 接种日期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 疫苗批号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lotNumber;
                    bool m_lotNumberHasBeenSet;

                    /**
                     * 生产企业
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 接种单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clinic;
                    bool m_clinicHasBeenSet;

                    /**
                     * 接种部位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_site;
                    bool m_siteHasBeenSet;

                    /**
                     * 接种者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 疫苗批号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lot;
                    bool m_lotHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_VACCINATION_H_
