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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEDGELOGCONFIGREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEDGELOGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * CreateEdgeLogConfig请求参数结构体
                */
                class CreateEdgeLogConfigRequest : public AbstractModel
                {
                public:
                    CreateEdgeLogConfigRequest();
                    ~CreateEdgeLogConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param ClusterId 集群ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取日志采集配置的json表达
                     * @return LogConfig 日志采集配置的json表达
                     */
                    std::string GetLogConfig() const;

                    /**
                     * 设置日志采集配置的json表达
                     * @param LogConfig 日志采集配置的json表达
                     */
                    void SetLogConfig(const std::string& _logConfig);

                    /**
                     * 判断参数 LogConfig 是否已赋值
                     * @return LogConfig 是否已赋值
                     */
                    bool LogConfigHasBeenSet() const;

                    /**
                     * 获取CLS日志集ID
                     * @return LogsetId CLS日志集ID
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 设置CLS日志集ID
                     * @param LogsetId CLS日志集ID
                     */
                    void SetLogsetId(const std::string& _logsetId);

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     */
                    bool LogsetIdHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 日志采集配置的json表达
                     */
                    std::string m_logConfig;
                    bool m_logConfigHasBeenSet;

                    /**
                     * CLS日志集ID
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_CREATEEDGELOGCONFIGREQUEST_H_
