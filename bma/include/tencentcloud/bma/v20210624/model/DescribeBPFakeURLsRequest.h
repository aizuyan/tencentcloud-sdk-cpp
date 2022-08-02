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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPFAKEURLSREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPFAKEURLSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bma/v20210624/model/Filter.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * DescribeBPFakeURLs请求参数结构体
                */
                class DescribeBPFakeURLsRequest : public AbstractModel
                {
                public:
                    DescribeBPFakeURLsRequest();
                    ~DescribeBPFakeURLsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取xxx
                     * @return Filters xxx
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置xxx
                     * @param Filters xxx
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return PageSize xxx
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置xxx
                     * @param PageSize xxx
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return PageNumber xxx
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置xxx
                     * @param PageNumber xxx
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * xxx
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * xxx
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * xxx
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_DESCRIBEBPFAKEURLSREQUEST_H_
