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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCSELFDEFINEPOLICYRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCSELFDEFINEPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/CCPolicy.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCCSelfDefinePolicy返回参数结构体
                */
                class DescribeCCSelfDefinePolicyResponse : public AbstractModel
                {
                public:
                    DescribeCCSelfDefinePolicyResponse();
                    ~DescribeCCSelfDefinePolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义规则总数
                     * @return Total 自定义规则总数
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取策略列表
                     * @return Policys 策略列表
                     */
                    std::vector<CCPolicy> GetPolicys() const;

                    /**
                     * 判断参数 Policys 是否已赋值
                     * @return Policys 是否已赋值
                     */
                    bool PolicysHasBeenSet() const;

                private:

                    /**
                     * 自定义规则总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 策略列表
                     */
                    std::vector<CCPolicy> m_policys;
                    bool m_policysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCSELFDEFINEPOLICYRESPONSE_H_
