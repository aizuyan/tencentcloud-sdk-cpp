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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_FP2NDITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_FP2NDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BaseItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 病案首页第二页
                */
                class Fp2NdItem : public AbstractModel
                {
                public:
                    Fp2NdItem();
                    ~Fp2NdItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取手术编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 手术编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem GetCode() const;

                    /**
                     * 设置手术编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Code 手术编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCode(const BaseItem& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取手术名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 手术名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem GetName() const;

                    /**
                     * 设置手术名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 手术名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const BaseItem& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取手术开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 手术开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem GetStartTime() const;

                    /**
                     * 设置手术开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 手术开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const BaseItem& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取手术结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 手术结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem GetEndTime() const;

                    /**
                     * 设置手术结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 手术结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const BaseItem& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取手术等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 手术等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem GetLevel() const;

                    /**
                     * 设置手术等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Level 手术等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLevel(const BaseItem& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取手术类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 手术类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem GetType() const;

                    /**
                     * 设置手术类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 手术类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const BaseItem& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取醉愈合方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncisionHealingGrade 醉愈合方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem GetIncisionHealingGrade() const;

                    /**
                     * 设置醉愈合方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IncisionHealingGrade 醉愈合方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIncisionHealingGrade(const BaseItem& _incisionHealingGrade);

                    /**
                     * 判断参数 IncisionHealingGrade 是否已赋值
                     * @return IncisionHealingGrade 是否已赋值
                     */
                    bool IncisionHealingGradeHasBeenSet() const;

                    /**
                     * 获取麻醉方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnesthesiaMethod 麻醉方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem GetAnesthesiaMethod() const;

                    /**
                     * 设置麻醉方法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AnesthesiaMethod 麻醉方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAnesthesiaMethod(const BaseItem& _anesthesiaMethod);

                    /**
                     * 判断参数 AnesthesiaMethod 是否已赋值
                     * @return AnesthesiaMethod 是否已赋值
                     */
                    bool AnesthesiaMethodHasBeenSet() const;

                private:

                    /**
                     * 手术编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 手术名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 手术开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 手术结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 手术等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 手术类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 醉愈合方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem m_incisionHealingGrade;
                    bool m_incisionHealingGradeHasBeenSet;

                    /**
                     * 麻醉方法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BaseItem m_anesthesiaMethod;
                    bool m_anesthesiaMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_FP2NDITEM_H_
