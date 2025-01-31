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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDORGANIZATIONNODEREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDORGANIZATIONNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * AddOrganizationNode请求参数结构体
                */
                class AddOrganizationNodeRequest : public AbstractModel
                {
                public:
                    AddOrganizationNodeRequest();
                    ~AddOrganizationNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取父节点ID。可以调用DescribeOrganizationNodes获取
                     * @return ParentNodeId 父节点ID。可以调用DescribeOrganizationNodes获取
                     */
                    uint64_t GetParentNodeId() const;

                    /**
                     * 设置父节点ID。可以调用DescribeOrganizationNodes获取
                     * @param ParentNodeId 父节点ID。可以调用DescribeOrganizationNodes获取
                     */
                    void SetParentNodeId(const uint64_t& _parentNodeId);

                    /**
                     * 判断参数 ParentNodeId 是否已赋值
                     * @return ParentNodeId 是否已赋值
                     */
                    bool ParentNodeIdHasBeenSet() const;

                    /**
                     * 获取节点名称。最大长度为40个字符，支持英文字母、数字、汉字、符号+@、&._[]-
                     * @return Name 节点名称。最大长度为40个字符，支持英文字母、数字、汉字、符号+@、&._[]-
                     */
                    std::string GetName() const;

                    /**
                     * 设置节点名称。最大长度为40个字符，支持英文字母、数字、汉字、符号+@、&._[]-
                     * @param Name 节点名称。最大长度为40个字符，支持英文字母、数字、汉字、符号+@、&._[]-
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取备注。
                     * @return Remark 备注。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注。
                     * @param Remark 备注。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 父节点ID。可以调用DescribeOrganizationNodes获取
                     */
                    uint64_t m_parentNodeId;
                    bool m_parentNodeIdHasBeenSet;

                    /**
                     * 节点名称。最大长度为40个字符，支持英文字母、数字、汉字、符号+@、&._[]-
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ADDORGANIZATIONNODEREQUEST_H_
