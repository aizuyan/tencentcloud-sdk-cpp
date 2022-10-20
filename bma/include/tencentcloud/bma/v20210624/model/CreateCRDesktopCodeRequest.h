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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRDESKTOPCODEREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRDESKTOPCODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * CreateCRDesktopCode请求参数结构体
                */
                class CreateCRDesktopCodeRequest : public AbstractModel
                {
                public:
                    CreateCRDesktopCodeRequest();
                    ~CreateCRDesktopCodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取xxx
                     * @return TortId xxx
                     */
                    int64_t GetTortId() const;

                    /**
                     * 设置xxx
                     * @param TortId xxx
                     */
                    void SetTortId(const int64_t& _tortId);

                    /**
                     * 判断参数 TortId 是否已赋值
                     * @return TortId 是否已赋值
                     */
                    bool TortIdHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return DesktopCode xxx
                     */
                    std::string GetDesktopCode() const;

                    /**
                     * 设置xxx
                     * @param DesktopCode xxx
                     */
                    void SetDesktopCode(const std::string& _desktopCode);

                    /**
                     * 判断参数 DesktopCode 是否已赋值
                     * @return DesktopCode 是否已赋值
                     */
                    bool DesktopCodeHasBeenSet() const;

                private:

                    /**
                     * xxx
                     */
                    int64_t m_tortId;
                    bool m_tortIdHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_desktopCode;
                    bool m_desktopCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRDESKTOPCODEREQUEST_H_
