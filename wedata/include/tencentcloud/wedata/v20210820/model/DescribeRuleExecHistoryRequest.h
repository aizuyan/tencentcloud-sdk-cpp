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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEEXECHISTORYREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEEXECHISTORYREQUEST_H_

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
                * DescribeRuleExecHistory请求参数结构体
                */
                class DescribeRuleExecHistoryRequest : public AbstractModel
                {
                public:
                    DescribeRuleExecHistoryRequest();
                    ~DescribeRuleExecHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则Id
                     * @return RuleId 规则Id
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则Id
                     * @param RuleId 规则Id
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param ProjectId 项目Id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 规则Id
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEEXECHISTORYREQUEST_H_
