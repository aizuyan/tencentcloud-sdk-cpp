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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEEXECRESULTSBYPAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEEXECRESULTSBYPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeRuleExecResultsByPage请求参数结构体
                */
                class DescribeRuleExecResultsByPageRequest : public AbstractModel
                {
                public:
                    DescribeRuleExecResultsByPageRequest();
                    ~DescribeRuleExecResultsByPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行规则组ID
                     * @return RuleGroupExecId 执行规则组ID
                     */
                    int64_t GetRuleGroupExecId() const;

                    /**
                     * 设置执行规则组ID
                     * @param RuleGroupExecId 执行规则组ID
                     */
                    void SetRuleGroupExecId(const int64_t& _ruleGroupExecId);

                    /**
                     * 判断参数 RuleGroupExecId 是否已赋值
                     * @return RuleGroupExecId 是否已赋值
                     */
                    bool RuleGroupExecIdHasBeenSet() const;

                    /**
                     * 获取page number
                     * @return PageNumber page number
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置page number
                     * @param PageNumber page number
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取page size
                     * @return PageSize page size
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置page size
                     * @param PageSize page size
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 执行规则组ID
                     */
                    int64_t m_ruleGroupExecId;
                    bool m_ruleGroupExecIdHasBeenSet;

                    /**
                     * page number
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * page size
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBERULEEXECRESULTSBYPAGEREQUEST_H_
