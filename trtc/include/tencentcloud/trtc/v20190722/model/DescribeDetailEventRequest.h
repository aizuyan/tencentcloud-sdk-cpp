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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEDETAILEVENTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEDETAILEVENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeDetailEvent请求参数结构体
                */
                class DescribeDetailEventRequest : public AbstractModel
                {
                public:
                    DescribeDetailEventRequest();
                    ~DescribeDetailEventRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通话 ID（唯一标识一次通话）： SdkAppId_RoomId（房间号）_ CreateTime（房间创建时间，unix时间戳，单位为s）例：1400xxxxxx_218695_1590065777。通过 DescribeRoomInfo（查询历史房间列表）接口获取（[查询历史房间列表](https://cloud.tencent.com/document/product/647/44050)）。
                     * @return CommId 通话 ID（唯一标识一次通话）： SdkAppId_RoomId（房间号）_ CreateTime（房间创建时间，unix时间戳，单位为s）例：1400xxxxxx_218695_1590065777。通过 DescribeRoomInfo（查询历史房间列表）接口获取（[查询历史房间列表](https://cloud.tencent.com/document/product/647/44050)）。
                     */
                    std::string GetCommId() const;

                    /**
                     * 设置通话 ID（唯一标识一次通话）： SdkAppId_RoomId（房间号）_ CreateTime（房间创建时间，unix时间戳，单位为s）例：1400xxxxxx_218695_1590065777。通过 DescribeRoomInfo（查询历史房间列表）接口获取（[查询历史房间列表](https://cloud.tencent.com/document/product/647/44050)）。
                     * @param CommId 通话 ID（唯一标识一次通话）： SdkAppId_RoomId（房间号）_ CreateTime（房间创建时间，unix时间戳，单位为s）例：1400xxxxxx_218695_1590065777。通过 DescribeRoomInfo（查询历史房间列表）接口获取（[查询历史房间列表](https://cloud.tencent.com/document/product/647/44050)）。
                     */
                    void SetCommId(const std::string& _commId);

                    /**
                     * 判断参数 CommId 是否已赋值
                     * @return CommId 是否已赋值
                     */
                    bool CommIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间，本地unix时间戳，单位为秒（如：1590065777）
注意：支持查询14天内的数据
                     * @return StartTime 查询开始时间，本地unix时间戳，单位为秒（如：1590065777）
注意：支持查询14天内的数据
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置查询开始时间，本地unix时间戳，单位为秒（如：1590065777）
注意：支持查询14天内的数据
                     * @param StartTime 查询开始时间，本地unix时间戳，单位为秒（如：1590065777）
注意：支持查询14天内的数据
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间，本地unix时间戳，单位为秒（如：1590065877）
注意：查询时间大于房间结束时间，以房间结束时间为准。
                     * @return EndTime 查询结束时间，本地unix时间戳，单位为秒（如：1590065877）
注意：查询时间大于房间结束时间，以房间结束时间为准。
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置查询结束时间，本地unix时间戳，单位为秒（如：1590065877）
注意：查询时间大于房间结束时间，以房间结束时间为准。
                     * @param EndTime 查询结束时间，本地unix时间戳，单位为秒（如：1590065877）
注意：查询时间大于房间结束时间，以房间结束时间为准。
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取用户UserId
                     * @return UserId 用户UserId
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户UserId
                     * @param UserId 用户UserId
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取房间号（如：223）
                     * @return RoomId 房间号（如：223）
                     */
                    std::string GetRoomId() const;

                    /**
                     * 设置房间号（如：223）
                     * @param RoomId 房间号（如：223）
                     */
                    void SetRoomId(const std::string& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                private:

                    /**
                     * 通话 ID（唯一标识一次通话）： SdkAppId_RoomId（房间号）_ CreateTime（房间创建时间，unix时间戳，单位为s）例：1400xxxxxx_218695_1590065777。通过 DescribeRoomInfo（查询历史房间列表）接口获取（[查询历史房间列表](https://cloud.tencent.com/document/product/647/44050)）。
                     */
                    std::string m_commId;
                    bool m_commIdHasBeenSet;

                    /**
                     * 查询开始时间，本地unix时间戳，单位为秒（如：1590065777）
注意：支持查询14天内的数据
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，本地unix时间戳，单位为秒（如：1590065877）
注意：查询时间大于房间结束时间，以房间结束时间为准。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 用户UserId
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 房间号（如：223）
                     */
                    std::string m_roomId;
                    bool m_roomIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEDETAILEVENTREQUEST_H_
