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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICECALLINFORESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICECALLINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ServiceCallInfo.h>
#include <tencentcloud/tione/v20211111/model/InferGatewayCallInfo.h>
#include <tencentcloud/tione/v20211111/model/DefaultNginxGatewayCallInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeModelServiceCallInfo返回参数结构体
                */
                class DescribeModelServiceCallInfoResponse : public AbstractModel
                {
                public:
                    DescribeModelServiceCallInfoResponse();
                    ~DescribeModelServiceCallInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceCallInfo 服务调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceCallInfo GetServiceCallInfo() const;

                    /**
                     * 判断参数 ServiceCallInfo 是否已赋值
                     * @return ServiceCallInfo 是否已赋值
                     */
                    bool ServiceCallInfoHasBeenSet() const;

                    /**
                     * 获取升级网关调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InferGatewayCallInfo 升级网关调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InferGatewayCallInfo GetInferGatewayCallInfo() const;

                    /**
                     * 判断参数 InferGatewayCallInfo 是否已赋值
                     * @return InferGatewayCallInfo 是否已赋值
                     */
                    bool InferGatewayCallInfoHasBeenSet() const;

                    /**
                     * 获取默认nginx网关的调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultNginxGatewayCallInfo 默认nginx网关的调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DefaultNginxGatewayCallInfo GetDefaultNginxGatewayCallInfo() const;

                    /**
                     * 判断参数 DefaultNginxGatewayCallInfo 是否已赋值
                     * @return DefaultNginxGatewayCallInfo 是否已赋值
                     */
                    bool DefaultNginxGatewayCallInfoHasBeenSet() const;

                private:

                    /**
                     * 服务调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceCallInfo m_serviceCallInfo;
                    bool m_serviceCallInfoHasBeenSet;

                    /**
                     * 升级网关调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InferGatewayCallInfo m_inferGatewayCallInfo;
                    bool m_inferGatewayCallInfoHasBeenSet;

                    /**
                     * 默认nginx网关的调用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DefaultNginxGatewayCallInfo m_defaultNginxGatewayCallInfo;
                    bool m_defaultNginxGatewayCallInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICECALLINFORESPONSE_H_
