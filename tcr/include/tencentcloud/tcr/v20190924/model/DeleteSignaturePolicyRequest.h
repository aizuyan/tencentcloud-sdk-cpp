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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DELETESIGNATUREPOLICYREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DELETESIGNATUREPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DeleteSignaturePolicy请求参数结构体
                */
                class DeleteSignaturePolicyRequest : public AbstractModel
                {
                public:
                    DeleteSignaturePolicyRequest();
                    ~DeleteSignaturePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return RegistryId 实例ID
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例ID
                     * @param RegistryId 实例ID
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取命名空间的名称
                     * @return NamespaceName 命名空间的名称
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间的名称
                     * @param NamespaceName 命名空间的名称
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     */
                    bool NamespaceNameHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 命名空间的名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DELETESIGNATUREPOLICYREQUEST_H_
