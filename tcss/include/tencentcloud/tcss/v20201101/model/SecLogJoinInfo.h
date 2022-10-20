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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOININFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOININFO_H_

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
                * 安全日志接入详情
                */
                class SecLogJoinInfo : public AbstractModel
                {
                public:
                    SecLogJoinInfo();
                    ~SecLogJoinInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已接入数量
                     * @return Count 已接入数量
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置已接入数量
                     * @param Count 已接入数量
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取是否已接入(true:已接入 false:未接入)
                     * @return IsJoined 是否已接入(true:已接入 false:未接入)
                     */
                    bool GetIsJoined() const;

                    /**
                     * 设置是否已接入(true:已接入 false:未接入)
                     * @param IsJoined 是否已接入(true:已接入 false:未接入)
                     */
                    void SetIsJoined(const bool& _isJoined);

                    /**
                     * 判断参数 IsJoined 是否已赋值
                     * @return IsJoined 是否已赋值
                     */
                    bool IsJoinedHasBeenSet() const;

                    /**
                     * 获取日志类型(
容器bash:  "container_bash"
容器启动: "container_launch"
k8sApi: "k8s_api"
)
                     * @return LogType 日志类型(
容器bash:  "container_bash"
容器启动: "container_launch"
k8sApi: "k8s_api"
)
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置日志类型(
容器bash:  "container_bash"
容器启动: "container_launch"
k8sApi: "k8s_api"
)
                     * @param LogType 日志类型(
容器bash:  "container_bash"
容器启动: "container_launch"
k8sApi: "k8s_api"
)
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     */
                    bool LogTypeHasBeenSet() const;

                private:

                    /**
                     * 已接入数量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 是否已接入(true:已接入 false:未接入)
                     */
                    bool m_isJoined;
                    bool m_isJoinedHasBeenSet;

                    /**
                     * 日志类型(
容器bash:  "container_bash"
容器启动: "container_launch"
k8sApi: "k8s_api"
)
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SECLOGJOININFO_H_
