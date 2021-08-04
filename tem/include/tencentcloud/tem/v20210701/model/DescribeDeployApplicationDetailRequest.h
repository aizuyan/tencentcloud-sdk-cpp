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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEDEPLOYAPPLICATIONDETAILREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEDEPLOYAPPLICATIONDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeDeployApplicationDetail请求参数结构体
                */
                class DescribeDeployApplicationDetailRequest : public AbstractModel
                {
                public:
                    DescribeDeployApplicationDetailRequest();
                    ~DescribeDeployApplicationDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务id
                     * @return ApplicationId 服务id
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置服务id
                     * @param ApplicationId 服务id
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取环境id
                     * @return EnvironmentId 环境id
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境id
                     * @param EnvironmentId 环境id
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                private:

                    /**
                     * 服务id
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 环境id
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEDEPLOYAPPLICATIONDETAILREQUEST_H_
