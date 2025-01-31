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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYSERVICEGROUPWEIGHTSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYSERVICEGROUPWEIGHTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/WeightEntry.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * ModifyServiceGroupWeights请求参数结构体
                */
                class ModifyServiceGroupWeightsRequest : public AbstractModel
                {
                public:
                    ModifyServiceGroupWeightsRequest();
                    ~ModifyServiceGroupWeightsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务组id
                     * @return ServiceGroupId 服务组id
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置服务组id
                     * @param ServiceGroupId 服务组id
                     */
                    void SetServiceGroupId(const std::string& _serviceGroupId);

                    /**
                     * 判断参数 ServiceGroupId 是否已赋值
                     * @return ServiceGroupId 是否已赋值
                     */
                    bool ServiceGroupIdHasBeenSet() const;

                    /**
                     * 获取权重设置
                     * @return Weights 权重设置
                     */
                    std::vector<WeightEntry> GetWeights() const;

                    /**
                     * 设置权重设置
                     * @param Weights 权重设置
                     */
                    void SetWeights(const std::vector<WeightEntry>& _weights);

                    /**
                     * 判断参数 Weights 是否已赋值
                     * @return Weights 是否已赋值
                     */
                    bool WeightsHasBeenSet() const;

                private:

                    /**
                     * 服务组id
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * 权重设置
                     */
                    std::vector<WeightEntry> m_weights;
                    bool m_weightsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MODIFYSERVICEGROUPWEIGHTSREQUEST_H_
