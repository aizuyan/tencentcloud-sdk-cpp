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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/DDoSRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyDDoSPolicy请求参数结构体
                */
                class ModifyDDoSPolicyRequest : public AbstractModel
                {
                public:
                    ModifyDDoSPolicyRequest();
                    ~ModifyDDoSPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略Id。
                     * @return PolicyId 策略Id。
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置策略Id。
                     * @param PolicyId 策略Id。
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取站点Id。
                     * @return ZoneId 站点Id。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点Id。
                     * @param ZoneId 站点Id。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取DDoS防护配置详情。
                     * @return DDoSRule DDoS防护配置详情。
                     */
                    DDoSRule GetDDoSRule() const;

                    /**
                     * 设置DDoS防护配置详情。
                     * @param DDoSRule DDoS防护配置详情。
                     */
                    void SetDDoSRule(const DDoSRule& _dDoSRule);

                    /**
                     * 判断参数 DDoSRule 是否已赋值
                     * @return DDoSRule 是否已赋值
                     */
                    bool DDoSRuleHasBeenSet() const;

                private:

                    /**
                     * 策略Id。
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 站点Id。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * DDoS防护配置详情。
                     */
                    DDoSRule m_dDoSRule;
                    bool m_dDoSRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDDOSPOLICYREQUEST_H_
