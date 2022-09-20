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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_RULECHOICEPROPERTIESITEM_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_RULECHOICEPROPERTIESITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/RuleExtraParameter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 规则引擎可应用于匹配请求的设置详细信息，可选参数配置项
                */
                class RuleChoicePropertiesItem : public AbstractModel
                {
                public:
                    RuleChoicePropertiesItem();
                    ~RuleChoicePropertiesItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名称。
                     * @return Name 参数名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名称。
                     * @param Name 参数名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取参数值类型。
<li> CHOICE：参数值只能在 ChoicesValue 中选择； </li>
<li> TOGGLE：参数值为开关类型，可在 ChoicesValue 中选择；</li>
<li> CUSTOM_NUM：参数值用户自定义，整型类型；</li>
<li> CUSTOM_STRING：参数值用户自定义，字符串类型。</li>
                     * @return Type 参数值类型。
<li> CHOICE：参数值只能在 ChoicesValue 中选择； </li>
<li> TOGGLE：参数值为开关类型，可在 ChoicesValue 中选择；</li>
<li> CUSTOM_NUM：参数值用户自定义，整型类型；</li>
<li> CUSTOM_STRING：参数值用户自定义，字符串类型。</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置参数值类型。
<li> CHOICE：参数值只能在 ChoicesValue 中选择； </li>
<li> TOGGLE：参数值为开关类型，可在 ChoicesValue 中选择；</li>
<li> CUSTOM_NUM：参数值用户自定义，整型类型；</li>
<li> CUSTOM_STRING：参数值用户自定义，字符串类型。</li>
                     * @param Type 参数值类型。
<li> CHOICE：参数值只能在 ChoicesValue 中选择； </li>
<li> TOGGLE：参数值为开关类型，可在 ChoicesValue 中选择；</li>
<li> CUSTOM_NUM：参数值用户自定义，整型类型；</li>
<li> CUSTOM_STRING：参数值用户自定义，字符串类型。</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取参数值的可选值。
注意：若参数值为用户自定义则该数组为空数组。
                     * @return ChoicesValue 参数值的可选值。
注意：若参数值为用户自定义则该数组为空数组。
                     */
                    std::vector<std::string> GetChoicesValue() const;

                    /**
                     * 设置参数值的可选值。
注意：若参数值为用户自定义则该数组为空数组。
                     * @param ChoicesValue 参数值的可选值。
注意：若参数值为用户自定义则该数组为空数组。
                     */
                    void SetChoicesValue(const std::vector<std::string>& _choicesValue);

                    /**
                     * 判断参数 ChoicesValue 是否已赋值
                     * @return ChoicesValue 是否已赋值
                     */
                    bool ChoicesValueHasBeenSet() const;

                    /**
                     * 获取数值参数的最小值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * @return Min 数值参数的最小值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     */
                    int64_t GetMin() const;

                    /**
                     * 设置数值参数的最小值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * @param Min 数值参数的最小值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     */
                    void SetMin(const int64_t& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取数值参数的最大值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * @return Max 数值参数的最大值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     */
                    int64_t GetMax() const;

                    /**
                     * 设置数值参数的最大值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     * @param Max 数值参数的最大值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     */
                    void SetMax(const int64_t& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取参数值是否支持多选或者填写多个。
                     * @return IsMultiple 参数值是否支持多选或者填写多个。
                     */
                    bool GetIsMultiple() const;

                    /**
                     * 设置参数值是否支持多选或者填写多个。
                     * @param IsMultiple 参数值是否支持多选或者填写多个。
                     */
                    void SetIsMultiple(const bool& _isMultiple);

                    /**
                     * 判断参数 IsMultiple 是否已赋值
                     * @return IsMultiple 是否已赋值
                     */
                    bool IsMultipleHasBeenSet() const;

                    /**
                     * 获取是否允许为空。
                     * @return IsAllowEmpty 是否允许为空。
                     */
                    bool GetIsAllowEmpty() const;

                    /**
                     * 设置是否允许为空。
                     * @param IsAllowEmpty 是否允许为空。
                     */
                    void SetIsAllowEmpty(const bool& _isAllowEmpty);

                    /**
                     * 判断参数 IsAllowEmpty 是否已赋值
                     * @return IsAllowEmpty 是否已赋值
                     */
                    bool IsAllowEmptyHasBeenSet() const;

                    /**
                     * 获取特殊参数。
<li> 为 NULL：RuleAction 选择 NormalAction；</li>
<li> 成员参数 Id 为 Action：RuleAction 选择 RewirteAction；</li>
<li> 成员参数 Id 为 StatusCode：RuleAction 选择 CodeAction。</li>
                     * @return ExtraParameter 特殊参数。
<li> 为 NULL：RuleAction 选择 NormalAction；</li>
<li> 成员参数 Id 为 Action：RuleAction 选择 RewirteAction；</li>
<li> 成员参数 Id 为 StatusCode：RuleAction 选择 CodeAction。</li>
                     */
                    RuleExtraParameter GetExtraParameter() const;

                    /**
                     * 设置特殊参数。
<li> 为 NULL：RuleAction 选择 NormalAction；</li>
<li> 成员参数 Id 为 Action：RuleAction 选择 RewirteAction；</li>
<li> 成员参数 Id 为 StatusCode：RuleAction 选择 CodeAction。</li>
                     * @param ExtraParameter 特殊参数。
<li> 为 NULL：RuleAction 选择 NormalAction；</li>
<li> 成员参数 Id 为 Action：RuleAction 选择 RewirteAction；</li>
<li> 成员参数 Id 为 StatusCode：RuleAction 选择 CodeAction。</li>
                     */
                    void SetExtraParameter(const RuleExtraParameter& _extraParameter);

                    /**
                     * 判断参数 ExtraParameter 是否已赋值
                     * @return ExtraParameter 是否已赋值
                     */
                    bool ExtraParameterHasBeenSet() const;

                private:

                    /**
                     * 参数名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数值类型。
<li> CHOICE：参数值只能在 ChoicesValue 中选择； </li>
<li> TOGGLE：参数值为开关类型，可在 ChoicesValue 中选择；</li>
<li> CUSTOM_NUM：参数值用户自定义，整型类型；</li>
<li> CUSTOM_STRING：参数值用户自定义，字符串类型。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 参数值的可选值。
注意：若参数值为用户自定义则该数组为空数组。
                     */
                    std::vector<std::string> m_choicesValue;
                    bool m_choicesValueHasBeenSet;

                    /**
                     * 数值参数的最小值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     */
                    int64_t m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 数值参数的最大值，非数值参数或 Min 和 Max 值都为 0 则此项无意义。
                     */
                    int64_t m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 参数值是否支持多选或者填写多个。
                     */
                    bool m_isMultiple;
                    bool m_isMultipleHasBeenSet;

                    /**
                     * 是否允许为空。
                     */
                    bool m_isAllowEmpty;
                    bool m_isAllowEmptyHasBeenSet;

                    /**
                     * 特殊参数。
<li> 为 NULL：RuleAction 选择 NormalAction；</li>
<li> 成员参数 Id 为 Action：RuleAction 选择 RewirteAction；</li>
<li> 成员参数 Id 为 StatusCode：RuleAction 选择 CodeAction。</li>
                     */
                    RuleExtraParameter m_extraParameter;
                    bool m_extraParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_RULECHOICEPROPERTIESITEM_H_
