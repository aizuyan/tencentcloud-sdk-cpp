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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSAUTOISOLATESAMPLELISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSAUTOISOLATESAMPLELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RunTimeFilters.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVirusAutoIsolateSampleList请求参数结构体
                */
                class DescribeVirusAutoIsolateSampleListRequest : public AbstractModel
                {
                public:
                    DescribeVirusAutoIsolateSampleListRequest();
                    ~DescribeVirusAutoIsolateSampleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要返回的数量，默认为10，最大值为100
                     * @return Limit 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置需要返回的数量，默认为10，最大值为100
                     * @param Limit 需要返回的数量，默认为10，最大值为100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param Offset 偏移量，默认为0。
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>MD5- String - 是否必填：否 - md5 /li>
<li>AutoIsolateSwitch- String - 是否必填：否 - 自动隔离开关 /li>
<li>VirusName- String - 是否必填：否 - 病毒名 /li>
                     * @return Filters 过滤条件。
<li>MD5- String - 是否必填：否 - md5 /li>
<li>AutoIsolateSwitch- String - 是否必填：否 - 自动隔离开关 /li>
<li>VirusName- String - 是否必填：否 - 病毒名 /li>
                     */
                    std::vector<RunTimeFilters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>MD5- String - 是否必填：否 - md5 /li>
<li>AutoIsolateSwitch- String - 是否必填：否 - 自动隔离开关 /li>
<li>VirusName- String - 是否必填：否 - 病毒名 /li>
                     * @param Filters 过滤条件。
<li>MD5- String - 是否必填：否 - md5 /li>
<li>AutoIsolateSwitch- String - 是否必填：否 - 自动隔离开关 /li>
<li>VirusName- String - 是否必填：否 - 病毒名 /li>
                     */
                    void SetFilters(const std::vector<RunTimeFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return By 排序字段
                     */
                    std::string GetBy() const;

                    /**
                     * 设置排序字段
                     * @param By 排序字段
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     */
                    bool ByHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return Order 排序方式
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式
                     * @param Order 排序方式
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * 需要返回的数量，默认为10，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 过滤条件。
<li>MD5- String - 是否必填：否 - md5 /li>
<li>AutoIsolateSwitch- String - 是否必填：否 - 自动隔离开关 /li>
<li>VirusName- String - 是否必填：否 - 病毒名 /li>
                     */
                    std::vector<RunTimeFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSAUTOISOLATESAMPLELISTREQUEST_H_
