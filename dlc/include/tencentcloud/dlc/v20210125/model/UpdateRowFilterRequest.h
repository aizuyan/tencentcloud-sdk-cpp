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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEROWFILTERREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEROWFILTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UpdateRowFilter请求参数结构体
                */
                class UpdateRowFilterRequest : public AbstractModel
                {
                public:
                    UpdateRowFilterRequest();
                    ~UpdateRowFilterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取行过滤策略的id，此值可以通过DescribeUserInfo或者DescribeWorkGroupInfo接口获取
                     * @return PolicyId 行过滤策略的id，此值可以通过DescribeUserInfo或者DescribeWorkGroupInfo接口获取
                     */
                    int64_t GetPolicyId() const;

                    /**
                     * 设置行过滤策略的id，此值可以通过DescribeUserInfo或者DescribeWorkGroupInfo接口获取
                     * @param PolicyId 行过滤策略的id，此值可以通过DescribeUserInfo或者DescribeWorkGroupInfo接口获取
                     */
                    void SetPolicyId(const int64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取新的过滤策略。
                     * @return Policy 新的过滤策略。
                     */
                    Policy GetPolicy() const;

                    /**
                     * 设置新的过滤策略。
                     * @param Policy 新的过滤策略。
                     */
                    void SetPolicy(const Policy& _policy);

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     */
                    bool PolicyHasBeenSet() const;

                private:

                    /**
                     * 行过滤策略的id，此值可以通过DescribeUserInfo或者DescribeWorkGroupInfo接口获取
                     */
                    int64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 新的过滤策略。
                     */
                    Policy m_policy;
                    bool m_policyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UPDATEROWFILTERREQUEST_H_
