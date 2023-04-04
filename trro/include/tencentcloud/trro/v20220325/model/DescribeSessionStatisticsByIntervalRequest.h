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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSBYINTERVALREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSBYINTERVALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeSessionStatisticsByInterval请求参数结构体
                */
                class DescribeSessionStatisticsByIntervalRequest : public AbstractModel
                {
                public:
                    DescribeSessionStatisticsByIntervalRequest();
                    ~DescribeSessionStatisticsByIntervalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取统计时间间隔：hour|day|month
                     * @return StatisticInterval 统计时间间隔：hour|day|month
                     */
                    std::string GetStatisticInterval() const;

                    /**
                     * 设置统计时间间隔：hour|day|month
                     * @param StatisticInterval 统计时间间隔：hour|day|month
                     */
                    void SetStatisticInterval(const std::string& _statisticInterval);

                    /**
                     * 判断参数 StatisticInterval 是否已赋值
                     * @return StatisticInterval 是否已赋值
                     */
                    bool StatisticIntervalHasBeenSet() const;

                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param DeviceId 设备ID
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取起始时间，单位：秒
                     * @return StartTime 起始时间，单位：秒
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置起始时间，单位：秒
                     * @param StartTime 起始时间，单位：秒
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间，单位：秒
                     * @return EndTime 结束时间，单位：秒
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间，单位：秒
                     * @param EndTime 结束时间，单位：秒
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 统计时间间隔：hour|day|month
                     */
                    std::string m_statisticInterval;
                    bool m_statisticIntervalHasBeenSet;

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 起始时间，单位：秒
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，单位：秒
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBESESSIONSTATISTICSBYINTERVALREQUEST_H_
