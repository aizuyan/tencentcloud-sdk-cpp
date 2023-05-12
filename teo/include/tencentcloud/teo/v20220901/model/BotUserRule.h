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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BOTUSERRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BOTUSERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/AclCondition.h>
#include <tencentcloud/teo/v20220901/model/BotExtendAction.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot自定义规则
                */
                class BotUserRule : public AbstractModel
                {
                public:
                    BotUserRule();
                    ~BotUserRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名，只能以英文字符，数字，下划线组合，且不能以下划线开头。
                     * @return RuleName 规则名，只能以英文字符，数字，下划线组合，且不能以下划线开头。
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名，只能以英文字符，数字，下划线组合，且不能以下划线开头。
                     * @param RuleName 规则名，只能以英文字符，数字，下划线组合，且不能以下划线开头。
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取处置动作，取值有：
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>trans：放行；</li>
<li>alg：JavaScript挑战；</li>
<li>captcha：托管挑战；</li>
<li>random：随机处置；</li>
<li>silence：静默；</li>
<li>shortdelay：短时响应；</li>
<li>longdelay：长时响应。</li>
                     * @return Action 处置动作，取值有：
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>trans：放行；</li>
<li>alg：JavaScript挑战；</li>
<li>captcha：托管挑战；</li>
<li>random：随机处置；</li>
<li>silence：静默；</li>
<li>shortdelay：短时响应；</li>
<li>longdelay：长时响应。</li>
                     */
                    std::string GetAction() const;

                    /**
                     * 设置处置动作，取值有：
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>trans：放行；</li>
<li>alg：JavaScript挑战；</li>
<li>captcha：托管挑战；</li>
<li>random：随机处置；</li>
<li>silence：静默；</li>
<li>shortdelay：短时响应；</li>
<li>longdelay：长时响应。</li>
                     * @param Action 处置动作，取值有：
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>trans：放行；</li>
<li>alg：JavaScript挑战；</li>
<li>captcha：托管挑战；</li>
<li>random：随机处置；</li>
<li>silence：静默；</li>
<li>shortdelay：短时响应；</li>
<li>longdelay：长时响应。</li>
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取规则状态，取值有：
<li>on：生效；</li>
<li>off：不生效。</li>默认on生效。
                     * @return RuleStatus 规则状态，取值有：
<li>on：生效；</li>
<li>off：不生效。</li>默认on生效。
                     */
                    std::string GetRuleStatus() const;

                    /**
                     * 设置规则状态，取值有：
<li>on：生效；</li>
<li>off：不生效。</li>默认on生效。
                     * @param RuleStatus 规则状态，取值有：
<li>on：生效；</li>
<li>off：不生效。</li>默认on生效。
                     */
                    void SetRuleStatus(const std::string& _ruleStatus);

                    /**
                     * 判断参数 RuleStatus 是否已赋值
                     * @return RuleStatus 是否已赋值
                     */
                    bool RuleStatusHasBeenSet() const;

                    /**
                     * 获取规则详情。
                     * @return AclConditions 规则详情。
                     */
                    std::vector<AclCondition> GetAclConditions() const;

                    /**
                     * 设置规则详情。
                     * @param AclConditions 规则详情。
                     */
                    void SetAclConditions(const std::vector<AclCondition>& _aclConditions);

                    /**
                     * 判断参数 AclConditions 是否已赋值
                     * @return AclConditions 是否已赋值
                     */
                    bool AclConditionsHasBeenSet() const;

                    /**
                     * 获取规则权重，取值范围0-100。
                     * @return RulePriority 规则权重，取值范围0-100。
                     */
                    int64_t GetRulePriority() const;

                    /**
                     * 设置规则权重，取值范围0-100。
                     * @param RulePriority 规则权重，取值范围0-100。
                     */
                    void SetRulePriority(const int64_t& _rulePriority);

                    /**
                     * 判断参数 RulePriority 是否已赋值
                     * @return RulePriority 是否已赋值
                     */
                    bool RulePriorityHasBeenSet() const;

                    /**
                     * 获取规则id。仅出参使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleID 规则id。仅出参使用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置规则id。仅出参使用。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RuleID 规则id。仅出参使用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取随机处置的处置方式及占比，非随机处置可不填暂不支持。
                     * @return ExtendActions 随机处置的处置方式及占比，非随机处置可不填暂不支持。
                     */
                    std::vector<BotExtendAction> GetExtendActions() const;

                    /**
                     * 设置随机处置的处置方式及占比，非随机处置可不填暂不支持。
                     * @param ExtendActions 随机处置的处置方式及占比，非随机处置可不填暂不支持。
                     */
                    void SetExtendActions(const std::vector<BotExtendAction>& _extendActions);

                    /**
                     * 判断参数 ExtendActions 是否已赋值
                     * @return ExtendActions 是否已赋值
                     */
                    bool ExtendActionsHasBeenSet() const;

                    /**
                     * 获取过滤词，取值有：
<li>sip：客户端ip。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FreqFields 过滤词，取值有：
<li>sip：客户端ip。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetFreqFields() const;

                    /**
                     * 设置过滤词，取值有：
<li>sip：客户端ip。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FreqFields 过滤词，取值有：
<li>sip：客户端ip。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFreqFields(const std::vector<std::string>& _freqFields);

                    /**
                     * 判断参数 FreqFields 是否已赋值
                     * @return FreqFields 是否已赋值
                     */
                    bool FreqFieldsHasBeenSet() const;

                    /**
                     * 获取更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UpdateTime 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取统计范围，字段为null时，代表source_to_eo。取值有：
<li>source_to_eo：（响应）源站到EdgeOne。</li>
<li>client_to_eo：（请求）客户端到EdgeOne；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FreqScope 统计范围，字段为null时，代表source_to_eo。取值有：
<li>source_to_eo：（响应）源站到EdgeOne。</li>
<li>client_to_eo：（请求）客户端到EdgeOne；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetFreqScope() const;

                    /**
                     * 设置统计范围，字段为null时，代表source_to_eo。取值有：
<li>source_to_eo：（响应）源站到EdgeOne。</li>
<li>client_to_eo：（请求）客户端到EdgeOne；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FreqScope 统计范围，字段为null时，代表source_to_eo。取值有：
<li>source_to_eo：（响应）源站到EdgeOne。</li>
<li>client_to_eo：（请求）客户端到EdgeOne；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFreqScope(const std::vector<std::string>& _freqScope);

                    /**
                     * 判断参数 FreqScope 是否已赋值
                     * @return FreqScope 是否已赋值
                     */
                    bool FreqScopeHasBeenSet() const;

                private:

                    /**
                     * 规则名，只能以英文字符，数字，下划线组合，且不能以下划线开头。
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 处置动作，取值有：
<li>drop：拦截；</li>
<li>monitor：观察；</li>
<li>trans：放行；</li>
<li>alg：JavaScript挑战；</li>
<li>captcha：托管挑战；</li>
<li>random：随机处置；</li>
<li>silence：静默；</li>
<li>shortdelay：短时响应；</li>
<li>longdelay：长时响应。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 规则状态，取值有：
<li>on：生效；</li>
<li>off：不生效。</li>默认on生效。
                     */
                    std::string m_ruleStatus;
                    bool m_ruleStatusHasBeenSet;

                    /**
                     * 规则详情。
                     */
                    std::vector<AclCondition> m_aclConditions;
                    bool m_aclConditionsHasBeenSet;

                    /**
                     * 规则权重，取值范围0-100。
                     */
                    int64_t m_rulePriority;
                    bool m_rulePriorityHasBeenSet;

                    /**
                     * 规则id。仅出参使用。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * 随机处置的处置方式及占比，非随机处置可不填暂不支持。
                     */
                    std::vector<BotExtendAction> m_extendActions;
                    bool m_extendActionsHasBeenSet;

                    /**
                     * 过滤词，取值有：
<li>sip：客户端ip。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_freqFields;
                    bool m_freqFieldsHasBeenSet;

                    /**
                     * 更新时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 统计范围，字段为null时，代表source_to_eo。取值有：
<li>source_to_eo：（响应）源站到EdgeOne。</li>
<li>client_to_eo：（请求）客户端到EdgeOne；</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_freqScope;
                    bool m_freqScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BOTUSERRULE_H_
