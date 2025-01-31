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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYCLSSETTINGINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYCLSSETTINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 安全日志-日志投递cls设置信息
                */
                class SecLogDeliveryClsSettingInfo : public AbstractModel
                {
                public:
                    SecLogDeliveryClsSettingInfo();
                    ~SecLogDeliveryClsSettingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志类型
                     * @return LogType 日志类型
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型
                     * @param LogType 日志类型
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取投递状态(true:开启 false:关闭)
                     * @return State 投递状态(true:开启 false:关闭)
                     */
                    bool GetState() const;

                    /**
                     * 设置投递状态(true:开启 false:关闭)
                     * @param State 投递状态(true:开启 false:关闭)
                     */
                    void SetState(const bool& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取区域
                     * @return Region 区域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域
                     * @param Region 区域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取日志集
                     * @return LogSet 日志集
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置日志集
                     * @param LogSet 日志集
                     */
                    void SetLogSet(const std::string& _logSet);

                    /**
                     * 判断参数 LogSet 是否已赋值
                     * @return LogSet 是否已赋值
                     */
                    bool LogSetHasBeenSet() const;

                    /**
                     * 获取主题ID
                     * @return TopicID 主题ID
                     */
                    std::string GetTopicID() const;

                    /**
                     * 设置主题ID
                     * @param TopicID 主题ID
                     */
                    void SetTopicID(const std::string& _topicID);

                    /**
                     * 判断参数 TopicID 是否已赋值
                     * @return TopicID 是否已赋值
                     */
                    bool TopicIDHasBeenSet() const;

                    /**
                     * 获取日志集名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogSetName 日志集名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogSetName() const;

                    /**
                     * 设置日志集名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogSetName 日志集名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogSetName(const std::string& _logSetName);

                    /**
                     * 判断参数 LogSetName 是否已赋值
                     * @return LogSetName 是否已赋值
                     */
                    bool LogSetNameHasBeenSet() const;

                    /**
                     * 获取主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TopicName 主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TopicName 主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     */
                    bool TopicNameHasBeenSet() const;

                private:

                    /**
                     * 日志类型
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * 投递状态(true:开启 false:关闭)
                     */
                    bool m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 日志集
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * 主题ID
                     */
                    std::string m_topicID;
                    bool m_topicIDHasBeenSet;

                    /**
                     * 日志集名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logSetName;
                    bool m_logSetNameHasBeenSet;

                    /**
                     * 主题名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGDELIVERYCLSSETTINGINFO_H_
