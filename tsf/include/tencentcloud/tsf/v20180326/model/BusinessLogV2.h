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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESSLOGV2_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESSLOGV2_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 业务日志
                */
                class BusinessLogV2 : public AbstractModel
                {
                public:
                    BusinessLogV2();
                    ~BusinessLogV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetContent() const;

                    /**
                     * 设置日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Content 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取日志时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timestamp 日志时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTimestamp() const;

                    /**
                     * 设置日志时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Timestamp 日志时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimestamp(const uint64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceIp 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceIp() const;

                    /**
                     * 设置实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceIp 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceIp(const std::string& _instanceIp);

                    /**
                     * 判断参数 InstanceIp 是否已赋值
                     * @return InstanceIp 是否已赋值
                     */
                    bool InstanceIpHasBeenSet() const;

                    /**
                     * 获取日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogId 日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLogId() const;

                    /**
                     * 设置日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogId 日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogId(const std::string& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param GroupId 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 日志时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 实例IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceIp;
                    bool m_instanceIpHasBeenSet;

                    /**
                     * 日志ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_BUSINESSLOGV2_H_
