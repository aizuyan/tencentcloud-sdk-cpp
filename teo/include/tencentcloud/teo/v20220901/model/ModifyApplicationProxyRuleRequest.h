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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifyApplicationProxyRule请求参数结构体
                */
                class ModifyApplicationProxyRuleRequest : public AbstractModel
                {
                public:
                    ModifyApplicationProxyRuleRequest();
                    ~ModifyApplicationProxyRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID。
                     * @return ZoneId 站点ID。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID。
                     * @param ZoneId 站点ID。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取代理ID。
                     * @return ProxyId 代理ID。
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置代理ID。
                     * @param ProxyId 代理ID。
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取规则ID。
                     * @return RuleId 规则ID。
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置规则ID。
                     * @param RuleId 规则ID。
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取源站类型，取值有：
<li>custom：手动添加；</li>
<li>origins：源站组。</li>不填保持原有值。
                     * @return OriginType 源站类型，取值有：
<li>custom：手动添加；</li>
<li>origins：源站组。</li>不填保持原有值。
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型，取值有：
<li>custom：手动添加；</li>
<li>origins：源站组。</li>不填保持原有值。
                     * @param OriginType 源站类型，取值有：
<li>custom：手动添加；</li>
<li>origins：源站组。</li>不填保持原有值。
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取端口，支持格式：
80：80端口
81-90：81至90端口。不填保持原有值。
                     * @return Port 端口，支持格式：
80：80端口
81-90：81至90端口。不填保持原有值。
                     */
                    std::vector<std::string> GetPort() const;

                    /**
                     * 设置端口，支持格式：
80：80端口
81-90：81至90端口。不填保持原有值。
                     * @param Port 端口，支持格式：
80：80端口
81-90：81至90端口。不填保持原有值。
                     */
                    void SetPort(const std::vector<std::string>& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取协议，取值有：
<li>TCP：TCP协议；</li>
<li>UDP：UDP协议。</li>不填保持原有值。
                     * @return Proto 协议，取值有：
<li>TCP：TCP协议；</li>
<li>UDP：UDP协议。</li>不填保持原有值。
                     */
                    std::string GetProto() const;

                    /**
                     * 设置协议，取值有：
<li>TCP：TCP协议；</li>
<li>UDP：UDP协议。</li>不填保持原有值。
                     * @param Proto 协议，取值有：
<li>TCP：TCP协议；</li>
<li>UDP：UDP协议。</li>不填保持原有值。
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取源站信息：
当OriginType=custom时，表示一个或多个源站，如：
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]；
当OriginType=origins时，要求有且仅有一个元素，表示源站组ID，如：
OriginValue=["origin-537f5b41-162a-11ed-abaa-525400c5da15"]。
不填保持原有值。
                     * @return OriginValue 源站信息：
当OriginType=custom时，表示一个或多个源站，如：
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]；
当OriginType=origins时，要求有且仅有一个元素，表示源站组ID，如：
OriginValue=["origin-537f5b41-162a-11ed-abaa-525400c5da15"]。
不填保持原有值。
                     */
                    std::vector<std::string> GetOriginValue() const;

                    /**
                     * 设置源站信息：
当OriginType=custom时，表示一个或多个源站，如：
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]；
当OriginType=origins时，要求有且仅有一个元素，表示源站组ID，如：
OriginValue=["origin-537f5b41-162a-11ed-abaa-525400c5da15"]。
不填保持原有值。
                     * @param OriginValue 源站信息：
当OriginType=custom时，表示一个或多个源站，如：
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]；
当OriginType=origins时，要求有且仅有一个元素，表示源站组ID，如：
OriginValue=["origin-537f5b41-162a-11ed-abaa-525400c5da15"]。
不填保持原有值。
                     */
                    void SetOriginValue(const std::vector<std::string>& _originValue);

                    /**
                     * 判断参数 OriginValue 是否已赋值
                     * @return OriginValue 是否已赋值
                     */
                    bool OriginValueHasBeenSet() const;

                    /**
                     * 获取传递客户端IP，取值有：
<li>TOA：TOA（仅Proto=TCP时可选）；</li>
<li>PPV1：Proxy Protocol传递，协议版本V1（仅Proto=TCP时可选）；</li>
<li>PPV2：Proxy Protocol传递，协议版本V2；</li>
<li>OFF：不传递。</li>不填保持原有值。
                     * @return ForwardClientIp 传递客户端IP，取值有：
<li>TOA：TOA（仅Proto=TCP时可选）；</li>
<li>PPV1：Proxy Protocol传递，协议版本V1（仅Proto=TCP时可选）；</li>
<li>PPV2：Proxy Protocol传递，协议版本V2；</li>
<li>OFF：不传递。</li>不填保持原有值。
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置传递客户端IP，取值有：
<li>TOA：TOA（仅Proto=TCP时可选）；</li>
<li>PPV1：Proxy Protocol传递，协议版本V1（仅Proto=TCP时可选）；</li>
<li>PPV2：Proxy Protocol传递，协议版本V2；</li>
<li>OFF：不传递。</li>不填保持原有值。
                     * @param ForwardClientIp 传递客户端IP，取值有：
<li>TOA：TOA（仅Proto=TCP时可选）；</li>
<li>PPV1：Proxy Protocol传递，协议版本V1（仅Proto=TCP时可选）；</li>
<li>PPV2：Proxy Protocol传递，协议版本V2；</li>
<li>OFF：不传递。</li>不填保持原有值。
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取是否开启会话保持，取值有：
<li>true：开启；</li>
<li>false：关闭。</li>不填保持原有值。
                     * @return SessionPersist 是否开启会话保持，取值有：
<li>true：开启；</li>
<li>false：关闭。</li>不填保持原有值。
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置是否开启会话保持，取值有：
<li>true：开启；</li>
<li>false：关闭。</li>不填保持原有值。
                     * @param SessionPersist 是否开启会话保持，取值有：
<li>true：开启；</li>
<li>false：关闭。</li>不填保持原有值。
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

                private:

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 代理ID。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 规则ID。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 源站类型，取值有：
<li>custom：手动添加；</li>
<li>origins：源站组。</li>不填保持原有值。
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 端口，支持格式：
80：80端口
81-90：81至90端口。不填保持原有值。
                     */
                    std::vector<std::string> m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 协议，取值有：
<li>TCP：TCP协议；</li>
<li>UDP：UDP协议。</li>不填保持原有值。
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * 源站信息：
当OriginType=custom时，表示一个或多个源站，如：
OriginValue=["8.8.8.8:80","9.9.9.9:80"]
OriginValue=["test.com:80"]；
当OriginType=origins时，要求有且仅有一个元素，表示源站组ID，如：
OriginValue=["origin-537f5b41-162a-11ed-abaa-525400c5da15"]。
不填保持原有值。
                     */
                    std::vector<std::string> m_originValue;
                    bool m_originValueHasBeenSet;

                    /**
                     * 传递客户端IP，取值有：
<li>TOA：TOA（仅Proto=TCP时可选）；</li>
<li>PPV1：Proxy Protocol传递，协议版本V1（仅Proto=TCP时可选）；</li>
<li>PPV2：Proxy Protocol传递，协议版本V2；</li>
<li>OFF：不传递。</li>不填保持原有值。
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * 是否开启会话保持，取值有：
<li>true：开启；</li>
<li>false：关闭。</li>不填保持原有值。
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYAPPLICATIONPROXYRULEREQUEST_H_
