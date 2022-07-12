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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBETREEJOBSREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBETREEJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeTreeJobs请求参数结构体
                */
                class DescribeTreeJobsRequest : public AbstractModel
                {
                public:
                    DescribeTreeJobsRequest();
                    ~DescribeTreeJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间 Serialid
                     * @return WorkSpaceId 工作空间 Serialid
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 Serialid
                     * @param WorkSpaceId 工作空间 Serialid
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                private:

                    /**
                     * 工作空间 Serialid
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBETREEJOBSREQUEST_H_
