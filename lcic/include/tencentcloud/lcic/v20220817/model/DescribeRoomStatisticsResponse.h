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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/MemberRecord.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeRoomStatistics返回参数结构体
                */
                class DescribeRoomStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeRoomStatisticsResponse();
                    ~DescribeRoomStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取峰值在线成员人数。
                     * @return PeakMemberNumber 峰值在线成员人数。
                     */
                    uint64_t GetPeakMemberNumber() const;

                    /**
                     * 判断参数 PeakMemberNumber 是否已赋值
                     * @return PeakMemberNumber 是否已赋值
                     */
                    bool PeakMemberNumberHasBeenSet() const;

                    /**
                     * 获取累计在线人数。
                     * @return MemberNumber 累计在线人数。
                     */
                    uint64_t GetMemberNumber() const;

                    /**
                     * 判断参数 MemberNumber 是否已赋值
                     * @return MemberNumber 是否已赋值
                     */
                    bool MemberNumberHasBeenSet() const;

                    /**
                     * 获取记录总数。包含进入房间或者应到未到的。
                     * @return Total 记录总数。包含进入房间或者应到未到的。
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取成员记录列表。
                     * @return MemberRecords 成员记录列表。
                     */
                    std::vector<MemberRecord> GetMemberRecords() const;

                    /**
                     * 判断参数 MemberRecords 是否已赋值
                     * @return MemberRecords 是否已赋值
                     */
                    bool MemberRecordsHasBeenSet() const;

                private:

                    /**
                     * 峰值在线成员人数。
                     */
                    uint64_t m_peakMemberNumber;
                    bool m_peakMemberNumberHasBeenSet;

                    /**
                     * 累计在线人数。
                     */
                    uint64_t m_memberNumber;
                    bool m_memberNumberHasBeenSet;

                    /**
                     * 记录总数。包含进入房间或者应到未到的。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 成员记录列表。
                     */
                    std::vector<MemberRecord> m_memberRecords;
                    bool m_memberRecordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEROOMSTATISTICSRESPONSE_H_
