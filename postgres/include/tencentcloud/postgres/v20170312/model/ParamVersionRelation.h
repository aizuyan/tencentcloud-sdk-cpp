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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMVERSIONRELATION_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMVERSIONRELATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 描述各版本下的参数信息
                */
                class ParamVersionRelation : public AbstractModel
                {
                public:
                    ParamVersionRelation();
                    ~ParamVersionRelation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 参数名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 参数名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取参数信息所属内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DBKernelVersion 参数信息所属内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDBKernelVersion() const;

                    /**
                     * 设置参数信息所属内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DBKernelVersion 参数信息所属内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDBKernelVersion(const std::string& _dBKernelVersion);

                    /**
                     * 判断参数 DBKernelVersion 是否已赋值
                     * @return DBKernelVersion 是否已赋值
                     */
                    bool DBKernelVersionHasBeenSet() const;

                    /**
                     * 获取参数在该版本该规格下的默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 参数在该版本该规格下的默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置参数在该版本该规格下的默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 参数在该版本该规格下的默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取参数值单位。参数没有单位时，该字段返回空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unit 参数值单位。参数没有单位时，该字段返回空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置参数值单位。参数没有单位时，该字段返回空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Unit 参数值单位。参数没有单位时，该字段返回空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取数值类型（integer、real）参数，取值上界
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Max 数值类型（integer、real）参数，取值上界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetMax() const;

                    /**
                     * 设置数值类型（integer、real）参数，取值上界
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Max 数值类型（integer、real）参数，取值上界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMax(const double& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取数值类型（integer、real）参数，取值下界
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Min 数值类型（integer、real）参数，取值下界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetMin() const;

                    /**
                     * 设置数值类型（integer、real）参数，取值下界
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Min 数值类型（integer、real）参数，取值下界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMin(const double& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取枚举类型参数，取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnumValue 枚举类型参数，取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置枚举类型参数，取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnumValue 枚举类型参数，取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     */
                    bool EnumValueHasBeenSet() const;

                private:

                    /**
                     * 参数名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数信息所属内核版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dBKernelVersion;
                    bool m_dBKernelVersionHasBeenSet;

                    /**
                     * 参数在该版本该规格下的默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 参数值单位。参数没有单位时，该字段返回空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 数值类型（integer、real）参数，取值上界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 数值类型（integer、real）参数，取值下界
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 枚举类型参数，取值范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMVERSIONRELATION_H_
