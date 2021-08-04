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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENDUSERSTATISTICRESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENDUSERSTATISTICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/PlatformStatistic.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeEndUserStatistic返回参数结构体
                */
                class DescribeEndUserStatisticResponse : public AbstractModel
                {
                public:
                    DescribeEndUserStatisticResponse();
                    ~DescribeEndUserStatisticResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取终端用户各平台统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlatformStatistics 终端用户各平台统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PlatformStatistic> GetPlatformStatistics() const;

                    /**
                     * 判断参数 PlatformStatistics 是否已赋值
                     * @return PlatformStatistics 是否已赋值
                     */
                    bool PlatformStatisticsHasBeenSet() const;

                    /**
                     * 获取终端用户总数
                     * @return TotalCount 终端用户总数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 终端用户各平台统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PlatformStatistic> m_platformStatistics;
                    bool m_platformStatisticsHasBeenSet;

                    /**
                     * 终端用户总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEENDUSERSTATISTICRESPONSE_H_
