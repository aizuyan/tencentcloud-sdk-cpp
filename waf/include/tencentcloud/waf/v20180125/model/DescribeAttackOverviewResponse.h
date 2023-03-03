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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * DescribeAttackOverview返回参数结构体
                */
                class DescribeAttackOverviewResponse : public AbstractModel
                {
                public:
                    DescribeAttackOverviewResponse();
                    ~DescribeAttackOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取访问请求总数
                     * @return AccessCount 访问请求总数
                     */
                    uint64_t GetAccessCount() const;

                    /**
                     * 判断参数 AccessCount 是否已赋值
                     * @return AccessCount 是否已赋值
                     */
                    bool AccessCountHasBeenSet() const;

                    /**
                     * 获取Web攻击总数
                     * @return AttackCount Web攻击总数
                     */
                    uint64_t GetAttackCount() const;

                    /**
                     * 判断参数 AttackCount 是否已赋值
                     * @return AttackCount 是否已赋值
                     */
                    bool AttackCountHasBeenSet() const;

                    /**
                     * 获取访问控制总数
                     * @return ACLCount 访问控制总数
                     */
                    uint64_t GetACLCount() const;

                    /**
                     * 判断参数 ACLCount 是否已赋值
                     * @return ACLCount 是否已赋值
                     */
                    bool ACLCountHasBeenSet() const;

                    /**
                     * 获取CC攻击总数
                     * @return CCCount CC攻击总数
                     */
                    uint64_t GetCCCount() const;

                    /**
                     * 判断参数 CCCount 是否已赋值
                     * @return CCCount 是否已赋值
                     */
                    bool CCCountHasBeenSet() const;

                    /**
                     * 获取Bot攻击总数
                     * @return BotCount Bot攻击总数
                     */
                    uint64_t GetBotCount() const;

                    /**
                     * 判断参数 BotCount 是否已赋值
                     * @return BotCount 是否已赋值
                     */
                    bool BotCountHasBeenSet() const;

                private:

                    /**
                     * 访问请求总数
                     */
                    uint64_t m_accessCount;
                    bool m_accessCountHasBeenSet;

                    /**
                     * Web攻击总数
                     */
                    uint64_t m_attackCount;
                    bool m_attackCountHasBeenSet;

                    /**
                     * 访问控制总数
                     */
                    uint64_t m_aCLCount;
                    bool m_aCLCountHasBeenSet;

                    /**
                     * CC攻击总数
                     */
                    uint64_t m_cCCount;
                    bool m_cCCountHasBeenSet;

                    /**
                     * Bot攻击总数
                     */
                    uint64_t m_botCount;
                    bool m_botCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEATTACKOVERVIEWRESPONSE_H_
