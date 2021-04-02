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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZHTTPSTATUSREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZHTTPSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/ProtocolPort.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBizHttpStatus请求参数结构体
                */
                class DescribeBizHttpStatusRequest : public AbstractModel
                {
                public:
                    DescribeBizHttpStatusRequest();
                    ~DescribeBizHttpStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP）
                     * @return Business 大禹子产品代号（bgpip表示高防IP）
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP）
                     * @param Business 大禹子产品代号（bgpip表示高防IP）
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取资源Id
                     * @return Id 资源Id
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源Id
                     * @param Id 资源Id
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取统计周期，可取值300，1800，3600， 21600，86400，单位秒
                     * @return Period 统计周期，可取值300，1800，3600， 21600，86400，单位秒
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置统计周期，可取值300，1800，3600， 21600，86400，单位秒
                     * @param Period 统计周期，可取值300，1800，3600， 21600，86400，单位秒
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取统计开始时间
                     * @return StartTime 统计开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置统计开始时间
                     * @param StartTime 统计开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取统计结束时间
                     * @return EndTime 统计结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置统计结束时间
                     * @param EndTime 统计结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取统计方式，仅支持sum
                     * @return Statistics 统计方式，仅支持sum
                     */
                    std::string GetStatistics() const;

                    /**
                     * 设置统计方式，仅支持sum
                     * @param Statistics 统计方式，仅支持sum
                     */
                    void SetStatistics(const std::string& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取协议及端口列表，协议可取值TCP, UDP, HTTP, HTTPS，仅统计纬度为连接数时有效
                     * @return ProtoInfo 协议及端口列表，协议可取值TCP, UDP, HTTP, HTTPS，仅统计纬度为连接数时有效
                     */
                    std::vector<ProtocolPort> GetProtoInfo() const;

                    /**
                     * 设置协议及端口列表，协议可取值TCP, UDP, HTTP, HTTPS，仅统计纬度为连接数时有效
                     * @param ProtoInfo 协议及端口列表，协议可取值TCP, UDP, HTTP, HTTPS，仅统计纬度为连接数时有效
                     */
                    void SetProtoInfo(const std::vector<ProtocolPort>& _protoInfo);

                    /**
                     * 判断参数 ProtoInfo 是否已赋值
                     * @return ProtoInfo 是否已赋值
                     */
                    bool ProtoInfoHasBeenSet() const;

                    /**
                     * 获取特定域名查询
                     * @return Domain 特定域名查询
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置特定域名查询
                     * @param Domain 特定域名查询
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 资源Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 统计周期，可取值300，1800，3600， 21600，86400，单位秒
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * 统计开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 统计方式，仅支持sum
                     */
                    std::string m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * 协议及端口列表，协议可取值TCP, UDP, HTTP, HTTPS，仅统计纬度为连接数时有效
                     */
                    std::vector<ProtocolPort> m_protoInfo;
                    bool m_protoInfoHasBeenSet;

                    /**
                     * 特定域名查询
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZHTTPSTATUSREQUEST_H_
