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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONEMPLOYEESREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONEMPLOYEESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/Staff.h>
#include <tencentcloud/ess/v20201111/model/Agent.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateIntegrationEmployees请求参数结构体
                */
                class CreateIntegrationEmployeesRequest : public AbstractModel
                {
                public:
                    CreateIntegrationEmployeesRequest();
                    ~CreateIntegrationEmployeesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息，userId必填
                     * @return Operator 操作人信息，userId必填
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息，userId必填
                     * @param Operator 操作人信息，userId必填
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取待创建员工的信息，Mobile和DisplayName必填
                     * @return Employees 待创建员工的信息，Mobile和DisplayName必填
                     */
                    std::vector<Staff> GetEmployees() const;

                    /**
                     * 设置待创建员工的信息，Mobile和DisplayName必填
                     * @param Employees 待创建员工的信息，Mobile和DisplayName必填
                     */
                    void SetEmployees(const std::vector<Staff>& _employees);

                    /**
                     * 判断参数 Employees 是否已赋值
                     * @return Employees 是否已赋值
                     */
                    bool EmployeesHasBeenSet() const;

                    /**
                     * 获取代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @return Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent GetAgent() const;

                    /**
                     * 设置代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     * @param Agent 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    void SetAgent(const Agent& _agent);

                    /**
                     * 判断参数 Agent 是否已赋值
                     * @return Agent 是否已赋值
                     */
                    bool AgentHasBeenSet() const;

                private:

                    /**
                     * 操作人信息，userId必填
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 待创建员工的信息，Mobile和DisplayName必填
                     */
                    std::vector<Staff> m_employees;
                    bool m_employeesHasBeenSet;

                    /**
                     * 代理相关应用信息，如集团主企业代子企业操作的场景中ProxyOrganizationId必填
                     */
                    Agent m_agent;
                    bool m_agentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONEMPLOYEESREQUEST_H_
