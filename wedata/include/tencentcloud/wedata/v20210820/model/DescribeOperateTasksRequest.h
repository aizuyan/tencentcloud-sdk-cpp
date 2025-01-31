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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATETASKSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATETASKSREQUEST_H_

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
                * DescribeOperateTasks请求参数结构体
                */
                class DescribeOperateTasksRequest : public AbstractModel
                {
                public:
                    DescribeOperateTasksRequest();
                    ~DescribeOperateTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目id
                     * @return ProjectId 项目id
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param ProjectId 项目id
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取文件夹id，多个文件夹以逗号分隔
                     * @return FolderIdList 文件夹id，多个文件夹以逗号分隔
                     */
                    std::string GetFolderIdList() const;

                    /**
                     * 设置文件夹id，多个文件夹以逗号分隔
                     * @param FolderIdList 文件夹id，多个文件夹以逗号分隔
                     */
                    void SetFolderIdList(const std::string& _folderIdList);

                    /**
                     * 判断参数 FolderIdList 是否已赋值
                     * @return FolderIdList 是否已赋值
                     */
                    bool FolderIdListHasBeenSet() const;

                    /**
                     * 获取工作流id，多个工作流id之间以英文字符逗号分隔
                     * @return WorkFlowIdList 工作流id，多个工作流id之间以英文字符逗号分隔
                     */
                    std::string GetWorkFlowIdList() const;

                    /**
                     * 设置工作流id，多个工作流id之间以英文字符逗号分隔
                     * @param WorkFlowIdList 工作流id，多个工作流id之间以英文字符逗号分隔
                     */
                    void SetWorkFlowIdList(const std::string& _workFlowIdList);

                    /**
                     * 判断参数 WorkFlowIdList 是否已赋值
                     * @return WorkFlowIdList 是否已赋值
                     */
                    bool WorkFlowIdListHasBeenSet() const;

                    /**
                     * 获取工作流名称，多个工作流名称之间以英文字符逗号分隔
                     * @return WorkFlowNameList 工作流名称，多个工作流名称之间以英文字符逗号分隔
                     */
                    std::string GetWorkFlowNameList() const;

                    /**
                     * 设置工作流名称，多个工作流名称之间以英文字符逗号分隔
                     * @param WorkFlowNameList 工作流名称，多个工作流名称之间以英文字符逗号分隔
                     */
                    void SetWorkFlowNameList(const std::string& _workFlowNameList);

                    /**
                     * 判断参数 WorkFlowNameList 是否已赋值
                     * @return WorkFlowNameList 是否已赋值
                     */
                    bool WorkFlowNameListHasBeenSet() const;

                    /**
                     * 获取任务名称，多个任务名称之间以英文字符逗号分隔
                     * @return TaskNameList 任务名称，多个任务名称之间以英文字符逗号分隔
                     */
                    std::string GetTaskNameList() const;

                    /**
                     * 设置任务名称，多个任务名称之间以英文字符逗号分隔
                     * @param TaskNameList 任务名称，多个任务名称之间以英文字符逗号分隔
                     */
                    void SetTaskNameList(const std::string& _taskNameList);

                    /**
                     * 判断参数 TaskNameList 是否已赋值
                     * @return TaskNameList 是否已赋值
                     */
                    bool TaskNameListHasBeenSet() const;

                    /**
                     * 获取任务id，多个任务id之间以英文字符逗号分隔
                     * @return TaskIdList 任务id，多个任务id之间以英文字符逗号分隔
                     */
                    std::string GetTaskIdList() const;

                    /**
                     * 设置任务id，多个任务id之间以英文字符逗号分隔
                     * @param TaskIdList 任务id，多个任务id之间以英文字符逗号分隔
                     */
                    void SetTaskIdList(const std::string& _taskIdList);

                    /**
                     * 判断参数 TaskIdList 是否已赋值
                     * @return TaskIdList 是否已赋值
                     */
                    bool TaskIdListHasBeenSet() const;

                    /**
                     * 获取页号
                     * @return PageNumber 页号
                     */
                    std::string GetPageNumber() const;

                    /**
                     * 设置页号
                     * @param PageNumber 页号
                     */
                    void SetPageNumber(const std::string& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取分页大小
                     * @return PageSize 分页大小
                     */
                    std::string GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param PageSize 分页大小
                     */
                    void SetPageSize(const std::string& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取排序字段，支持字段为FirstSubmitTime和FirstRunTime，标识最近提交和首次执行事件
                     * @return SortItem 排序字段，支持字段为FirstSubmitTime和FirstRunTime，标识最近提交和首次执行事件
                     */
                    std::string GetSortItem() const;

                    /**
                     * 设置排序字段，支持字段为FirstSubmitTime和FirstRunTime，标识最近提交和首次执行事件
                     * @param SortItem 排序字段，支持字段为FirstSubmitTime和FirstRunTime，标识最近提交和首次执行事件
                     */
                    void SetSortItem(const std::string& _sortItem);

                    /**
                     * 判断参数 SortItem 是否已赋值
                     * @return SortItem 是否已赋值
                     */
                    bool SortItemHasBeenSet() const;

                    /**
                     * 获取排序类型。两种取值 DESC、ASC
                     * @return SortType 排序类型。两种取值 DESC、ASC
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置排序类型。两种取值 DESC、ASC
                     * @param SortType 排序类型。两种取值 DESC、ASC
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取责任人，多个责任人之间以英文字符逗号分隔
                     * @return InChargeList 责任人，多个责任人之间以英文字符逗号分隔
                     */
                    std::string GetInChargeList() const;

                    /**
                     * 设置责任人，多个责任人之间以英文字符逗号分隔
                     * @param InChargeList 责任人，多个责任人之间以英文字符逗号分隔
                     */
                    void SetInChargeList(const std::string& _inChargeList);

                    /**
                     * 判断参数 InChargeList 是否已赋值
                     * @return InChargeList 是否已赋值
                     */
                    bool InChargeListHasBeenSet() const;

                    /**
                     * 获取任务类型Id字符串，多个任务类型id之间以英文字符逗号分隔
                     * @return TaskTypeIdList 任务类型Id字符串，多个任务类型id之间以英文字符逗号分隔
                     */
                    std::string GetTaskTypeIdList() const;

                    /**
                     * 设置任务类型Id字符串，多个任务类型id之间以英文字符逗号分隔
                     * @param TaskTypeIdList 任务类型Id字符串，多个任务类型id之间以英文字符逗号分隔
                     */
                    void SetTaskTypeIdList(const std::string& _taskTypeIdList);

                    /**
                     * 判断参数 TaskTypeIdList 是否已赋值
                     * @return TaskTypeIdList 是否已赋值
                     */
                    bool TaskTypeIdListHasBeenSet() const;

                    /**
                     * 获取任务状态字符串，多个任务状态之间以英文字符逗号分隔
                     * @return StatusList 任务状态字符串，多个任务状态之间以英文字符逗号分隔
                     */
                    std::string GetStatusList() const;

                    /**
                     * 设置任务状态字符串，多个任务状态之间以英文字符逗号分隔
                     * @param StatusList 任务状态字符串，多个任务状态之间以英文字符逗号分隔
                     */
                    void SetStatusList(const std::string& _statusList);

                    /**
                     * 判断参数 StatusList 是否已赋值
                     * @return StatusList 是否已赋值
                     */
                    bool StatusListHasBeenSet() const;

                    /**
                     * 获取任务周期类型字符串，多个任务周期之间以英文字符逗号分隔
                     * @return TaskCycleUnitList 任务周期类型字符串，多个任务周期之间以英文字符逗号分隔
                     */
                    std::string GetTaskCycleUnitList() const;

                    /**
                     * 设置任务周期类型字符串，多个任务周期之间以英文字符逗号分隔
                     * @param TaskCycleUnitList 任务周期类型字符串，多个任务周期之间以英文字符逗号分隔
                     */
                    void SetTaskCycleUnitList(const std::string& _taskCycleUnitList);

                    /**
                     * 判断参数 TaskCycleUnitList 是否已赋值
                     * @return TaskCycleUnitList 是否已赋值
                     */
                    bool TaskCycleUnitListHasBeenSet() const;

                    /**
                     * 获取任务所属产品类型
                     * @return ProductNameList 任务所属产品类型
                     */
                    std::string GetProductNameList() const;

                    /**
                     * 设置任务所属产品类型
                     * @param ProductNameList 任务所属产品类型
                     */
                    void SetProductNameList(const std::string& _productNameList);

                    /**
                     * 判断参数 ProductNameList 是否已赋值
                     * @return ProductNameList 是否已赋值
                     */
                    bool ProductNameListHasBeenSet() const;

                private:

                    /**
                     * 项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 文件夹id，多个文件夹以逗号分隔
                     */
                    std::string m_folderIdList;
                    bool m_folderIdListHasBeenSet;

                    /**
                     * 工作流id，多个工作流id之间以英文字符逗号分隔
                     */
                    std::string m_workFlowIdList;
                    bool m_workFlowIdListHasBeenSet;

                    /**
                     * 工作流名称，多个工作流名称之间以英文字符逗号分隔
                     */
                    std::string m_workFlowNameList;
                    bool m_workFlowNameListHasBeenSet;

                    /**
                     * 任务名称，多个任务名称之间以英文字符逗号分隔
                     */
                    std::string m_taskNameList;
                    bool m_taskNameListHasBeenSet;

                    /**
                     * 任务id，多个任务id之间以英文字符逗号分隔
                     */
                    std::string m_taskIdList;
                    bool m_taskIdListHasBeenSet;

                    /**
                     * 页号
                     */
                    std::string m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    std::string m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 排序字段，支持字段为FirstSubmitTime和FirstRunTime，标识最近提交和首次执行事件
                     */
                    std::string m_sortItem;
                    bool m_sortItemHasBeenSet;

                    /**
                     * 排序类型。两种取值 DESC、ASC
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * 责任人，多个责任人之间以英文字符逗号分隔
                     */
                    std::string m_inChargeList;
                    bool m_inChargeListHasBeenSet;

                    /**
                     * 任务类型Id字符串，多个任务类型id之间以英文字符逗号分隔
                     */
                    std::string m_taskTypeIdList;
                    bool m_taskTypeIdListHasBeenSet;

                    /**
                     * 任务状态字符串，多个任务状态之间以英文字符逗号分隔
                     */
                    std::string m_statusList;
                    bool m_statusListHasBeenSet;

                    /**
                     * 任务周期类型字符串，多个任务周期之间以英文字符逗号分隔
                     */
                    std::string m_taskCycleUnitList;
                    bool m_taskCycleUnitListHasBeenSet;

                    /**
                     * 任务所属产品类型
                     */
                    std::string m_productNameList;
                    bool m_productNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEOPERATETASKSREQUEST_H_
