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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ExceptUserRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 例外规则，用于配置需要跳过特定场景的规则
                */
                class ExceptConfig : public AbstractModel
                {
                public:
                    ExceptConfig();
                    ~ExceptConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param Switch 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取例外规则详情。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExceptUserRules 例外规则详情。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExceptUserRule> GetExceptUserRules() const;

                    /**
                     * 设置例外规则详情。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExceptUserRules 例外规则详情。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExceptUserRules(const std::vector<ExceptUserRule>& _exceptUserRules);

                    /**
                     * 判断参数 ExceptUserRules 是否已赋值
                     * @return ExceptUserRules 是否已赋值
                     */
                    bool ExceptUserRulesHasBeenSet() const;

                private:

                    /**
                     * 配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 例外规则详情。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ExceptUserRule> m_exceptUserRules;
                    bool m_exceptUserRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_EXCEPTCONFIG_H_
