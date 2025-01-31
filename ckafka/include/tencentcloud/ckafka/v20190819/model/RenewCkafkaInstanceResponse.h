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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_RENEWCKAFKAINSTANCERESPONSE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_RENEWCKAFKAINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * RenewCkafkaInstance接口出参bigDealIds
                */
                class RenewCkafkaInstanceResponse : public AbstractModel
                {
                public:
                    RenewCkafkaInstanceResponse();
                    ~RenewCkafkaInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BigDealId 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     */
                    bool BigDealIdHasBeenSet() const;

                    /**
                     * 获取子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DealName 子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDealName() const;

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     */
                    bool DealNameHasBeenSet() const;

                private:

                    /**
                     * 订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                    /**
                     * 子订单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_RENEWCKAFKAINSTANCERESPONSE_H_
