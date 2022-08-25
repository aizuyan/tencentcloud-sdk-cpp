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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 参数信息
                */
                class ParamInfo : public AbstractModel
                {
                public:
                    ParamInfo();
                    ~ParamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前值
                     * @return CurrentValue 当前值
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置当前值
                     * @param CurrentValue 当前值
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取默认值
                     * @return Default 默认值
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置默认值
                     * @param Default 默认值
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取参数为enum/string/bool时，可选值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnumValue 参数为enum/string/bool时，可选值列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetEnumValue() const;

                    /**
                     * 设置参数为enum/string/bool时，可选值列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EnumValue 参数为enum/string/bool时，可选值列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnumValue(const std::vector<std::string>& _enumValue);

                    /**
                     * 判断参数 EnumValue 是否已赋值
                     * @return EnumValue 是否已赋值
                     */
                    bool EnumValueHasBeenSet() const;

                    /**
                     * 获取参数类型为float/integer时的最大值
                     * @return Max 参数类型为float/integer时的最大值
                     */
                    std::string GetMax() const;

                    /**
                     * 设置参数类型为float/integer时的最大值
                     * @param Max 参数类型为float/integer时的最大值
                     */
                    void SetMax(const std::string& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     */
                    bool MaxHasBeenSet() const;

                    /**
                     * 获取参数类型为float/integer时的最小值
                     * @return Min 参数类型为float/integer时的最小值
                     */
                    std::string GetMin() const;

                    /**
                     * 设置参数类型为float/integer时的最小值
                     * @param Min 参数类型为float/integer时的最小值
                     */
                    void SetMin(const std::string& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取参数名称
                     * @return ParamName 参数名称
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名称
                     * @param ParamName 参数名称
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取是否需要重启生效
                     * @return NeedReboot 是否需要重启生效
                     */
                    int64_t GetNeedReboot() const;

                    /**
                     * 设置是否需要重启生效
                     * @param NeedReboot 是否需要重启生效
                     */
                    void SetNeedReboot(const int64_t& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取参数类型：integer/float/string/enum/bool
                     * @return ParamType 参数类型：integer/float/string/enum/bool
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置参数类型：integer/float/string/enum/bool
                     * @param ParamType 参数类型：integer/float/string/enum/bool
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取匹配类型，multiVal, regex在参数类型是string时使用
                     * @return MatchType 匹配类型，multiVal, regex在参数类型是string时使用
                     */
                    std::string GetMatchType() const;

                    /**
                     * 设置匹配类型，multiVal, regex在参数类型是string时使用
                     * @param MatchType 匹配类型，multiVal, regex在参数类型是string时使用
                     */
                    void SetMatchType(const std::string& _matchType);

                    /**
                     * 判断参数 MatchType 是否已赋值
                     * @return MatchType 是否已赋值
                     */
                    bool MatchTypeHasBeenSet() const;

                    /**
                     * 获取匹配目标值，当multiVal时，各个key用;分割
                     * @return MatchValue 匹配目标值，当multiVal时，各个key用;分割
                     */
                    std::string GetMatchValue() const;

                    /**
                     * 设置匹配目标值，当multiVal时，各个key用;分割
                     * @param MatchValue 匹配目标值，当multiVal时，各个key用;分割
                     */
                    void SetMatchValue(const std::string& _matchValue);

                    /**
                     * 判断参数 MatchValue 是否已赋值
                     * @return MatchValue 是否已赋值
                     */
                    bool MatchValueHasBeenSet() const;

                    /**
                     * 获取参数描述
                     * @return Description 参数描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置参数描述
                     * @param Description 参数描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 当前值
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 默认值
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * 参数为enum/string/bool时，可选值列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_enumValue;
                    bool m_enumValueHasBeenSet;

                    /**
                     * 参数类型为float/integer时的最大值
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                    /**
                     * 参数类型为float/integer时的最小值
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 参数名称
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 是否需要重启生效
                     */
                    int64_t m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * 参数类型：integer/float/string/enum/bool
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * 匹配类型，multiVal, regex在参数类型是string时使用
                     */
                    std::string m_matchType;
                    bool m_matchTypeHasBeenSet;

                    /**
                     * 匹配目标值，当multiVal时，各个key用;分割
                     */
                    std::string m_matchValue;
                    bool m_matchValueHasBeenSet;

                    /**
                     * 参数描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMINFO_H_
