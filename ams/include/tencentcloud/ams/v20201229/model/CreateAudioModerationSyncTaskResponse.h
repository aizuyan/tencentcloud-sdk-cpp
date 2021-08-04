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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_CREATEAUDIOMODERATIONSYNCTASKRESPONSE_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_CREATEAUDIOMODERATIONSYNCTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/TextResult.h>
#include <tencentcloud/ams/v20201229/model/MoanResult.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * CreateAudioModerationSyncTask返回参数结构体
                */
                class CreateAudioModerationSyncTaskResponse : public AbstractModel
                {
                public:
                    CreateAudioModerationSyncTaskResponse();
                    ~CreateAudioModerationSyncTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求接口时传入的数据标识
                     * @return DataId 请求接口时传入的数据标识
                     */
                    std::string GetDataId() const;

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Biztype为策略的具体的编号，用于接口调度，在内容安全控制台中可配置。不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；调用时不传入Biztype代表采用默认的识别策略。
                     * @return BizType Biztype为策略的具体的编号，用于接口调度，在内容安全控制台中可配置。不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；调用时不传入Biztype代表采用默认的识别策略。
                     */
                    std::string GetBizType() const;

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取智能审核服务对于内容违规类型的等级，可选值：
Pass 建议通过；
Reveiw 建议复审；
Block 建议屏蔽；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Suggestion 智能审核服务对于内容违规类型的等级，可选值：
Pass 建议通过；
Reveiw 建议复审；
Block 建议屏蔽；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取智能审核服务对于内容违规类型的判断，详见返回值列表
如：Label：Porn（色情）；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 智能审核服务对于内容违规类型的判断，详见返回值列表
如：Label：Porn（色情）；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取音频文本，备注：这里的文本最大只返回前1000个字符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AsrText 音频文本，备注：这里的文本最大只返回前1000个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAsrText() const;

                    /**
                     * 判断参数 AsrText 是否已赋值
                     * @return AsrText 是否已赋值
                     */
                    bool AsrTextHasBeenSet() const;

                    /**
                     * 获取音频中对话内容审核结果；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextResults 音频中对话内容审核结果；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TextResult> GetTextResults() const;

                    /**
                     * 判断参数 TextResults 是否已赋值
                     * @return TextResults 是否已赋值
                     */
                    bool TextResultsHasBeenSet() const;

                    /**
                     * 获取音频中低俗内容审核结果；
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MoanResults 音频中低俗内容审核结果；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MoanResult> GetMoanResults() const;

                    /**
                     * 判断参数 MoanResults 是否已赋值
                     * @return MoanResults 是否已赋值
                     */
                    bool MoanResultsHasBeenSet() const;

                private:

                    /**
                     * 请求接口时传入的数据标识
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 文件名称，可以由英文字母、数字、下划线、-、@#组成，不超过64个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Biztype为策略的具体的编号，用于接口调度，在内容安全控制台中可配置。不同Biztype关联不同的业务场景与识别能力策略，调用前请确认正确的Biztype。Biztype仅为数字、字母与下划线的组合，长度为3-32个字符；调用时不传入Biztype代表采用默认的识别策略。
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 智能审核服务对于内容违规类型的等级，可选值：
Pass 建议通过；
Reveiw 建议复审；
Block 建议屏蔽；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 智能审核服务对于内容违规类型的判断，详见返回值列表
如：Label：Porn（色情）；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 音频文本，备注：这里的文本最大只返回前1000个字符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_asrText;
                    bool m_asrTextHasBeenSet;

                    /**
                     * 音频中对话内容审核结果；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TextResult> m_textResults;
                    bool m_textResultsHasBeenSet;

                    /**
                     * 音频中低俗内容审核结果；
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MoanResult> m_moanResults;
                    bool m_moanResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_CREATEAUDIOMODERATIONSYNCTASKRESPONSE_H_
