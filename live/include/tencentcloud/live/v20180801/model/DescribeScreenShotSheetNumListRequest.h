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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTSHEETNUMLISTREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTSHEETNUMLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeScreenShotSheetNumList请求参数结构体
                */
                class DescribeScreenShotSheetNumListRequest : public AbstractModel
                {
                public:
                    DescribeScreenShotSheetNumListRequest();
                    ~DescribeScreenShotSheetNumListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取utc起始时间，格式为yyyy-mm-ddTHH:MM:SSZ
                     * @return StartTime utc起始时间，格式为yyyy-mm-ddTHH:MM:SSZ
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置utc起始时间，格式为yyyy-mm-ddTHH:MM:SSZ
                     * @param StartTime utc起始时间，格式为yyyy-mm-ddTHH:MM:SSZ
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取utc结束时间，格式为yyyy-mm-ddTHH:MM:SSZ，支持查询最近1年数据。
                     * @return EndTime utc结束时间，格式为yyyy-mm-ddTHH:MM:SSZ，支持查询最近1年数据。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置utc结束时间，格式为yyyy-mm-ddTHH:MM:SSZ，支持查询最近1年数据。
                     * @param EndTime utc结束时间，格式为yyyy-mm-ddTHH:MM:SSZ，支持查询最近1年数据。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取地域信息，可选值包括Mainland，Oversea，前者是查询中国大陆范围内的数据，后者是除中国大陆范围之外的数据，若不传该参数，则查询所有地区的数据。
                     * @return Zone 地域信息，可选值包括Mainland，Oversea，前者是查询中国大陆范围内的数据，后者是除中国大陆范围之外的数据，若不传该参数，则查询所有地区的数据。
                     */
                    std::string GetZone() const;

                    /**
                     * 设置地域信息，可选值包括Mainland，Oversea，前者是查询中国大陆范围内的数据，后者是除中国大陆范围之外的数据，若不传该参数，则查询所有地区的数据。
                     * @param Zone 地域信息，可选值包括Mainland，Oversea，前者是查询中国大陆范围内的数据，后者是除中国大陆范围之外的数据，若不传该参数，则查询所有地区的数据。
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取推流域名（支持查询2019年11 月1日之后的域名维度数据）。
                     * @return PushDomains 推流域名（支持查询2019年11 月1日之后的域名维度数据）。
                     */
                    std::vector<std::string> GetPushDomains() const;

                    /**
                     * 设置推流域名（支持查询2019年11 月1日之后的域名维度数据）。
                     * @param PushDomains 推流域名（支持查询2019年11 月1日之后的域名维度数据）。
                     */
                    void SetPushDomains(const std::vector<std::string>& _pushDomains);

                    /**
                     * 判断参数 PushDomains 是否已赋值
                     * @return PushDomains 是否已赋值
                     */
                    bool PushDomainsHasBeenSet() const;

                    /**
                     * 获取数据维度，数据延迟1个半小时，可选值包括：1、Minute（5分钟粒度，最大支持查询时间范围是31天），2、Day（天粒度，默认值，按照北京时间做跨天处理，最大支持查询时间范围是186天当天）。
                     * @return Granularity 数据维度，数据延迟1个半小时，可选值包括：1、Minute（5分钟粒度，最大支持查询时间范围是31天），2、Day（天粒度，默认值，按照北京时间做跨天处理，最大支持查询时间范围是186天当天）。
                     */
                    std::string GetGranularity() const;

                    /**
                     * 设置数据维度，数据延迟1个半小时，可选值包括：1、Minute（5分钟粒度，最大支持查询时间范围是31天），2、Day（天粒度，默认值，按照北京时间做跨天处理，最大支持查询时间范围是186天当天）。
                     * @param Granularity 数据维度，数据延迟1个半小时，可选值包括：1、Minute（5分钟粒度，最大支持查询时间范围是31天），2、Day（天粒度，默认值，按照北京时间做跨天处理，最大支持查询时间范围是186天当天）。
                     */
                    void SetGranularity(const std::string& _granularity);

                    /**
                     * 判断参数 Granularity 是否已赋值
                     * @return Granularity 是否已赋值
                     */
                    bool GranularityHasBeenSet() const;

                private:

                    /**
                     * utc起始时间，格式为yyyy-mm-ddTHH:MM:SSZ
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * utc结束时间，格式为yyyy-mm-ddTHH:MM:SSZ，支持查询最近1年数据。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 地域信息，可选值包括Mainland，Oversea，前者是查询中国大陆范围内的数据，后者是除中国大陆范围之外的数据，若不传该参数，则查询所有地区的数据。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 推流域名（支持查询2019年11 月1日之后的域名维度数据）。
                     */
                    std::vector<std::string> m_pushDomains;
                    bool m_pushDomainsHasBeenSet;

                    /**
                     * 数据维度，数据延迟1个半小时，可选值包括：1、Minute（5分钟粒度，最大支持查询时间范围是31天），2、Day（天粒度，默认值，按照北京时间做跨天处理，最大支持查询时间范围是186天当天）。
                     */
                    std::string m_granularity;
                    bool m_granularityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBESCREENSHOTSHEETNUMLISTREQUEST_H_
