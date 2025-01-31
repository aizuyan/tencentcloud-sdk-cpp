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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKIGNORELISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKIGNORELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/BlockIgnoreRule.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeBlockIgnoreList返回参数结构体
                */
                class DescribeBlockIgnoreListResponse : public AbstractModel
                {
                public:
                    DescribeBlockIgnoreListResponse();
                    ~DescribeBlockIgnoreListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取列表数据
                     * @return Data 列表数据
                     */
                    std::vector<BlockIgnoreRule> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取查询结果总数，用于分页
                     * @return Total 查询结果总数，用于分页
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取状态值，0：查询成功，非0：查询失败
                     * @return ReturnCode 状态值，0：查询成功，非0：查询失败
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取状态信息，success：查询成功，fail：查询失败
                     * @return ReturnMsg 状态信息，success：查询成功，fail：查询失败
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     */
                    bool ReturnMsgHasBeenSet() const;

                private:

                    /**
                     * 列表数据
                     */
                    std::vector<BlockIgnoreRule> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 查询结果总数，用于分页
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 状态值，0：查询成功，非0：查询失败
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 状态信息，success：查询成功，fail：查询失败
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKIGNORELISTRESPONSE_H_
