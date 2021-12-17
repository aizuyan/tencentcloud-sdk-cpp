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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_PROBETASK_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_PROBETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * 探测任务
                */
                class ProbeTask : public AbstractModel
                {
                public:
                    ProbeTask();
                    ~ProbeTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取任务 ID
                     * @return TaskId 任务 ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务 ID
                     * @param TaskId 任务 ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskType 任务类型
                     */
                    int64_t GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param TaskType 任务类型
                     */
                    void SetTaskType(const int64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取探测节点列表
                     * @return Nodes 探测节点列表
                     */
                    std::vector<std::string> GetNodes() const;

                    /**
                     * 设置探测节点列表
                     * @param Nodes 探测节点列表
                     */
                    void SetNodes(const std::vector<std::string>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     */
                    bool NodesHasBeenSet() const;

                    /**
                     * 获取探测间隔
                     * @return Interval 探测间隔
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置探测间隔
                     * @param Interval 探测间隔
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取探测参数
                     * @return Parameters 探测参数
                     */
                    std::string GetParameters() const;

                    /**
                     * 设置探测参数
                     * @param Parameters 探测参数
                     */
                    void SetParameters(const std::string& _parameters);

                    /**
                     * 判断参数 Parameters 是否已赋值
                     * @return Parameters 是否已赋值
                     */
                    bool ParametersHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param Status 任务状态
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取目标地址
                     * @return TargetAddress 目标地址
                     */
                    std::string GetTargetAddress() const;

                    /**
                     * 设置目标地址
                     * @param TargetAddress 目标地址
                     */
                    void SetTargetAddress(const std::string& _targetAddress);

                    /**
                     * 判断参数 TargetAddress 是否已赋值
                     * @return TargetAddress 是否已赋值
                     */
                    bool TargetAddressHasBeenSet() const;

                    /**
                     * 获取付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     * @return PayMode 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     * @param PayMode 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     * @return OrderState 订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     */
                    int64_t GetOrderState() const;

                    /**
                     * 设置订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     * @param OrderState 订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     */
                    void SetOrderState(const int64_t& _orderState);

                    /**
                     * 判断参数 OrderState 是否已赋值
                     * @return OrderState 是否已赋值
                     */
                    bool OrderStateHasBeenSet() const;

                    /**
                     * 获取任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     * @return TaskCategory 任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     */
                    int64_t GetTaskCategory() const;

                    /**
                     * 设置任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     * @param TaskCategory 任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     */
                    void SetTaskCategory(const int64_t& _taskCategory);

                    /**
                     * 判断参数 TaskCategory 是否已赋值
                     * @return TaskCategory 是否已赋值
                     */
                    bool TaskCategoryHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param CreatedAt 创建时间
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取定时任务cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cron 定时任务cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCron() const;

                    /**
                     * 设置定时任务cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Cron 定时任务cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCron(const std::string& _cron);

                    /**
                     * 判断参数 Cron 是否已赋值
                     * @return Cron 是否已赋值
                     */
                    bool CronHasBeenSet() const;

                    /**
                     * 获取定时任务启动状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CronState 定时任务启动状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCronState() const;

                    /**
                     * 设置定时任务启动状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CronState 定时任务启动状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCronState(const int64_t& _cronState);

                    /**
                     * 判断参数 CronState 是否已赋值
                     * @return CronState 是否已赋值
                     */
                    bool CronStateHasBeenSet() const;

                private:

                    /**
                     * 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务类型
                     */
                    int64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 探测节点列表
                     */
                    std::vector<std::string> m_nodes;
                    bool m_nodesHasBeenSet;

                    /**
                     * 探测间隔
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 探测参数
                     */
                    std::string m_parameters;
                    bool m_parametersHasBeenSet;

                    /**
                     * 任务状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 目标地址
                     */
                    std::string m_targetAddress;
                    bool m_targetAddressHasBeenSet;

                    /**
                     * 付费模式
<li>1 = 试用版本</li>
<li> 2 = 付费版本 </li>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 订单状态
<li>1 = 正常</li>
<li> 2 = 欠费 </li>
                     */
                    int64_t m_orderState;
                    bool m_orderStateHasBeenSet;

                    /**
                     * 任务分类
<li>1 = PC</li>
<li> 2 = Mobile </li>
                     */
                    int64_t m_taskCategory;
                    bool m_taskCategoryHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 定时任务cron表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cron;
                    bool m_cronHasBeenSet;

                    /**
                     * 定时任务启动状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cronState;
                    bool m_cronStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_PROBETASK_H_
