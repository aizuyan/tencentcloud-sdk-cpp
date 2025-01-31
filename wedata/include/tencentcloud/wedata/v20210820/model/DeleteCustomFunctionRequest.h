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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETECUSTOMFUNCTIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETECUSTOMFUNCTIONREQUEST_H_

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
                * DeleteCustomFunction请求参数结构体
                */
                class DeleteCustomFunctionRequest : public AbstractModel
                {
                public:
                    DeleteCustomFunctionRequest();
                    ~DeleteCustomFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群实例 ID
                     * @return ClusterIdentifier 集群实例 ID
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置集群实例 ID
                     * @param ClusterIdentifier 集群实例 ID
                     */
                    void SetClusterIdentifier(const std::string& _clusterIdentifier);

                    /**
                     * 判断参数 ClusterIdentifier 是否已赋值
                     * @return ClusterIdentifier 是否已赋值
                     */
                    bool ClusterIdentifierHasBeenSet() const;

                    /**
                     * 获取函数 ID
                     * @return FunctionId 函数 ID
                     */
                    std::string GetFunctionId() const;

                    /**
                     * 设置函数 ID
                     * @param FunctionId 函数 ID
                     */
                    void SetFunctionId(const std::string& _functionId);

                    /**
                     * 判断参数 FunctionId 是否已赋值
                     * @return FunctionId 是否已赋值
                     */
                    bool FunctionIdHasBeenSet() const;

                    /**
                     * 获取项目ID，必须填
                     * @return ProjectId 项目ID，必须填
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID，必须填
                     * @param ProjectId 项目ID，必须填
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 集群实例 ID
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                    /**
                     * 函数 ID
                     */
                    std::string m_functionId;
                    bool m_functionIdHasBeenSet;

                    /**
                     * 项目ID，必须填
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETECUSTOMFUNCTIONREQUEST_H_
