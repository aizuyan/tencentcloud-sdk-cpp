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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECUSTOMHEADERRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECUSTOMHEADERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/HttpHeaderParam.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeCustomHeader返回参数结构体
                */
                class DescribeCustomHeaderResponse : public AbstractModel
                {
                public:
                    DescribeCustomHeaderResponse();
                    ~DescribeCustomHeaderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取规则id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleId 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuleId() const;

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取自定义header列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Headers 自定义header列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HttpHeaderParam> GetHeaders() const;

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * 规则id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 自定义header列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<HttpHeaderParam> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBECUSTOMHEADERRESPONSE_H_
