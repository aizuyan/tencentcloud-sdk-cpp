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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_UPGRADEINSTANCERESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_UPGRADEINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * UpgradeInstance返回参数结构体
                */
                class UpgradeInstanceResponse : public AbstractModel
                {
                public:
                    UpgradeInstanceResponse();
                    ~UpgradeInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取交易ID。
                     * @return DealId 交易ID。
                     */
                    std::string GetDealId() const;

                    /**
                     * 判断参数 DealId 是否已赋值
                     * @return DealId 是否已赋值
                     */
                    bool DealIdHasBeenSet() const;

                private:

                    /**
                     * 交易ID。
                     */
                    std::string m_dealId;
                    bool m_dealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_UPGRADEINSTANCERESPONSE_H_
