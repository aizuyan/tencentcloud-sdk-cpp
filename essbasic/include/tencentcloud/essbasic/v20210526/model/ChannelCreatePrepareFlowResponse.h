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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREFLOWRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREFLOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreatePrepareFlow返回参数结构体
                */
                class ChannelCreatePrepareFlowResponse : public AbstractModel
                {
                public:
                    ChannelCreatePrepareFlowResponse();
                    ~ChannelCreatePrepareFlowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取预发起的合同链接
                     * @return PrepareFlowUrl 预发起的合同链接
                     */
                    std::string GetPrepareFlowUrl() const;

                    /**
                     * 判断参数 PrepareFlowUrl 是否已赋值
                     * @return PrepareFlowUrl 是否已赋值
                     */
                    bool PrepareFlowUrlHasBeenSet() const;

                    /**
                     * 获取合同发起后预览链接
                     * @return PreviewFlowUrl 合同发起后预览链接
                     */
                    std::string GetPreviewFlowUrl() const;

                    /**
                     * 判断参数 PreviewFlowUrl 是否已赋值
                     * @return PreviewFlowUrl 是否已赋值
                     */
                    bool PreviewFlowUrlHasBeenSet() const;

                private:

                    /**
                     * 预发起的合同链接
                     */
                    std::string m_prepareFlowUrl;
                    bool m_prepareFlowUrlHasBeenSet;

                    /**
                     * 合同发起后预览链接
                     */
                    std::string m_previewFlowUrl;
                    bool m_previewFlowUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEPREPAREFLOWRESPONSE_H_
