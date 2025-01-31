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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_CREATEHPCCLUSTERREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_CREATEHPCCLUSTERREQUEST_H_

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
                * CreateHpcCluster请求参数结构体
                */
                class CreateHpcClusterRequest : public AbstractModel
                {
                public:
                    CreateHpcClusterRequest();
                    ~CreateHpcClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区。
                     * @return Zone 可用区。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
                     * @param Zone 可用区。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取高性能计算集群名称。
                     * @return Name 高性能计算集群名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置高性能计算集群名称。
                     * @param Name 高性能计算集群名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取高性能计算集群备注。
                     * @return Remark 高性能计算集群备注。
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置高性能计算集群备注。
                     * @param Remark 高性能计算集群备注。
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 高性能计算集群名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 高性能计算集群备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_CREATEHPCCLUSTERREQUEST_H_
