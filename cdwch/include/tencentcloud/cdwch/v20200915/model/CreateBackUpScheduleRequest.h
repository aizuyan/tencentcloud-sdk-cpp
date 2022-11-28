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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_CREATEBACKUPSCHEDULEREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_CREATEBACKUPSCHEDULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/BackupTableContent.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * CreateBackUpSchedule请求参数结构体
                */
                class CreateBackUpScheduleRequest : public AbstractModel
                {
                public:
                    CreateBackUpScheduleRequest();
                    ~CreateBackUpScheduleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取编辑时需要传
                     * @return ScheduleId 编辑时需要传
                     */
                    int64_t GetScheduleId() const;

                    /**
                     * 设置编辑时需要传
                     * @param ScheduleId 编辑时需要传
                     */
                    void SetScheduleId(const int64_t& _scheduleId);

                    /**
                     * 判断参数 ScheduleId 是否已赋值
                     * @return ScheduleId 是否已赋值
                     */
                    bool ScheduleIdHasBeenSet() const;

                    /**
                     * 获取选择的星期 逗号分隔
                     * @return WeekDays 选择的星期 逗号分隔
                     */
                    std::string GetWeekDays() const;

                    /**
                     * 设置选择的星期 逗号分隔
                     * @param WeekDays 选择的星期 逗号分隔
                     */
                    void SetWeekDays(const std::string& _weekDays);

                    /**
                     * 判断参数 WeekDays 是否已赋值
                     * @return WeekDays 是否已赋值
                     */
                    bool WeekDaysHasBeenSet() const;

                    /**
                     * 获取执行小时
                     * @return ExecuteHour 执行小时
                     */
                    int64_t GetExecuteHour() const;

                    /**
                     * 设置执行小时
                     * @param ExecuteHour 执行小时
                     */
                    void SetExecuteHour(const int64_t& _executeHour);

                    /**
                     * 判断参数 ExecuteHour 是否已赋值
                     * @return ExecuteHour 是否已赋值
                     */
                    bool ExecuteHourHasBeenSet() const;

                    /**
                     * 获取备份表列表
                     * @return BackUpTables 备份表列表
                     */
                    std::vector<BackupTableContent> GetBackUpTables() const;

                    /**
                     * 设置备份表列表
                     * @param BackUpTables 备份表列表
                     */
                    void SetBackUpTables(const std::vector<BackupTableContent>& _backUpTables);

                    /**
                     * 判断参数 BackUpTables 是否已赋值
                     * @return BackUpTables 是否已赋值
                     */
                    bool BackUpTablesHasBeenSet() const;

                private:

                    /**
                     * 编辑时需要传
                     */
                    int64_t m_scheduleId;
                    bool m_scheduleIdHasBeenSet;

                    /**
                     * 选择的星期 逗号分隔
                     */
                    std::string m_weekDays;
                    bool m_weekDaysHasBeenSet;

                    /**
                     * 执行小时
                     */
                    int64_t m_executeHour;
                    bool m_executeHourHasBeenSet;

                    /**
                     * 备份表列表
                     */
                    std::vector<BackupTableContent> m_backUpTables;
                    bool m_backUpTablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_CREATEBACKUPSCHEDULEREQUEST_H_
