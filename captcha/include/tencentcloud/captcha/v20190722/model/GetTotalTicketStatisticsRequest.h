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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_GETTOTALTICKETSTATISTICSREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_GETTOTALTICKETSTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * GetTotalTicketStatistics请求参数结构体
                */
                class GetTotalTicketStatisticsRequest : public AbstractModel
                {
                public:
                    GetTotalTicketStatisticsRequest();
                    ~GetTotalTicketStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间
                     * @return StartTimeStr 开始时间
                     */
                    std::string GetStartTimeStr() const;

                    /**
                     * 设置开始时间
                     * @param StartTimeStr 开始时间
                     */
                    void SetStartTimeStr(const std::string& _startTimeStr);

                    /**
                     * 判断参数 StartTimeStr 是否已赋值
                     * @return StartTimeStr 是否已赋值
                     */
                    bool StartTimeStrHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTimeStr 结束时间
                     */
                    std::string GetEndTimeStr() const;

                    /**
                     * 设置结束时间
                     * @param EndTimeStr 结束时间
                     */
                    void SetEndTimeStr(const std::string& _endTimeStr);

                    /**
                     * 判断参数 EndTimeStr 是否已赋值
                     * @return EndTimeStr 是否已赋值
                     */
                    bool EndTimeStrHasBeenSet() const;

                    /**
                     * 获取查询粒度
分钟：“1”
小时：“2”
天：“3”
                     * @return Dimension 查询粒度
分钟：“1”
小时：“2”
天：“3”
                     */
                    std::string GetDimension() const;

                    /**
                     * 设置查询粒度
分钟：“1”
小时：“2”
天：“3”
                     * @param Dimension 查询粒度
分钟：“1”
小时：“2”
天：“3”
                     */
                    void SetDimension(const std::string& _dimension);

                    /**
                     * 判断参数 Dimension 是否已赋值
                     * @return Dimension 是否已赋值
                     */
                    bool DimensionHasBeenSet() const;

                private:

                    /**
                     * 开始时间
                     */
                    std::string m_startTimeStr;
                    bool m_startTimeStrHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTimeStr;
                    bool m_endTimeStrHasBeenSet;

                    /**
                     * 查询粒度
分钟：“1”
小时：“2”
天：“3”
                     */
                    std::string m_dimension;
                    bool m_dimensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_GETTOTALTICKETSTATISTICSREQUEST_H_
