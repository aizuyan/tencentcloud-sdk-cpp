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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDREQUEST_H_

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
                * ModifyDnsRecord请求参数结构体
                */
                class ModifyDnsRecordRequest : public AbstractModel
                {
                public:
                    ModifyDnsRecordRequest();
                    ~ModifyDnsRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取记录ID。
                     * @return DnsRecordId 记录ID。
                     */
                    std::string GetDnsRecordId() const;

                    /**
                     * 设置记录ID。
                     * @param DnsRecordId 记录ID。
                     */
                    void SetDnsRecordId(const std::string& _dnsRecordId);

                    /**
                     * 判断参数 DnsRecordId 是否已赋值
                     * @return DnsRecordId 是否已赋值
                     */
                    bool DnsRecordIdHasBeenSet() const;

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
                     * 获取DNS记录类型，取值有：
<li>A：将域名指向一个外网 IPv4 地址，如 8.8.8.8；</li>
<li>AAAA：将域名指向一个外网 IPv6 地址；</li>
<li>MX：用于邮箱服务器，相关记录值/优先级参数由邮件注册商提供。存在多条 MX 记录时，优先级越低越优先；</li>
<li>CNAME：将域名指向另一个域名，再由该域名解析出最终 IP 地址；</li>
<li>TXT：对域名进行标识和说明，常用于域名验证和 SPF 记录（反垃圾邮件）；</li>
<li>NS：如果需要将子域名交给其他 DNS 服务商解析，则需要添加 NS 记录。根域名无法添加 NS 记录；</li>
<li>CAA：指定可为本站点颁发证书的 CA；</li>
<li>SRV：标识某台服务器使用了某个服务，常见于微软系统的目录管理。</li>不填写保持原有配置。
                     * @return DnsRecordType DNS记录类型，取值有：
<li>A：将域名指向一个外网 IPv4 地址，如 8.8.8.8；</li>
<li>AAAA：将域名指向一个外网 IPv6 地址；</li>
<li>MX：用于邮箱服务器，相关记录值/优先级参数由邮件注册商提供。存在多条 MX 记录时，优先级越低越优先；</li>
<li>CNAME：将域名指向另一个域名，再由该域名解析出最终 IP 地址；</li>
<li>TXT：对域名进行标识和说明，常用于域名验证和 SPF 记录（反垃圾邮件）；</li>
<li>NS：如果需要将子域名交给其他 DNS 服务商解析，则需要添加 NS 记录。根域名无法添加 NS 记录；</li>
<li>CAA：指定可为本站点颁发证书的 CA；</li>
<li>SRV：标识某台服务器使用了某个服务，常见于微软系统的目录管理。</li>不填写保持原有配置。
                     */
                    std::string GetDnsRecordType() const;

                    /**
                     * 设置DNS记录类型，取值有：
<li>A：将域名指向一个外网 IPv4 地址，如 8.8.8.8；</li>
<li>AAAA：将域名指向一个外网 IPv6 地址；</li>
<li>MX：用于邮箱服务器，相关记录值/优先级参数由邮件注册商提供。存在多条 MX 记录时，优先级越低越优先；</li>
<li>CNAME：将域名指向另一个域名，再由该域名解析出最终 IP 地址；</li>
<li>TXT：对域名进行标识和说明，常用于域名验证和 SPF 记录（反垃圾邮件）；</li>
<li>NS：如果需要将子域名交给其他 DNS 服务商解析，则需要添加 NS 记录。根域名无法添加 NS 记录；</li>
<li>CAA：指定可为本站点颁发证书的 CA；</li>
<li>SRV：标识某台服务器使用了某个服务，常见于微软系统的目录管理。</li>不填写保持原有配置。
                     * @param DnsRecordType DNS记录类型，取值有：
<li>A：将域名指向一个外网 IPv4 地址，如 8.8.8.8；</li>
<li>AAAA：将域名指向一个外网 IPv6 地址；</li>
<li>MX：用于邮箱服务器，相关记录值/优先级参数由邮件注册商提供。存在多条 MX 记录时，优先级越低越优先；</li>
<li>CNAME：将域名指向另一个域名，再由该域名解析出最终 IP 地址；</li>
<li>TXT：对域名进行标识和说明，常用于域名验证和 SPF 记录（反垃圾邮件）；</li>
<li>NS：如果需要将子域名交给其他 DNS 服务商解析，则需要添加 NS 记录。根域名无法添加 NS 记录；</li>
<li>CAA：指定可为本站点颁发证书的 CA；</li>
<li>SRV：标识某台服务器使用了某个服务，常见于微软系统的目录管理。</li>不填写保持原有配置。
                     */
                    void SetDnsRecordType(const std::string& _dnsRecordType);

                    /**
                     * 判断参数 DnsRecordType 是否已赋值
                     * @return DnsRecordType 是否已赋值
                     */
                    bool DnsRecordTypeHasBeenSet() const;

                    /**
                     * 获取记录名称，由主机记录+站点名称组成，不填写保持原有配置。
                     * @return DnsRecordName 记录名称，由主机记录+站点名称组成，不填写保持原有配置。
                     */
                    std::string GetDnsRecordName() const;

                    /**
                     * 设置记录名称，由主机记录+站点名称组成，不填写保持原有配置。
                     * @param DnsRecordName 记录名称，由主机记录+站点名称组成，不填写保持原有配置。
                     */
                    void SetDnsRecordName(const std::string& _dnsRecordName);

                    /**
                     * 判断参数 DnsRecordName 是否已赋值
                     * @return DnsRecordName 是否已赋值
                     */
                    bool DnsRecordNameHasBeenSet() const;

                    /**
                     * 获取记录内容，不填写保持原有配置。
                     * @return Content 记录内容，不填写保持原有配置。
                     */
                    std::string GetContent() const;

                    /**
                     * 设置记录内容，不填写保持原有配置。
                     * @param Content 记录内容，不填写保持原有配置。
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取缓存时间，数值越小，修改记录各地生效时间越快，默认为300，单位：秒，不填写保持原有配置。
                     * @return TTL 缓存时间，数值越小，修改记录各地生效时间越快，默认为300，单位：秒，不填写保持原有配置。
                     */
                    int64_t GetTTL() const;

                    /**
                     * 设置缓存时间，数值越小，修改记录各地生效时间越快，默认为300，单位：秒，不填写保持原有配置。
                     * @param TTL 缓存时间，数值越小，修改记录各地生效时间越快，默认为300，单位：秒，不填写保持原有配置。
                     */
                    void SetTTL(const int64_t& _tTL);

                    /**
                     * 判断参数 TTL 是否已赋值
                     * @return TTL 是否已赋值
                     */
                    bool TTLHasBeenSet() const;

                    /**
                     * 获取该参数在修改MX记录时生效，值越小优先级越高，用户可指定值范围为1~50，不指定默认为0，不填写保持原有配置。
                     * @return Priority 该参数在修改MX记录时生效，值越小优先级越高，用户可指定值范围为1~50，不指定默认为0，不填写保持原有配置。
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置该参数在修改MX记录时生效，值越小优先级越高，用户可指定值范围为1~50，不指定默认为0，不填写保持原有配置。
                     * @param Priority 该参数在修改MX记录时生效，值越小优先级越高，用户可指定值范围为1~50，不指定默认为0，不填写保持原有配置。
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取代理模式，取值有：
<li>dns_only：仅DNS解析；</li>
<li>proxied：代理加速。</li>不填写保持原有配置。
                     * @return Mode 代理模式，取值有：
<li>dns_only：仅DNS解析；</li>
<li>proxied：代理加速。</li>不填写保持原有配置。
                     */
                    std::string GetMode() const;

                    /**
                     * 设置代理模式，取值有：
<li>dns_only：仅DNS解析；</li>
<li>proxied：代理加速。</li>不填写保持原有配置。
                     * @param Mode 代理模式，取值有：
<li>dns_only：仅DNS解析；</li>
<li>proxied：代理加速。</li>不填写保持原有配置。
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 记录ID。
                     */
                    std::string m_dnsRecordId;
                    bool m_dnsRecordIdHasBeenSet;

                    /**
                     * 站点ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * DNS记录类型，取值有：
<li>A：将域名指向一个外网 IPv4 地址，如 8.8.8.8；</li>
<li>AAAA：将域名指向一个外网 IPv6 地址；</li>
<li>MX：用于邮箱服务器，相关记录值/优先级参数由邮件注册商提供。存在多条 MX 记录时，优先级越低越优先；</li>
<li>CNAME：将域名指向另一个域名，再由该域名解析出最终 IP 地址；</li>
<li>TXT：对域名进行标识和说明，常用于域名验证和 SPF 记录（反垃圾邮件）；</li>
<li>NS：如果需要将子域名交给其他 DNS 服务商解析，则需要添加 NS 记录。根域名无法添加 NS 记录；</li>
<li>CAA：指定可为本站点颁发证书的 CA；</li>
<li>SRV：标识某台服务器使用了某个服务，常见于微软系统的目录管理。</li>不填写保持原有配置。
                     */
                    std::string m_dnsRecordType;
                    bool m_dnsRecordTypeHasBeenSet;

                    /**
                     * 记录名称，由主机记录+站点名称组成，不填写保持原有配置。
                     */
                    std::string m_dnsRecordName;
                    bool m_dnsRecordNameHasBeenSet;

                    /**
                     * 记录内容，不填写保持原有配置。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 缓存时间，数值越小，修改记录各地生效时间越快，默认为300，单位：秒，不填写保持原有配置。
                     */
                    int64_t m_tTL;
                    bool m_tTLHasBeenSet;

                    /**
                     * 该参数在修改MX记录时生效，值越小优先级越高，用户可指定值范围为1~50，不指定默认为0，不填写保持原有配置。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 代理模式，取值有：
<li>dns_only：仅DNS解析；</li>
<li>proxied：代理加速。</li>不填写保持原有配置。
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYDNSRECORDREQUEST_H_
