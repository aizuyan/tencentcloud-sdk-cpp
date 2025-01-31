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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEUSERAUTOSIGNSTATUSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEUSERAUTOSIGNSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeUserAutoSignStatus返回参数结构体
                */
                class DescribeUserAutoSignStatusResponse : public AbstractModel
                {
                public:
                    DescribeUserAutoSignStatusResponse();
                    ~DescribeUserAutoSignStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否开通
                     * @return IsOpen 是否开通
                     */
                    bool GetIsOpen() const;

                    /**
                     * 判断参数 IsOpen 是否已赋值
                     * @return IsOpen 是否已赋值
                     */
                    bool IsOpenHasBeenSet() const;

                private:

                    /**
                     * 是否开通
                     */
                    bool m_isOpen;
                    bool m_isOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEUSERAUTOSIGNSTATUSRESPONSE_H_
