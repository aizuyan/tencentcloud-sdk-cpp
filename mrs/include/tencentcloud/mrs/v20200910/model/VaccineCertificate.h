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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_VACCINECERTIFICATE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_VACCINECERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/Vaccination.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 免疫接种证明
                */
                class VaccineCertificate : public AbstractModel
                {
                public:
                    VaccineCertificate();
                    ~VaccineCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取免疫接种列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VaccineList 免疫接种列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Vaccination> GetVaccineList() const;

                    /**
                     * 设置免疫接种列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VaccineList 免疫接种列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVaccineList(const std::vector<Vaccination>& _vaccineList);

                    /**
                     * 判断参数 VaccineList 是否已赋值
                     * @return VaccineList 是否已赋值
                     */
                    bool VaccineListHasBeenSet() const;

                private:

                    /**
                     * 免疫接种列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Vaccination> m_vaccineList;
                    bool m_vaccineListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_VACCINECERTIFICATE_H_
