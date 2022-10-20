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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYSTATUSRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeNetworkFirewallPolicyStatus返回参数结构体
                */
                class DescribeNetworkFirewallPolicyStatusResponse : public AbstractModel
                {
                public:
                    DescribeNetworkFirewallPolicyStatusResponse();
                    ~DescribeNetworkFirewallPolicyStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态，可能为：Task_Running,Task_Succ,Task_Error,Task_NoExist
                     * @return TaskStatus 任务状态，可能为：Task_Running,Task_Succ,Task_Error,Task_NoExist
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取NameRepeat,K8sRuleIngressPortError等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskResult NameRepeat,K8sRuleIngressPortError等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTaskResult() const;

                    /**
                     * 判断参数 TaskResult 是否已赋值
                     * @return TaskResult 是否已赋值
                     */
                    bool TaskResultHasBeenSet() const;

                private:

                    /**
                     * 任务状态，可能为：Task_Running,Task_Succ,Task_Error,Task_NoExist
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * NameRepeat,K8sRuleIngressPortError等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_taskResult;
                    bool m_taskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENETWORKFIREWALLPOLICYSTATUSRESPONSE_H_
