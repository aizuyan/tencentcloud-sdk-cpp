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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKALARMINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKALARMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AlarmIndicatorInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务告警信息
                */
                class TaskAlarmInfo : public AbstractModel
                {
                public:
                    TaskAlarmInfo();
                    ~TaskAlarmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param TaskId 任务ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取规则名称
                     * @return RegularName 规则名称
                     */
                    std::string GetRegularName() const;

                    /**
                     * 设置规则名称
                     * @param RegularName 规则名称
                     */
                    void SetRegularName(const std::string& _regularName);

                    /**
                     * 判断参数 RegularName 是否已赋值
                     * @return RegularName 是否已赋值
                     */
                    bool RegularNameHasBeenSet() const;

                    /**
                     * 获取规则状态(0表示关闭，1表示打开)
                     * @return RegularStatus 规则状态(0表示关闭，1表示打开)
                     */
                    uint64_t GetRegularStatus() const;

                    /**
                     * 设置规则状态(0表示关闭，1表示打开)
                     * @param RegularStatus 规则状态(0表示关闭，1表示打开)
                     */
                    void SetRegularStatus(const uint64_t& _regularStatus);

                    /**
                     * 判断参数 RegularStatus 是否已赋值
                     * @return RegularStatus 是否已赋值
                     */
                    bool RegularStatusHasBeenSet() const;

                    /**
                     * 获取告警级别(0表示普通，1表示重要，2表示紧急)
                     * @return AlarmLevel 告警级别(0表示普通，1表示重要，2表示紧急)
                     */
                    uint64_t GetAlarmLevel() const;

                    /**
                     * 设置告警级别(0表示普通，1表示重要，2表示紧急)
                     * @param AlarmLevel 告警级别(0表示普通，1表示重要，2表示紧急)
                     */
                    void SetAlarmLevel(const uint64_t& _alarmLevel);

                    /**
                     * 判断参数 AlarmLevel 是否已赋值
                     * @return AlarmLevel 是否已赋值
                     */
                    bool AlarmLevelHasBeenSet() const;

                    /**
                     * 获取告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     * @return AlarmWay 告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     */
                    std::string GetAlarmWay() const;

                    /**
                     * 设置告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     * @param AlarmWay 告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     */
                    void SetAlarmWay(const std::string& _alarmWay);

                    /**
                     * 判断参数 AlarmWay 是否已赋值
                     * @return AlarmWay 是否已赋值
                     */
                    bool AlarmWayHasBeenSet() const;

                    /**
                     * 获取任务类型(201表示实时，202表示离线)
                     * @return TaskType 任务类型(201表示实时，202表示离线)
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置任务类型(201表示实时，202表示离线)
                     * @param TaskType 任务类型(201表示实时，202表示离线)
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取主键ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 主键ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetId() const;

                    /**
                     * 设置主键ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Id 主键ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RegularId 规则ID
                     */
                    std::string GetRegularId() const;

                    /**
                     * 设置规则ID
                     * @param RegularId 规则ID
                     */
                    void SetRegularId(const std::string& _regularId);

                    /**
                     * 判断参数 RegularId 是否已赋值
                     * @return RegularId 是否已赋值
                     */
                    bool RegularIdHasBeenSet() const;

                    /**
                     * 获取告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
，4写入速度，5读取速度，6读取吞吐，7写入吞吐, 8脏数据字节数，9脏数据条数
                     * @return AlarmIndicator 告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
，4写入速度，5读取速度，6读取吞吐，7写入吞吐, 8脏数据字节数，9脏数据条数
                     */
                    uint64_t GetAlarmIndicator() const;

                    /**
                     * 设置告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
，4写入速度，5读取速度，6读取吞吐，7写入吞吐, 8脏数据字节数，9脏数据条数
                     * @param AlarmIndicator 告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
，4写入速度，5读取速度，6读取吞吐，7写入吞吐, 8脏数据字节数，9脏数据条数
                     */
                    void SetAlarmIndicator(const uint64_t& _alarmIndicator);

                    /**
                     * 判断参数 AlarmIndicator 是否已赋值
                     * @return AlarmIndicator 是否已赋值
                     */
                    bool AlarmIndicatorHasBeenSet() const;

                    /**
                     * 获取指标阈值(1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerType 指标阈值(1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTriggerType() const;

                    /**
                     * 设置指标阈值(1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TriggerType 指标阈值(1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTriggerType(const uint64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取预计的超时时间(分钟级别)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EstimatedTime 预计的超时时间(分钟级别)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetEstimatedTime() const;

                    /**
                     * 设置预计的超时时间(分钟级别)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EstimatedTime 预计的超时时间(分钟级别)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEstimatedTime(const uint64_t& _estimatedTime);

                    /**
                     * 判断参数 EstimatedTime 是否已赋值
                     * @return EstimatedTime 是否已赋值
                     */
                    bool EstimatedTimeHasBeenSet() const;

                    /**
                     * 获取告警接收人ID，多个用逗号隔开
                     * @return AlarmRecipientId 告警接收人ID，多个用逗号隔开
                     */
                    std::string GetAlarmRecipientId() const;

                    /**
                     * 设置告警接收人ID，多个用逗号隔开
                     * @param AlarmRecipientId 告警接收人ID，多个用逗号隔开
                     */
                    void SetAlarmRecipientId(const std::string& _alarmRecipientId);

                    /**
                     * 判断参数 AlarmRecipientId 是否已赋值
                     * @return AlarmRecipientId 是否已赋值
                     */
                    bool AlarmRecipientIdHasBeenSet() const;

                    /**
                     * 获取项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProjectId 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creater 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreater() const;

                    /**
                     * 设置创建人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Creater 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreater(const std::string& _creater);

                    /**
                     * 判断参数 Creater 是否已赋值
                     * @return Creater 是否已赋值
                     */
                    bool CreaterHasBeenSet() const;

                    /**
                     * 获取告警接收人昵称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRecipientName 告警接收人昵称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlarmRecipientName() const;

                    /**
                     * 设置告警接收人昵称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlarmRecipientName 告警接收人昵称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlarmRecipientName(const std::string& _alarmRecipientName);

                    /**
                     * 判断参数 AlarmRecipientName 是否已赋值
                     * @return AlarmRecipientName 是否已赋值
                     */
                    bool AlarmRecipientNameHasBeenSet() const;

                    /**
                     * 获取告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmIndicatorDesc 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAlarmIndicatorDesc() const;

                    /**
                     * 设置告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlarmIndicatorDesc 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlarmIndicatorDesc(const std::string& _alarmIndicatorDesc);

                    /**
                     * 判断参数 AlarmIndicatorDesc 是否已赋值
                     * @return AlarmIndicatorDesc 是否已赋值
                     */
                    bool AlarmIndicatorDescHasBeenSet() const;

                    /**
                     * 获取实时任务告警需要的参数，1是大于2是小于
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 实时任务告警需要的参数，1是大于2是小于
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetOperator() const;

                    /**
                     * 设置实时任务告警需要的参数，1是大于2是小于
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Operator 实时任务告警需要的参数，1是大于2是小于
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOperator(const uint64_t& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取节点id，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId 节点id，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置节点id，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodeId 节点id，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取节点名称，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName 节点名称，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置节点名称，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NodeName 节点名称，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmIndicatorInfos 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmIndicatorInfo> GetAlarmIndicatorInfos() const;

                    /**
                     * 设置指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlarmIndicatorInfos 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlarmIndicatorInfos(const std::vector<AlarmIndicatorInfo>& _alarmIndicatorInfos);

                    /**
                     * 判断参数 AlarmIndicatorInfos 是否已赋值
                     * @return AlarmIndicatorInfos 是否已赋值
                     */
                    bool AlarmIndicatorInfosHasBeenSet() const;

                    /**
                     * 获取告警接收人类型，0指定人员；1任务责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmRecipientType 告警接收人类型，0指定人员；1任务责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetAlarmRecipientType() const;

                    /**
                     * 设置告警接收人类型，0指定人员；1任务责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AlarmRecipientType 告警接收人类型，0指定人员；1任务责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAlarmRecipientType(const uint64_t& _alarmRecipientType);

                    /**
                     * 判断参数 AlarmRecipientType 是否已赋值
                     * @return AlarmRecipientType 是否已赋值
                     */
                    bool AlarmRecipientTypeHasBeenSet() const;

                    /**
                     * 获取企业微信群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeComHook 企业微信群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetWeComHook() const;

                    /**
                     * 设置企业微信群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WeComHook 企业微信群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWeComHook(const std::string& _weComHook);

                    /**
                     * 判断参数 WeComHook 是否已赋值
                     * @return WeComHook 是否已赋值
                     */
                    bool WeComHookHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_regularName;
                    bool m_regularNameHasBeenSet;

                    /**
                     * 规则状态(0表示关闭，1表示打开)
                     */
                    uint64_t m_regularStatus;
                    bool m_regularStatusHasBeenSet;

                    /**
                     * 告警级别(0表示普通，1表示重要，2表示紧急)
                     */
                    uint64_t m_alarmLevel;
                    bool m_alarmLevelHasBeenSet;

                    /**
                     * 告警方式,多个用逗号隔开（1:邮件，2:短信，3:微信，4:语音，5:代表企业微信，6:http）
                     */
                    std::string m_alarmWay;
                    bool m_alarmWayHasBeenSet;

                    /**
                     * 任务类型(201表示实时，202表示离线)
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 主键ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则ID
                     */
                    std::string m_regularId;
                    bool m_regularIdHasBeenSet;

                    /**
                     * 告警指标,0表示任务失败，1表示任务运行超时，2表示任务停止，3表示任务暂停
，4写入速度，5读取速度，6读取吞吐，7写入吞吐, 8脏数据字节数，9脏数据条数
                     */
                    uint64_t m_alarmIndicator;
                    bool m_alarmIndicatorHasBeenSet;

                    /**
                     * 指标阈值(1表示离线任务第一次运行失败，2表示离线任务所有重试完成后失败)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * 预计的超时时间(分钟级别)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_estimatedTime;
                    bool m_estimatedTimeHasBeenSet;

                    /**
                     * 告警接收人ID，多个用逗号隔开
                     */
                    std::string m_alarmRecipientId;
                    bool m_alarmRecipientIdHasBeenSet;

                    /**
                     * 项目ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 创建人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creater;
                    bool m_createrHasBeenSet;

                    /**
                     * 告警接收人昵称，多个用逗号隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmRecipientName;
                    bool m_alarmRecipientNameHasBeenSet;

                    /**
                     * 告警指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmIndicatorDesc;
                    bool m_alarmIndicatorDescHasBeenSet;

                    /**
                     * 实时任务告警需要的参数，1是大于2是小于
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 节点id，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 节点名称，多个逗号分隔
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * 指标列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AlarmIndicatorInfo> m_alarmIndicatorInfos;
                    bool m_alarmIndicatorInfosHasBeenSet;

                    /**
                     * 告警接收人类型，0指定人员；1任务责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_alarmRecipientType;
                    bool m_alarmRecipientTypeHasBeenSet;

                    /**
                     * 企业微信群Hook地址，多个hook地址使用,隔开
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_weComHook;
                    bool m_weComHookHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKALARMINFO_H_
