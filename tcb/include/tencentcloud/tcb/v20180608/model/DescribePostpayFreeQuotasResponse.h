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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPOSTPAYFREEQUOTASRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPOSTPAYFREEQUOTASRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/FreequotaInfo.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribePostpayFreeQuotas返回参数结构体
                */
                class DescribePostpayFreeQuotasResponse : public AbstractModel
                {
                public:
                    DescribePostpayFreeQuotasResponse();
                    ~DescribePostpayFreeQuotasResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取免费量资源信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FreequotaInfoList 免费量资源信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FreequotaInfo> GetFreequotaInfoList() const;

                    /**
                     * 判断参数 FreequotaInfoList 是否已赋值
                     * @return FreequotaInfoList 是否已赋值
                     */
                    bool FreequotaInfoListHasBeenSet() const;

                private:

                    /**
                     * 免费量资源信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FreequotaInfo> m_freequotaInfoList;
                    bool m_freequotaInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEPOSTPAYFREEQUOTASRESPONSE_H_
