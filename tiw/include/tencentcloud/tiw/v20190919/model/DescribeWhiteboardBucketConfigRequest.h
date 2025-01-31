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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDBUCKETCONFIGREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDBUCKETCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeWhiteboardBucketConfig请求参数结构体
                */
                class DescribeWhiteboardBucketConfigRequest : public AbstractModel
                {
                public:
                    DescribeWhiteboardBucketConfigRequest();
                    ~DescribeWhiteboardBucketConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的SdkAppId
                     * @return SdkAppId 客户的SdkAppId
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置客户的SdkAppId
                     * @param SdkAppId 客户的SdkAppId
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     * @return TaskType 需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     * @param TaskType 需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEWHITEBOARDBUCKETCONFIGREQUEST_H_
