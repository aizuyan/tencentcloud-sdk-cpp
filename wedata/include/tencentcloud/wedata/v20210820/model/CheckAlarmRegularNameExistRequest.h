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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKALARMREGULARNAMEEXISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKALARMREGULARNAMEEXISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CheckAlarmRegularNameExist请求参数结构体
                */
                class CheckAlarmRegularNameExistRequest : public AbstractModel
                {
                public:
                    CheckAlarmRegularNameExistRequest();
                    ~CheckAlarmRegularNameExistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目名称
                     * @return ProjectId 项目名称
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目名称
                     * @param ProjectId 项目名称
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param TaskId 任务ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return AlarmRegularName 规则名称
                     */
                    std::string GetAlarmRegularName() const;

                    /**
                     * 设置规则名称
                     * @param AlarmRegularName 规则名称
                     */
                    void SetAlarmRegularName(const std::string& _alarmRegularName);

                    /**
                     * 判断参数 AlarmRegularName 是否已赋值
                     * @return AlarmRegularName 是否已赋值
                     */
                    bool AlarmRegularNameHasBeenSet() const;

                    /**
                     * 获取主键ID
                     * @return Id 主键ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置主键ID
                     * @param Id 主键ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 项目名称
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_alarmRegularName;
                    bool m_alarmRegularNameHasBeenSet;

                    /**
                     * 主键ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKALARMREGULARNAMEEXISTREQUEST_H_
