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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CREATECOMPARETASKREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CREATECOMPARETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/CompareObject.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * CreateCompareTask请求参数结构体
                */
                class CreateCompareTaskRequest : public AbstractModel
                {
                public:
                    CreateCompareTaskRequest();
                    ~CreateCompareTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取迁移任务 Id
                     * @return JobId 迁移任务 Id
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置迁移任务 Id
                     * @param JobId 迁移任务 Id
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取数据对比任务名称，若为空则默认给CompareTaskId相同值
                     * @return TaskName 数据对比任务名称，若为空则默认给CompareTaskId相同值
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置数据对比任务名称，若为空则默认给CompareTaskId相同值
                     * @param TaskName 数据对比任务名称，若为空则默认给CompareTaskId相同值
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取数据对比对象模式，sameAsMigrate(全部迁移对象， 默认为此项配置)，custom(自定义模式)
                     * @return ObjectMode 数据对比对象模式，sameAsMigrate(全部迁移对象， 默认为此项配置)，custom(自定义模式)
                     */
                    std::string GetObjectMode() const;

                    /**
                     * 设置数据对比对象模式，sameAsMigrate(全部迁移对象， 默认为此项配置)，custom(自定义模式)
                     * @param ObjectMode 数据对比对象模式，sameAsMigrate(全部迁移对象， 默认为此项配置)，custom(自定义模式)
                     */
                    void SetObjectMode(const std::string& _objectMode);

                    /**
                     * 判断参数 ObjectMode 是否已赋值
                     * @return ObjectMode 是否已赋值
                     */
                    bool ObjectModeHasBeenSet() const;

                    /**
                     * 获取一致性对比对象配置
                     * @return Objects 一致性对比对象配置
                     */
                    CompareObject GetObjects() const;

                    /**
                     * 设置一致性对比对象配置
                     * @param Objects 一致性对比对象配置
                     */
                    void SetObjects(const CompareObject& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     */
                    bool ObjectsHasBeenSet() const;

                private:

                    /**
                     * 迁移任务 Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 数据对比任务名称，若为空则默认给CompareTaskId相同值
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 数据对比对象模式，sameAsMigrate(全部迁移对象， 默认为此项配置)，custom(自定义模式)
                     */
                    std::string m_objectMode;
                    bool m_objectModeHasBeenSet;

                    /**
                     * 一致性对比对象配置
                     */
                    CompareObject m_objects;
                    bool m_objectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CREATECOMPARETASKREQUEST_H_
