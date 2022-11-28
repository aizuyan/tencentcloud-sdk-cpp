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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECKSQLAPISRESPONSE_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECKSQLAPISRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeCkSqlApis返回参数结构体
                */
                class DescribeCkSqlApisResponse : public AbstractModel
                {
                public:
                    DescribeCkSqlApisResponse();
                    ~DescribeCkSqlApisResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的查询数据，大部分情况是list，也可能是bool
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnData 返回的查询数据，大部分情况是list，也可能是bool
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReturnData() const;

                    /**
                     * 判断参数 ReturnData 是否已赋值
                     * @return ReturnData 是否已赋值
                     */
                    bool ReturnDataHasBeenSet() const;

                private:

                    /**
                     * 返回的查询数据，大部分情况是list，也可能是bool
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_returnData;
                    bool m_returnDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBECKSQLAPISRESPONSE_H_
