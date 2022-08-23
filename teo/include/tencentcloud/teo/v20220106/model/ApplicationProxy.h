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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXY_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ApplicationProxyRule.h>
#include <tencentcloud/teo/v20220106/model/Ipv6Access.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 应用代理实例
                */
                class ApplicationProxy : public AbstractModel
                {
                public:
                    ApplicationProxy();
                    ~ApplicationProxy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取当ProxyType=hostname时，表示域名或子域名；
当ProxyType=instance时，表示代理名称。
                     * @return ProxyName 当ProxyType=hostname时，表示域名或子域名；
当ProxyType=instance时，表示代理名称。
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置当ProxyType=hostname时，表示域名或子域名；
当ProxyType=instance时，表示代理名称。
                     * @param ProxyName 当ProxyType=hostname时，表示域名或子域名；
当ProxyType=instance时，表示代理名称。
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取调度模式，取值有：
<li>ip：表示Anycast IP调度；</li>
<li>domain：表示CNAME调度。</li>
                     * @return PlatType 调度模式，取值有：
<li>ip：表示Anycast IP调度；</li>
<li>domain：表示CNAME调度。</li>
                     */
                    std::string GetPlatType() const;

                    /**
                     * 设置调度模式，取值有：
<li>ip：表示Anycast IP调度；</li>
<li>domain：表示CNAME调度。</li>
                     * @param PlatType 调度模式，取值有：
<li>ip：表示Anycast IP调度；</li>
<li>domain：表示CNAME调度。</li>
                     */
                    void SetPlatType(const std::string& _platType);

                    /**
                     * 判断参数 PlatType 是否已赋值
                     * @return PlatType 是否已赋值
                     */
                    bool PlatTypeHasBeenSet() const;

                    /**
                     * 获取是否开启安全，取值有：
<li>0：关闭安全；</li>
<li>1：开启安全。</li>
                     * @return SecurityType 是否开启安全，取值有：
<li>0：关闭安全；</li>
<li>1：开启安全。</li>
                     */
                    int64_t GetSecurityType() const;

                    /**
                     * 设置是否开启安全，取值有：
<li>0：关闭安全；</li>
<li>1：开启安全。</li>
                     * @param SecurityType 是否开启安全，取值有：
<li>0：关闭安全；</li>
<li>1：开启安全。</li>
                     */
                    void SetSecurityType(const int64_t& _securityType);

                    /**
                     * 判断参数 SecurityType 是否已赋值
                     * @return SecurityType 是否已赋值
                     */
                    bool SecurityTypeHasBeenSet() const;

                    /**
                     * 获取是否开启加速，取值有：
<li>0：关闭加速；</li>
<li>1：开启加速。</li>
                     * @return AccelerateType 是否开启加速，取值有：
<li>0：关闭加速；</li>
<li>1：开启加速。</li>
                     */
                    int64_t GetAccelerateType() const;

                    /**
                     * 设置是否开启加速，取值有：
<li>0：关闭加速；</li>
<li>1：开启加速。</li>
                     * @param AccelerateType 是否开启加速，取值有：
<li>0：关闭加速；</li>
<li>1：开启加速。</li>
                     */
                    void SetAccelerateType(const int64_t& _accelerateType);

                    /**
                     * 判断参数 AccelerateType 是否已赋值
                     * @return AccelerateType 是否已赋值
                     */
                    bool AccelerateTypeHasBeenSet() const;

                    /**
                     * 获取字段已经废弃。
                     * @return ForwardClientIp 字段已经废弃。
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置字段已经废弃。
                     * @param ForwardClientIp 字段已经废弃。
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取字段已经废弃。
                     * @return SessionPersist 字段已经废弃。
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置字段已经废弃。
                     * @param SessionPersist 字段已经废弃。
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取规则列表。
                     * @return Rule 规则列表。
                     */
                    std::vector<ApplicationProxyRule> GetRule() const;

                    /**
                     * 设置规则列表。
                     * @param Rule 规则列表。
                     */
                    void SetRule(const std::vector<ApplicationProxyRule>& _rule);

                    /**
                     * 判断参数 Rule 是否已赋值
                     * @return Rule 是否已赋值
                     */
                    bool RuleHasBeenSet() const;

                    /**
                     * 获取状态，取值有：
<li>online：启用；</li>
<li>offline：停用；</li>
<li>progress：部署中；</li>
<li>stopping：停用中；</li>
<li>fail：部署失败/停用失败。</li>
                     * @return Status 状态，取值有：
<li>online：启用；</li>
<li>offline：停用；</li>
<li>progress：部署中；</li>
<li>stopping：停用中；</li>
<li>fail：部署失败/停用失败。</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态，取值有：
<li>online：启用；</li>
<li>offline：停用；</li>
<li>progress：部署中；</li>
<li>stopping：停用中；</li>
<li>fail：部署失败/停用失败。</li>
                     * @param Status 状态，取值有：
<li>online：启用；</li>
<li>offline：停用；</li>
<li>progress：部署中；</li>
<li>stopping：停用中；</li>
<li>fail：部署失败/停用失败。</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取调度信息。
                     * @return ScheduleValue 调度信息。
                     */
                    std::vector<std::string> GetScheduleValue() const;

                    /**
                     * 设置调度信息。
                     * @param ScheduleValue 调度信息。
                     */
                    void SetScheduleValue(const std::vector<std::string>& _scheduleValue);

                    /**
                     * 判断参数 ScheduleValue 是否已赋值
                     * @return ScheduleValue 是否已赋值
                     */
                    bool ScheduleValueHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param UpdateTime 更新时间。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

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
                     * 获取站点名称。
                     * @return ZoneName 站点名称。
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。
                     * @param ZoneName 站点名称。
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取会话保持时间。
                     * @return SessionPersistTime 会话保持时间。
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置会话保持时间。
                     * @param SessionPersistTime 会话保持时间。
                     */
                    void SetSessionPersistTime(const uint64_t& _sessionPersistTime);

                    /**
                     * 判断参数 SessionPersistTime 是否已赋值
                     * @return SessionPersistTime 是否已赋值
                     */
                    bool SessionPersistTimeHasBeenSet() const;

                    /**
                     * 获取四层代理模式，取值有：
<li>hostname：表示子域名模式；</li>
<li>instance：表示实例模式。</li>
                     * @return ProxyType 四层代理模式，取值有：
<li>hostname：表示子域名模式；</li>
<li>instance：表示实例模式。</li>
                     */
                    std::string GetProxyType() const;

                    /**
                     * 设置四层代理模式，取值有：
<li>hostname：表示子域名模式；</li>
<li>instance：表示实例模式。</li>
                     * @param ProxyType 四层代理模式，取值有：
<li>hostname：表示子域名模式；</li>
<li>instance：表示实例模式。</li>
                     */
                    void SetProxyType(const std::string& _proxyType);

                    /**
                     * 判断参数 ProxyType 是否已赋值
                     * @return ProxyType 是否已赋值
                     */
                    bool ProxyTypeHasBeenSet() const;

                    /**
                     * 获取当ProxyType=hostname时：
表示代理加速唯一标识。
                     * @return HostId 当ProxyType=hostname时：
表示代理加速唯一标识。
                     */
                    std::string GetHostId() const;

                    /**
                     * 设置当ProxyType=hostname时：
表示代理加速唯一标识。
                     * @param HostId 当ProxyType=hostname时：
表示代理加速唯一标识。
                     */
                    void SetHostId(const std::string& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取Ipv6访问配置。
                     * @return Ipv6 Ipv6访问配置。
                     */
                    Ipv6Access GetIpv6() const;

                    /**
                     * 设置Ipv6访问配置。
                     * @param Ipv6 Ipv6访问配置。
                     */
                    void SetIpv6(const Ipv6Access& _ipv6);

                    /**
                     * 判断参数 Ipv6 是否已赋值
                     * @return Ipv6 是否已赋值
                     */
                    bool Ipv6HasBeenSet() const;

                    /**
                     * 获取加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
默认值：overseas
                     * @return Area 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
默认值：overseas
                     */
                    std::string GetArea() const;

                    /**
                     * 设置加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
默认值：overseas
                     * @param Area 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
默认值：overseas
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取封禁状态，取值有：
<li>banned：已封禁;</li>
<li>banning：封禁中；</li>
<li>recover：已解封；</li>
<li>recovering：解封禁中。</li>
                     * @return BanStatus 封禁状态，取值有：
<li>banned：已封禁;</li>
<li>banning：封禁中；</li>
<li>recover：已解封；</li>
<li>recovering：解封禁中。</li>
                     */
                    std::string GetBanStatus() const;

                    /**
                     * 设置封禁状态，取值有：
<li>banned：已封禁;</li>
<li>banning：封禁中；</li>
<li>recover：已解封；</li>
<li>recovering：解封禁中。</li>
                     * @param BanStatus 封禁状态，取值有：
<li>banned：已封禁;</li>
<li>banning：封禁中；</li>
<li>recover：已解封；</li>
<li>recovering：解封禁中。</li>
                     */
                    void SetBanStatus(const std::string& _banStatus);

                    /**
                     * 判断参数 BanStatus 是否已赋值
                     * @return BanStatus 是否已赋值
                     */
                    bool BanStatusHasBeenSet() const;

                private:

                    /**
                     * 代理ID。
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 当ProxyType=hostname时，表示域名或子域名；
当ProxyType=instance时，表示代理名称。
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * 调度模式，取值有：
<li>ip：表示Anycast IP调度；</li>
<li>domain：表示CNAME调度。</li>
                     */
                    std::string m_platType;
                    bool m_platTypeHasBeenSet;

                    /**
                     * 是否开启安全，取值有：
<li>0：关闭安全；</li>
<li>1：开启安全。</li>
                     */
                    int64_t m_securityType;
                    bool m_securityTypeHasBeenSet;

                    /**
                     * 是否开启加速，取值有：
<li>0：关闭加速；</li>
<li>1：开启加速。</li>
                     */
                    int64_t m_accelerateType;
                    bool m_accelerateTypeHasBeenSet;

                    /**
                     * 字段已经废弃。
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * 字段已经废弃。
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * 规则列表。
                     */
                    std::vector<ApplicationProxyRule> m_rule;
                    bool m_ruleHasBeenSet;

                    /**
                     * 状态，取值有：
<li>online：启用；</li>
<li>offline：停用；</li>
<li>progress：部署中；</li>
<li>stopping：停用中；</li>
<li>fail：部署失败/停用失败。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 调度信息。
                     */
                    std::vector<std::string> m_scheduleValue;
                    bool m_scheduleValueHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 会话保持时间。
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * 四层代理模式，取值有：
<li>hostname：表示子域名模式；</li>
<li>instance：表示实例模式。</li>
                     */
                    std::string m_proxyType;
                    bool m_proxyTypeHasBeenSet;

                    /**
                     * 当ProxyType=hostname时：
表示代理加速唯一标识。
                     */
                    std::string m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * Ipv6访问配置。
                     */
                    Ipv6Access m_ipv6;
                    bool m_ipv6HasBeenSet;

                    /**
                     * 加速区域，取值有：
<li>mainland：中国大陆境内;</li>
<li>overseas：全球（不含中国大陆）。</li>
默认值：overseas
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 封禁状态，取值有：
<li>banned：已封禁;</li>
<li>banning：封禁中；</li>
<li>recover：已解封；</li>
<li>recovering：解封禁中。</li>
                     */
                    std::string m_banStatus;
                    bool m_banStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_APPLICATIONPROXY_H_
