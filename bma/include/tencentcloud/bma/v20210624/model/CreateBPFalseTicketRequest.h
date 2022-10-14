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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPFALSETICKETREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPFALSETICKETREQUEST_H_

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
                * CreateBPFalseTicket请求参数结构体
                */
                class CreateBPFalseTicketRequest : public AbstractModel
                {
                public:
                    CreateBPFalseTicketRequest();
                    ~CreateBPFalseTicketRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仿冒网址
                     * @return FakeURL 仿冒网址
                     */
                    std::string GetFakeURL() const;

                    /**
                     * 设置仿冒网址
                     * @param FakeURL 仿冒网址
                     */
                    void SetFakeURL(const std::string& _fakeURL);

                    /**
                     * 判断参数 FakeURL 是否已赋值
                     * @return FakeURL 是否已赋值
                     */
                    bool FakeURLHasBeenSet() const;

                private:

                    /**
                     * 仿冒网址
                     */
                    std::string m_fakeURL;
                    bool m_fakeURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPFALSETICKETREQUEST_H_
