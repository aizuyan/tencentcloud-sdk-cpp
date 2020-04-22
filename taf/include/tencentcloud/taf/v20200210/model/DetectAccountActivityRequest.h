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

#ifndef TENCENTCLOUD_TAF_V20200210_MODEL_DETECTACCOUNTACTIVITYREQUEST_H_
#define TENCENTCLOUD_TAF_V20200210_MODEL_DETECTACCOUNTACTIVITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/taf/v20200210/model/InputDetectAccountActivity.h>


namespace TencentCloud
{
    namespace Taf
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DetectAccountActivity请求参数结构体
                */
                class DetectAccountActivityRequest : public AbstractModel
                {
                public:
                    DetectAccountActivityRequest();
                    ~DetectAccountActivityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务入参
                     * @return BusinessSecurityData 业务入参
                     */
                    InputDetectAccountActivity GetBusinessSecurityData() const;

                    /**
                     * 设置业务入参
                     * @param BusinessSecurityData 业务入参
                     */
                    void SetBusinessSecurityData(const InputDetectAccountActivity& _businessSecurityData);

                    /**
                     * 判断参数 BusinessSecurityData 是否已赋值
                     * @return BusinessSecurityData 是否已赋值
                     */
                    bool BusinessSecurityDataHasBeenSet() const;

                private:

                    /**
                     * 业务入参
                     */
                    InputDetectAccountActivity m_businessSecurityData;
                    bool m_businessSecurityDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAF_V20200210_MODEL_DETECTACCOUNTACTIVITYREQUEST_H_
