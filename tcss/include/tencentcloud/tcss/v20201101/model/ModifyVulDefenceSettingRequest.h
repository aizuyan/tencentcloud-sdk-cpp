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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyVulDefenceSetting请求参数结构体
                */
                class ModifyVulDefenceSettingRequest : public AbstractModel
                {
                public:
                    ModifyVulDefenceSettingRequest();
                    ~ModifyVulDefenceSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开启:0: 关闭 1:开启
                     * @return IsEnabled 是否开启:0: 关闭 1:开启
                     */
                    int64_t GetIsEnabled() const;

                    /**
                     * 设置是否开启:0: 关闭 1:开启
                     * @param IsEnabled 是否开启:0: 关闭 1:开启
                     */
                    void SetIsEnabled(const int64_t& _isEnabled);

                    /**
                     * 判断参数 IsEnabled 是否已赋值
                     * @return IsEnabled 是否已赋值
                     */
                    bool IsEnabledHasBeenSet() const;

                    /**
                     * 获取漏洞防御主机范围:0：自选 1: 全部主机。IsEnabled为1时必填
                     * @return Scope 漏洞防御主机范围:0：自选 1: 全部主机。IsEnabled为1时必填
                     */
                    int64_t GetScope() const;

                    /**
                     * 设置漏洞防御主机范围:0：自选 1: 全部主机。IsEnabled为1时必填
                     * @param Scope 漏洞防御主机范围:0：自选 1: 全部主机。IsEnabled为1时必填
                     */
                    void SetScope(const int64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取自选漏洞防御主机,Scope为0时必填
                     * @return HostIDs 自选漏洞防御主机,Scope为0时必填
                     */
                    std::vector<std::string> GetHostIDs() const;

                    /**
                     * 设置自选漏洞防御主机,Scope为0时必填
                     * @param HostIDs 自选漏洞防御主机,Scope为0时必填
                     */
                    void SetHostIDs(const std::vector<std::string>& _hostIDs);

                    /**
                     * 判断参数 HostIDs 是否已赋值
                     * @return HostIDs 是否已赋值
                     */
                    bool HostIDsHasBeenSet() const;

                private:

                    /**
                     * 是否开启:0: 关闭 1:开启
                     */
                    int64_t m_isEnabled;
                    bool m_isEnabledHasBeenSet;

                    /**
                     * 漏洞防御主机范围:0：自选 1: 全部主机。IsEnabled为1时必填
                     */
                    int64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 自选漏洞防御主机,Scope为0时必填
                     */
                    std::vector<std::string> m_hostIDs;
                    bool m_hostIDsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVULDEFENCESETTINGREQUEST_H_
