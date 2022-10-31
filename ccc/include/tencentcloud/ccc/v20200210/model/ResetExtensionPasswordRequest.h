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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_RESETEXTENSIONPASSWORDREQUEST_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_RESETEXTENSIONPASSWORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * ResetExtensionPassword请求参数结构体
                */
                class ResetExtensionPasswordRequest : public AbstractModel
                {
                public:
                    ResetExtensionPasswordRequest();
                    ~ResetExtensionPasswordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TCCC 实例应用 ID
                     * @return SdkAppId TCCC 实例应用 ID
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TCCC 实例应用 ID
                     * @param SdkAppId TCCC 实例应用 ID
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取分机号
                     * @return ExtensionId 分机号
                     */
                    std::string GetExtensionId() const;

                    /**
                     * 设置分机号
                     * @param ExtensionId 分机号
                     */
                    void SetExtensionId(const std::string& _extensionId);

                    /**
                     * 判断参数 ExtensionId 是否已赋值
                     * @return ExtensionId 是否已赋值
                     */
                    bool ExtensionIdHasBeenSet() const;

                private:

                    /**
                     * TCCC 实例应用 ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 分机号
                     */
                    std::string m_extensionId;
                    bool m_extensionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_RESETEXTENSIONPASSWORDREQUEST_H_
