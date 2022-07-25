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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_INVOCATIONRESULT_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_INVOCATIONRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * 执行命令结果。
                */
                class InvocationResult : public AbstractModel
                {
                public:
                    InvocationResult();
                    ~InvocationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取执行活动ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvocationId 执行活动ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置执行活动ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InvocationId 执行活动ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取执行任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvocationTaskId 执行任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInvocationTaskId() const;

                    /**
                     * 设置执行任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InvocationTaskId 执行任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInvocationTaskId(const std::string& _invocationTaskId);

                    /**
                     * 判断参数 InvocationTaskId 是否已赋值
                     * @return InvocationTaskId 是否已赋值
                     */
                    bool InvocationTaskIdHasBeenSet() const;

                    /**
                     * 获取命令ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CommandId 命令ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCommandId() const;

                    /**
                     * 设置命令ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CommandId 命令ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCommandId(const std::string& _commandId);

                    /**
                     * 判断参数 CommandId 是否已赋值
                     * @return CommandId 是否已赋值
                     */
                    bool CommandIdHasBeenSet() const;

                    /**
                     * 获取执行任务状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskStatus 执行任务状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置执行任务状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TaskStatus 执行任务状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取执行异常信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 执行异常信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置执行异常信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorMessage 执行异常信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     */
                    bool ErrorMessageHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 执行活动ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * 执行任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_invocationTaskId;
                    bool m_invocationTaskIdHasBeenSet;

                    /**
                     * 命令ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_commandId;
                    bool m_commandIdHasBeenSet;

                    /**
                     * 执行任务状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * 执行异常信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INVOCATIONRESULT_H_
