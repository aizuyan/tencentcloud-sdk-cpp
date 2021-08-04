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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKINTERFACERESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKINTERFACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/NetworkInterface.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateNetworkInterface返回参数结构体
                */
                class CreateNetworkInterfaceResponse : public AbstractModel
                {
                public:
                    CreateNetworkInterfaceResponse();
                    ~CreateNetworkInterfaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性网卡实例。
                     * @return NetworkInterface 弹性网卡实例。
                     */
                    NetworkInterface GetNetworkInterface() const;

                    /**
                     * 判断参数 NetworkInterface 是否已赋值
                     * @return NetworkInterface 是否已赋值
                     */
                    bool NetworkInterfaceHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例。
                     */
                    NetworkInterface m_networkInterface;
                    bool m_networkInterfaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATENETWORKINTERFACERESPONSE_H_
