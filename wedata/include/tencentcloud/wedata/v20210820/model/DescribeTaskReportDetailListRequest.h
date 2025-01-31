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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKREPORTDETAILLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKREPORTDETAILLISTREQUEST_H_

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
                * DescribeTaskReportDetailList请求参数结构体
                */
                class DescribeTaskReportDetailListRequest : public AbstractModel
                {
                public:
                    DescribeTaskReportDetailListRequest();
                    ~DescribeTaskReportDetailListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取WeData项目id
                     * @return ProjectId WeData项目id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置WeData项目id
                     * @param ProjectId WeData项目id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param TaskId 任务Id
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取统计周期的开始日期，格式为 yyyy-MM-dd
                     * @return BeginDate 统计周期的开始日期，格式为 yyyy-MM-dd
                     */
                    std::string GetBeginDate() const;

                    /**
                     * 设置统计周期的开始日期，格式为 yyyy-MM-dd
                     * @param BeginDate 统计周期的开始日期，格式为 yyyy-MM-dd
                     */
                    void SetBeginDate(const std::string& _beginDate);

                    /**
                     * 判断参数 BeginDate 是否已赋值
                     * @return BeginDate 是否已赋值
                     */
                    bool BeginDateHasBeenSet() const;

                    /**
                     * 获取统计周期的结束日期，格式为 yyyy-MM-dd
                     * @return EndDate 统计周期的结束日期，格式为 yyyy-MM-dd
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置统计周期的结束日期，格式为 yyyy-MM-dd
                     * @param EndDate 统计周期的结束日期，格式为 yyyy-MM-dd
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取任务状态，多个状态用逗号连接
                     * @return StateList 任务状态，多个状态用逗号连接
                     */
                    std::string GetStateList() const;

                    /**
                     * 设置任务状态，多个状态用逗号连接
                     * @param StateList 任务状态，多个状态用逗号连接
                     */
                    void SetStateList(const std::string& _stateList);

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     */
                    bool StateListHasBeenSet() const;

                    /**
                     * 获取排序字段名
                     * @return SortItem 排序字段名
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置排序字段名
                     * @param SortItem 排序字段名
                     */
                    void SetSortItem(const std::string& _sortItem);

                    /**
                     * 判断参数 SortItem 是否已赋值
                     * @return SortItem 是否已赋值
                     */
                    bool SortItemHasBeenSet() const;

                    /**
                     * 获取升序或降序，传ASC或DESC
                     * @return SortType 升序或降序，传ASC或DESC
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置升序或降序，传ASC或DESC
                     * @param SortType 升序或降序，传ASC或DESC
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取页数，从1开始
                     * @return PageIndex 页数，从1开始
                     */
                    uint64_t GetPageIndex() const;

                    /**
                     * 设置页数，从1开始
                     * @param PageIndex 页数，从1开始
                     */
                    void SetPageIndex(const uint64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取每页的记录条数，默认10条
                     * @return PageSize 每页的记录条数，默认10条
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页的记录条数，默认10条
                     * @param PageSize 每页的记录条数，默认10条
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * WeData项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 统计周期的开始日期，格式为 yyyy-MM-dd
                     */
                    std::string m_beginDate;
                    bool m_beginDateHasBeenSet;

                    /**
                     * 统计周期的结束日期，格式为 yyyy-MM-dd
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 任务状态，多个状态用逗号连接
                     */
                    std::string m_stateList;
                    bool m_stateListHasBeenSet;

                    /**
                     * 排序字段名
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * 升序或降序，传ASC或DESC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 页数，从1开始
                     */
                    uint64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 每页的记录条数，默认10条
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETASKREPORTDETAILLISTREQUEST_H_
