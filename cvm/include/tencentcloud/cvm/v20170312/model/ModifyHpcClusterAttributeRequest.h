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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYHPCCLUSTERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYHPCCLUSTERATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyHpcClusterAttribute请求参数结构体
                */
                class ModifyHpcClusterAttributeRequest : public AbstractModel
                {
                public:
                    ModifyHpcClusterAttributeRequest();
                    ~ModifyHpcClusterAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取高性能计算集群ID。
                     * @return HpcClusterId 高性能计算集群ID。
                     */
                    std::string GetHpcClusterId() const;

                    /**
                     * 设置高性能计算集群ID。
                     * @param HpcClusterId 高性能计算集群ID。
                     */
                    void SetHpcClusterId(const std::string& _hpcClusterId);

                    /**
                     * 判断参数 HpcClusterId 是否已赋值
                     * @return HpcClusterId 是否已赋值
                     */
                    bool HpcClusterIdHasBeenSet() const;

                    /**
                     * 获取高性能计算集群新名称。
                     * @return Name 高性能计算集群新名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置高性能计算集群新名称。
                     * @param Name 高性能计算集群新名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取高性能计算集群新备注。
                     * @return Remark 高性能计算集群新备注。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置高性能计算集群新备注。
                     * @param Remark 高性能计算集群新备注。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 高性能计算集群ID。
                     */
                    std::string m_hpcClusterId;
                    bool m_hpcClusterIdHasBeenSet;

                    /**
                     * 高性能计算集群新名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 高性能计算集群新备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYHPCCLUSTERATTRIBUTEREQUEST_H_
