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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICELIMIT_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICELIMIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 服务的限流限速等配置
                */
                class ServiceLimit : public AbstractModel
                {
                public:
                    ServiceLimit();
                    ~ServiceLimit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启实例层面限流限速，true or false。true 则 InstanceRpsLimit 必填， false 则 InstanceRpsLimit 不生效
                     * @return EnableInstanceRpsLimit 是否开启实例层面限流限速，true or false。true 则 InstanceRpsLimit 必填， false 则 InstanceRpsLimit 不生效
                     */
                    bool GetEnableInstanceRpsLimit() const;

                    /**
                     * 设置是否开启实例层面限流限速，true or false。true 则 InstanceRpsLimit 必填， false 则 InstanceRpsLimit 不生效
                     * @param EnableInstanceRpsLimit 是否开启实例层面限流限速，true or false。true 则 InstanceRpsLimit 必填， false 则 InstanceRpsLimit 不生效
                     */
                    void SetEnableInstanceRpsLimit(const bool& _enableInstanceRpsLimit);

                    /**
                     * 判断参数 EnableInstanceRpsLimit 是否已赋值
                     * @return EnableInstanceRpsLimit 是否已赋值
                     */
                    bool EnableInstanceRpsLimitHasBeenSet() const;

                    /**
                     * 获取每个服务实例的 request per second 限速, 0 为不限流
                     * @return InstanceRpsLimit 每个服务实例的 request per second 限速, 0 为不限流
                     */
                    int64_t GetInstanceRpsLimit() const;

                    /**
                     * 设置每个服务实例的 request per second 限速, 0 为不限流
                     * @param InstanceRpsLimit 每个服务实例的 request per second 限速, 0 为不限流
                     */
                    void SetInstanceRpsLimit(const int64_t& _instanceRpsLimit);

                    /**
                     * 判断参数 InstanceRpsLimit 是否已赋值
                     * @return InstanceRpsLimit 是否已赋值
                     */
                    bool InstanceRpsLimitHasBeenSet() const;

                private:

                    /**
                     * 是否开启实例层面限流限速，true or false。true 则 InstanceRpsLimit 必填， false 则 InstanceRpsLimit 不生效
                     */
                    bool m_enableInstanceRpsLimit;
                    bool m_enableInstanceRpsLimitHasBeenSet;

                    /**
                     * 每个服务实例的 request per second 限速, 0 为不限流
                     */
                    int64_t m_instanceRpsLimit;
                    bool m_instanceRpsLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICELIMIT_H_
