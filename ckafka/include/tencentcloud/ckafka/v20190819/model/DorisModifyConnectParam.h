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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DORISMODIFYCONNECTPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DORISMODIFYCONNECTPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * Doris 连接源修改参数
                */
                class DorisModifyConnectParam : public AbstractModel
                {
                public:
                    DorisModifyConnectParam();
                    ~DorisModifyConnectParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Doris 连接源的实例资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Resource Doris 连接源的实例资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Doris 连接源的实例资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Resource Doris 连接源的实例资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Doris jdbc 负载均衡连接 port，通常映射到 fe 的 9030 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Port Doris jdbc 负载均衡连接 port，通常映射到 fe 的 9030 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置Doris jdbc 负载均衡连接 port，通常映射到 fe 的 9030 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Port Doris jdbc 负载均衡连接 port，通常映射到 fe 的 9030 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Doris 连接源的实例vip，当为腾讯云实例时，必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceVip Doris 连接源的实例vip，当为腾讯云实例时，必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceVip() const;

                    /**
                     * 设置Doris 连接源的实例vip，当为腾讯云实例时，必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceVip Doris 连接源的实例vip，当为腾讯云实例时，必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceVip(const std::string& _serviceVip);

                    /**
                     * 判断参数 ServiceVip 是否已赋值
                     * @return ServiceVip 是否已赋值
                     */
                    bool ServiceVipHasBeenSet() const;

                    /**
                     * 获取Doris 连接源的vpcId，当为腾讯云实例时，必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UniqVpcId Doris 连接源的vpcId，当为腾讯云实例时，必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置Doris 连接源的vpcId，当为腾讯云实例时，必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UniqVpcId Doris 连接源的vpcId，当为腾讯云实例时，必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取Doris 连接源的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName Doris 连接源的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Doris 连接源的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserName Doris 连接源的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Doris 连接源的密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Password Doris 连接源的密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Doris 连接源的密码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Password Doris 连接源的密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsUpdate 是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsUpdate() const;

                    /**
                     * 设置是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsUpdate 是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsUpdate(const bool& _isUpdate);

                    /**
                     * 判断参数 IsUpdate 是否已赋值
                     * @return IsUpdate 是否已赋值
                     */
                    bool IsUpdateHasBeenSet() const;

                    /**
                     * 获取Doris 连接源是否为自建集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelfBuilt Doris 连接源是否为自建集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetSelfBuilt() const;

                    /**
                     * 设置Doris 连接源是否为自建集群
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SelfBuilt Doris 连接源是否为自建集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSelfBuilt(const bool& _selfBuilt);

                    /**
                     * 判断参数 SelfBuilt 是否已赋值
                     * @return SelfBuilt 是否已赋值
                     */
                    bool SelfBuiltHasBeenSet() const;

                    /**
                     * 获取Doris 的 http 负载均衡连接 port，通常映射到 be 的 8040 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BePort Doris 的 http 负载均衡连接 port，通常映射到 be 的 8040 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetBePort() const;

                    /**
                     * 设置Doris 的 http 负载均衡连接 port，通常映射到 be 的 8040 端口
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BePort Doris 的 http 负载均衡连接 port，通常映射到 be 的 8040 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBePort(const int64_t& _bePort);

                    /**
                     * 判断参数 BePort 是否已赋值
                     * @return BePort 是否已赋值
                     */
                    bool BePortHasBeenSet() const;

                private:

                    /**
                     * Doris 连接源的实例资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Doris jdbc 负载均衡连接 port，通常映射到 fe 的 9030 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Doris 连接源的实例vip，当为腾讯云实例时，必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceVip;
                    bool m_serviceVipHasBeenSet;

                    /**
                     * Doris 连接源的vpcId，当为腾讯云实例时，必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * Doris 连接源的用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Doris 连接源的密码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 是否更新到关联的Datahub任务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isUpdate;
                    bool m_isUpdateHasBeenSet;

                    /**
                     * Doris 连接源是否为自建集群
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_selfBuilt;
                    bool m_selfBuiltHasBeenSet;

                    /**
                     * Doris 的 http 负载均衡连接 port，通常映射到 be 的 8040 端口
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bePort;
                    bool m_bePortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DORISMODIFYCONNECTPARAM_H_
