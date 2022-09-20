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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTCONFIG_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BotManagedRule.h>
#include <tencentcloud/teo/v20220901/model/BotPortraitRule.h>
#include <tencentcloud/teo/v20220901/model/IntelligenceRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 安全Bot配置
                */
                class BotConfig : public AbstractModel
                {
                public:
                    BotConfig();
                    ~BotConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取bot开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch bot开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置bot开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param Switch bot开关，取值有：
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
                     * 获取通用详细基础规则。如果为null，默认使用历史配置。
                     * @return BotManagedRule 通用详细基础规则。如果为null，默认使用历史配置。
                     */
                    BotManagedRule GetBotManagedRule() const;

                    /**
                     * 设置通用详细基础规则。如果为null，默认使用历史配置。
                     * @param BotManagedRule 通用详细基础规则。如果为null，默认使用历史配置。
                     */
                    void SetBotManagedRule(const BotManagedRule& _botManagedRule);

                    /**
                     * 判断参数 BotManagedRule 是否已赋值
                     * @return BotManagedRule 是否已赋值
                     */
                    bool BotManagedRuleHasBeenSet() const;

                    /**
                     * 获取用户画像规则。如果为null，默认使用历史配置。
                     * @return BotPortraitRule 用户画像规则。如果为null，默认使用历史配置。
                     */
                    BotPortraitRule GetBotPortraitRule() const;

                    /**
                     * 设置用户画像规则。如果为null，默认使用历史配置。
                     * @param BotPortraitRule 用户画像规则。如果为null，默认使用历史配置。
                     */
                    void SetBotPortraitRule(const BotPortraitRule& _botPortraitRule);

                    /**
                     * 判断参数 BotPortraitRule 是否已赋值
                     * @return BotPortraitRule 是否已赋值
                     */
                    bool BotPortraitRuleHasBeenSet() const;

                    /**
                     * 获取Bot智能分析。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntelligenceRule Bot智能分析。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntelligenceRule GetIntelligenceRule() const;

                    /**
                     * 设置Bot智能分析。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IntelligenceRule Bot智能分析。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIntelligenceRule(const IntelligenceRule& _intelligenceRule);

                    /**
                     * 判断参数 IntelligenceRule 是否已赋值
                     * @return IntelligenceRule 是否已赋值
                     */
                    bool IntelligenceRuleHasBeenSet() const;

                private:

                    /**
                     * bot开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 通用详细基础规则。如果为null，默认使用历史配置。
                     */
                    BotManagedRule m_botManagedRule;
                    bool m_botManagedRuleHasBeenSet;

                    /**
                     * 用户画像规则。如果为null，默认使用历史配置。
                     */
                    BotPortraitRule m_botPortraitRule;
                    bool m_botPortraitRuleHasBeenSet;

                    /**
                     * Bot智能分析。如果为null，默认使用历史配置。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    IntelligenceRule m_intelligenceRule;
                    bool m_intelligenceRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTCONFIG_H_
