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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeNotebookSessions请求参数结构体
                */
                class DescribeNotebookSessionsRequest : public AbstractModel
                {
                public:
                    DescribeNotebookSessionsRequest();
                    ~DescribeNotebookSessionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DLC Spark作业引擎名称
                     * @return DataEngineName DLC Spark作业引擎名称
                     */
                    std::string GetDataEngineName() const;

                    /**
                     * 设置DLC Spark作业引擎名称
                     * @param DataEngineName DLC Spark作业引擎名称
                     */
                    void SetDataEngineName(const std::string& _dataEngineName);

                    /**
                     * 判断参数 DataEngineName 是否已赋值
                     * @return DataEngineName 是否已赋值
                     */
                    bool DataEngineNameHasBeenSet() const;

                    /**
                     * 获取Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     * @return State Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     */
                    std::vector<std::string> GetState() const;

                    /**
                     * 设置Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     * @param State Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     */
                    void SetState(const std::vector<std::string>& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取排序字段（默认按创建时间）
                     * @return SortFields 排序字段（默认按创建时间）
                     */
                    std::vector<std::string> GetSortFields() const;

                    /**
                     * 设置排序字段（默认按创建时间）
                     * @param SortFields 排序字段（默认按创建时间）
                     */
                    void SetSortFields(const std::vector<std::string>& _sortFields);

                    /**
                     * 判断参数 SortFields 是否已赋值
                     * @return SortFields 是否已赋值
                     */
                    bool SortFieldsHasBeenSet() const;

                    /**
                     * 获取排序字段：true：升序、false：降序（默认）
                     * @return Asc 排序字段：true：升序、false：降序（默认）
                     */
                    bool GetAsc() const;

                    /**
                     * 设置排序字段：true：升序、false：降序（默认）
                     * @param Asc 排序字段：true：升序、false：降序（默认）
                     */
                    void SetAsc(const bool& _asc);

                    /**
                     * 判断参数 Asc 是否已赋值
                     * @return Asc 是否已赋值
                     */
                    bool AscHasBeenSet() const;

                    /**
                     * 获取分页字段
                     * @return Limit 分页字段
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页字段
                     * @param Limit 分页字段
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页字段
                     * @return Offset 分页字段
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页字段
                     * @param Offset 分页字段
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * DLC Spark作业引擎名称
                     */
                    std::string m_dataEngineName;
                    bool m_dataEngineNameHasBeenSet;

                    /**
                     * Session状态，包含：not_started（未启动）、starting（已启动）、idle（等待输入）、busy(正在运行statement)、shutting_down（停止）、error（异常）、dead（已退出）、killed（被杀死）、success（正常停止）
                     */
                    std::vector<std::string> m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 排序字段（默认按创建时间）
                     */
                    std::vector<std::string> m_sortFields;
                    bool m_sortFieldsHasBeenSet;

                    /**
                     * 排序字段：true：升序、false：降序（默认）
                     */
                    bool m_asc;
                    bool m_ascHasBeenSet;

                    /**
                     * 分页字段
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页字段
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBENOTEBOOKSESSIONSREQUEST_H_
