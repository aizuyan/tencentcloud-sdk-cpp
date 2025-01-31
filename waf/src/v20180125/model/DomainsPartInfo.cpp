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

#include <tencentcloud/waf/v20180125/model/DomainsPartInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Waf::V20180125::Model;
using namespace std;

DomainsPartInfo::DomainsPartInfo() :
    m_httpsRewriteHasBeenSet(false),
    m_httpsUpstreamPortHasBeenSet(false),
    m_isCdnHasBeenSet(false),
    m_isGrayHasBeenSet(false),
    m_isHttp2HasBeenSet(false),
    m_isWebsocketHasBeenSet(false),
    m_loadBalanceHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_privateKeyHasBeenSet(false),
    m_sSLIdHasBeenSet(false),
    m_upstreamDomainHasBeenSet(false),
    m_upstreamTypeHasBeenSet(false),
    m_srcListHasBeenSet(false),
    m_portsHasBeenSet(false),
    m_certTypeHasBeenSet(false),
    m_upstreamSchemeHasBeenSet(false),
    m_clsHasBeenSet(false),
    m_cnameHasBeenSet(false),
    m_isKeepAliveHasBeenSet(false),
    m_activeCheckHasBeenSet(false),
    m_tLSVersionHasBeenSet(false),
    m_ciphersHasBeenSet(false),
    m_cipherTemplateHasBeenSet(false),
    m_proxyReadTimeoutHasBeenSet(false),
    m_proxySendTimeoutHasBeenSet(false),
    m_sniTypeHasBeenSet(false),
    m_sniHostHasBeenSet(false),
    m_weightsHasBeenSet(false),
    m_ipHeadersHasBeenSet(false)
{
}

CoreInternalOutcome DomainsPartInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("HttpsRewrite") && !value["HttpsRewrite"].IsNull())
    {
        if (!value["HttpsRewrite"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.HttpsRewrite` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_httpsRewrite = value["HttpsRewrite"].GetUint64();
        m_httpsRewriteHasBeenSet = true;
    }

    if (value.HasMember("HttpsUpstreamPort") && !value["HttpsUpstreamPort"].IsNull())
    {
        if (!value["HttpsUpstreamPort"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.HttpsUpstreamPort` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_httpsUpstreamPort = string(value["HttpsUpstreamPort"].GetString());
        m_httpsUpstreamPortHasBeenSet = true;
    }

    if (value.HasMember("IsCdn") && !value["IsCdn"].IsNull())
    {
        if (!value["IsCdn"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IsCdn` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isCdn = value["IsCdn"].GetUint64();
        m_isCdnHasBeenSet = true;
    }

    if (value.HasMember("IsGray") && !value["IsGray"].IsNull())
    {
        if (!value["IsGray"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IsGray` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isGray = value["IsGray"].GetUint64();
        m_isGrayHasBeenSet = true;
    }

    if (value.HasMember("IsHttp2") && !value["IsHttp2"].IsNull())
    {
        if (!value["IsHttp2"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IsHttp2` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isHttp2 = value["IsHttp2"].GetUint64();
        m_isHttp2HasBeenSet = true;
    }

    if (value.HasMember("IsWebsocket") && !value["IsWebsocket"].IsNull())
    {
        if (!value["IsWebsocket"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IsWebsocket` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isWebsocket = value["IsWebsocket"].GetUint64();
        m_isWebsocketHasBeenSet = true;
    }

    if (value.HasMember("LoadBalance") && !value["LoadBalance"].IsNull())
    {
        if (!value["LoadBalance"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.LoadBalance` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_loadBalance = value["LoadBalance"].GetUint64();
        m_loadBalanceHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Mode` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_mode = value["Mode"].GetUint64();
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("PrivateKey") && !value["PrivateKey"].IsNull())
    {
        if (!value["PrivateKey"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.PrivateKey` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_privateKey = string(value["PrivateKey"].GetString());
        m_privateKeyHasBeenSet = true;
    }

    if (value.HasMember("SSLId") && !value["SSLId"].IsNull())
    {
        if (!value["SSLId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.SSLId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sSLId = string(value["SSLId"].GetString());
        m_sSLIdHasBeenSet = true;
    }

    if (value.HasMember("UpstreamDomain") && !value["UpstreamDomain"].IsNull())
    {
        if (!value["UpstreamDomain"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.UpstreamDomain` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamDomain = string(value["UpstreamDomain"].GetString());
        m_upstreamDomainHasBeenSet = true;
    }

    if (value.HasMember("UpstreamType") && !value["UpstreamType"].IsNull())
    {
        if (!value["UpstreamType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.UpstreamType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamType = value["UpstreamType"].GetUint64();
        m_upstreamTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcList") && !value["SrcList"].IsNull())
    {
        if (!value["SrcList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.SrcList` is not array type"));

        const rapidjson::Value &tmpValue = value["SrcList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_srcList.push_back((*itr).GetString());
        }
        m_srcListHasBeenSet = true;
    }

    if (value.HasMember("Ports") && !value["Ports"].IsNull())
    {
        if (!value["Ports"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Ports` is not array type"));

        const rapidjson::Value &tmpValue = value["Ports"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            PortInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_ports.push_back(item);
        }
        m_portsHasBeenSet = true;
    }

    if (value.HasMember("CertType") && !value["CertType"].IsNull())
    {
        if (!value["CertType"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.CertType` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_certType = value["CertType"].GetUint64();
        m_certTypeHasBeenSet = true;
    }

    if (value.HasMember("UpstreamScheme") && !value["UpstreamScheme"].IsNull())
    {
        if (!value["UpstreamScheme"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.UpstreamScheme` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_upstreamScheme = string(value["UpstreamScheme"].GetString());
        m_upstreamSchemeHasBeenSet = true;
    }

    if (value.HasMember("Cls") && !value["Cls"].IsNull())
    {
        if (!value["Cls"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Cls` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_cls = value["Cls"].GetUint64();
        m_clsHasBeenSet = true;
    }

    if (value.HasMember("Cname") && !value["Cname"].IsNull())
    {
        if (!value["Cname"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Cname` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_cname = string(value["Cname"].GetString());
        m_cnameHasBeenSet = true;
    }

    if (value.HasMember("IsKeepAlive") && !value["IsKeepAlive"].IsNull())
    {
        if (!value["IsKeepAlive"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IsKeepAlive` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_isKeepAlive = value["IsKeepAlive"].GetUint64();
        m_isKeepAliveHasBeenSet = true;
    }

    if (value.HasMember("ActiveCheck") && !value["ActiveCheck"].IsNull())
    {
        if (!value["ActiveCheck"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.ActiveCheck` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_activeCheck = value["ActiveCheck"].GetUint64();
        m_activeCheckHasBeenSet = true;
    }

    if (value.HasMember("TLSVersion") && !value["TLSVersion"].IsNull())
    {
        if (!value["TLSVersion"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.TLSVersion` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_tLSVersion = value["TLSVersion"].GetInt64();
        m_tLSVersionHasBeenSet = true;
    }

    if (value.HasMember("Ciphers") && !value["Ciphers"].IsNull())
    {
        if (!value["Ciphers"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Ciphers` is not array type"));

        const rapidjson::Value &tmpValue = value["Ciphers"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ciphers.push_back((*itr).GetInt64());
        }
        m_ciphersHasBeenSet = true;
    }

    if (value.HasMember("CipherTemplate") && !value["CipherTemplate"].IsNull())
    {
        if (!value["CipherTemplate"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.CipherTemplate` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cipherTemplate = value["CipherTemplate"].GetInt64();
        m_cipherTemplateHasBeenSet = true;
    }

    if (value.HasMember("ProxyReadTimeout") && !value["ProxyReadTimeout"].IsNull())
    {
        if (!value["ProxyReadTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.ProxyReadTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxyReadTimeout = value["ProxyReadTimeout"].GetInt64();
        m_proxyReadTimeoutHasBeenSet = true;
    }

    if (value.HasMember("ProxySendTimeout") && !value["ProxySendTimeout"].IsNull())
    {
        if (!value["ProxySendTimeout"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.ProxySendTimeout` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_proxySendTimeout = value["ProxySendTimeout"].GetInt64();
        m_proxySendTimeoutHasBeenSet = true;
    }

    if (value.HasMember("SniType") && !value["SniType"].IsNull())
    {
        if (!value["SniType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.SniType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_sniType = value["SniType"].GetInt64();
        m_sniTypeHasBeenSet = true;
    }

    if (value.HasMember("SniHost") && !value["SniHost"].IsNull())
    {
        if (!value["SniHost"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.SniHost` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sniHost = string(value["SniHost"].GetString());
        m_sniHostHasBeenSet = true;
    }

    if (value.HasMember("Weights") && !value["Weights"].IsNull())
    {
        if (!value["Weights"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.Weights` is not array type"));

        const rapidjson::Value &tmpValue = value["Weights"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_weights.push_back((*itr).GetString());
        }
        m_weightsHasBeenSet = true;
    }

    if (value.HasMember("IpHeaders") && !value["IpHeaders"].IsNull())
    {
        if (!value["IpHeaders"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DomainsPartInfo.IpHeaders` is not array type"));

        const rapidjson::Value &tmpValue = value["IpHeaders"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_ipHeaders.push_back((*itr).GetString());
        }
        m_ipHeadersHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DomainsPartInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_httpsRewriteHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsRewrite";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_httpsRewrite, allocator);
    }

    if (m_httpsUpstreamPortHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HttpsUpstreamPort";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_httpsUpstreamPort.c_str(), allocator).Move(), allocator);
    }

    if (m_isCdnHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsCdn";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isCdn, allocator);
    }

    if (m_isGrayHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsGray";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isGray, allocator);
    }

    if (m_isHttp2HasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsHttp2";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isHttp2, allocator);
    }

    if (m_isWebsocketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsWebsocket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isWebsocket, allocator);
    }

    if (m_loadBalanceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LoadBalance";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_loadBalance, allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_mode, allocator);
    }

    if (m_privateKeyHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PrivateKey";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_privateKey.c_str(), allocator).Move(), allocator);
    }

    if (m_sSLIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SSLId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sSLId.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamDomainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamDomain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamDomain.c_str(), allocator).Move(), allocator);
    }

    if (m_upstreamTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_upstreamType, allocator);
    }

    if (m_srcListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_srcList.begin(); itr != m_srcList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_portsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ports";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_ports.begin(); itr != m_ports.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_certTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CertType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_certType, allocator);
    }

    if (m_upstreamSchemeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpstreamScheme";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_upstreamScheme.c_str(), allocator).Move(), allocator);
    }

    if (m_clsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cls";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cls, allocator);
    }

    if (m_cnameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Cname";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_cname.c_str(), allocator).Move(), allocator);
    }

    if (m_isKeepAliveHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IsKeepAlive";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_isKeepAlive, allocator);
    }

    if (m_activeCheckHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ActiveCheck";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_activeCheck, allocator);
    }

    if (m_tLSVersionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TLSVersion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_tLSVersion, allocator);
    }

    if (m_ciphersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ciphers";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ciphers.begin(); itr != m_ciphers.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetInt64(*itr), allocator);
        }
    }

    if (m_cipherTemplateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CipherTemplate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cipherTemplate, allocator);
    }

    if (m_proxyReadTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxyReadTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxyReadTimeout, allocator);
    }

    if (m_proxySendTimeoutHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProxySendTimeout";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_proxySendTimeout, allocator);
    }

    if (m_sniTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SniType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_sniType, allocator);
    }

    if (m_sniHostHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SniHost";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sniHost.c_str(), allocator).Move(), allocator);
    }

    if (m_weightsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Weights";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_weights.begin(); itr != m_weights.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_ipHeadersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IpHeaders";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_ipHeaders.begin(); itr != m_ipHeaders.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


uint64_t DomainsPartInfo::GetHttpsRewrite() const
{
    return m_httpsRewrite;
}

void DomainsPartInfo::SetHttpsRewrite(const uint64_t& _httpsRewrite)
{
    m_httpsRewrite = _httpsRewrite;
    m_httpsRewriteHasBeenSet = true;
}

bool DomainsPartInfo::HttpsRewriteHasBeenSet() const
{
    return m_httpsRewriteHasBeenSet;
}

string DomainsPartInfo::GetHttpsUpstreamPort() const
{
    return m_httpsUpstreamPort;
}

void DomainsPartInfo::SetHttpsUpstreamPort(const string& _httpsUpstreamPort)
{
    m_httpsUpstreamPort = _httpsUpstreamPort;
    m_httpsUpstreamPortHasBeenSet = true;
}

bool DomainsPartInfo::HttpsUpstreamPortHasBeenSet() const
{
    return m_httpsUpstreamPortHasBeenSet;
}

uint64_t DomainsPartInfo::GetIsCdn() const
{
    return m_isCdn;
}

void DomainsPartInfo::SetIsCdn(const uint64_t& _isCdn)
{
    m_isCdn = _isCdn;
    m_isCdnHasBeenSet = true;
}

bool DomainsPartInfo::IsCdnHasBeenSet() const
{
    return m_isCdnHasBeenSet;
}

uint64_t DomainsPartInfo::GetIsGray() const
{
    return m_isGray;
}

void DomainsPartInfo::SetIsGray(const uint64_t& _isGray)
{
    m_isGray = _isGray;
    m_isGrayHasBeenSet = true;
}

bool DomainsPartInfo::IsGrayHasBeenSet() const
{
    return m_isGrayHasBeenSet;
}

uint64_t DomainsPartInfo::GetIsHttp2() const
{
    return m_isHttp2;
}

void DomainsPartInfo::SetIsHttp2(const uint64_t& _isHttp2)
{
    m_isHttp2 = _isHttp2;
    m_isHttp2HasBeenSet = true;
}

bool DomainsPartInfo::IsHttp2HasBeenSet() const
{
    return m_isHttp2HasBeenSet;
}

uint64_t DomainsPartInfo::GetIsWebsocket() const
{
    return m_isWebsocket;
}

void DomainsPartInfo::SetIsWebsocket(const uint64_t& _isWebsocket)
{
    m_isWebsocket = _isWebsocket;
    m_isWebsocketHasBeenSet = true;
}

bool DomainsPartInfo::IsWebsocketHasBeenSet() const
{
    return m_isWebsocketHasBeenSet;
}

uint64_t DomainsPartInfo::GetLoadBalance() const
{
    return m_loadBalance;
}

void DomainsPartInfo::SetLoadBalance(const uint64_t& _loadBalance)
{
    m_loadBalance = _loadBalance;
    m_loadBalanceHasBeenSet = true;
}

bool DomainsPartInfo::LoadBalanceHasBeenSet() const
{
    return m_loadBalanceHasBeenSet;
}

uint64_t DomainsPartInfo::GetMode() const
{
    return m_mode;
}

void DomainsPartInfo::SetMode(const uint64_t& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool DomainsPartInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

string DomainsPartInfo::GetPrivateKey() const
{
    return m_privateKey;
}

void DomainsPartInfo::SetPrivateKey(const string& _privateKey)
{
    m_privateKey = _privateKey;
    m_privateKeyHasBeenSet = true;
}

bool DomainsPartInfo::PrivateKeyHasBeenSet() const
{
    return m_privateKeyHasBeenSet;
}

string DomainsPartInfo::GetSSLId() const
{
    return m_sSLId;
}

void DomainsPartInfo::SetSSLId(const string& _sSLId)
{
    m_sSLId = _sSLId;
    m_sSLIdHasBeenSet = true;
}

bool DomainsPartInfo::SSLIdHasBeenSet() const
{
    return m_sSLIdHasBeenSet;
}

string DomainsPartInfo::GetUpstreamDomain() const
{
    return m_upstreamDomain;
}

void DomainsPartInfo::SetUpstreamDomain(const string& _upstreamDomain)
{
    m_upstreamDomain = _upstreamDomain;
    m_upstreamDomainHasBeenSet = true;
}

bool DomainsPartInfo::UpstreamDomainHasBeenSet() const
{
    return m_upstreamDomainHasBeenSet;
}

uint64_t DomainsPartInfo::GetUpstreamType() const
{
    return m_upstreamType;
}

void DomainsPartInfo::SetUpstreamType(const uint64_t& _upstreamType)
{
    m_upstreamType = _upstreamType;
    m_upstreamTypeHasBeenSet = true;
}

bool DomainsPartInfo::UpstreamTypeHasBeenSet() const
{
    return m_upstreamTypeHasBeenSet;
}

vector<string> DomainsPartInfo::GetSrcList() const
{
    return m_srcList;
}

void DomainsPartInfo::SetSrcList(const vector<string>& _srcList)
{
    m_srcList = _srcList;
    m_srcListHasBeenSet = true;
}

bool DomainsPartInfo::SrcListHasBeenSet() const
{
    return m_srcListHasBeenSet;
}

vector<PortInfo> DomainsPartInfo::GetPorts() const
{
    return m_ports;
}

void DomainsPartInfo::SetPorts(const vector<PortInfo>& _ports)
{
    m_ports = _ports;
    m_portsHasBeenSet = true;
}

bool DomainsPartInfo::PortsHasBeenSet() const
{
    return m_portsHasBeenSet;
}

uint64_t DomainsPartInfo::GetCertType() const
{
    return m_certType;
}

void DomainsPartInfo::SetCertType(const uint64_t& _certType)
{
    m_certType = _certType;
    m_certTypeHasBeenSet = true;
}

bool DomainsPartInfo::CertTypeHasBeenSet() const
{
    return m_certTypeHasBeenSet;
}

string DomainsPartInfo::GetUpstreamScheme() const
{
    return m_upstreamScheme;
}

void DomainsPartInfo::SetUpstreamScheme(const string& _upstreamScheme)
{
    m_upstreamScheme = _upstreamScheme;
    m_upstreamSchemeHasBeenSet = true;
}

bool DomainsPartInfo::UpstreamSchemeHasBeenSet() const
{
    return m_upstreamSchemeHasBeenSet;
}

uint64_t DomainsPartInfo::GetCls() const
{
    return m_cls;
}

void DomainsPartInfo::SetCls(const uint64_t& _cls)
{
    m_cls = _cls;
    m_clsHasBeenSet = true;
}

bool DomainsPartInfo::ClsHasBeenSet() const
{
    return m_clsHasBeenSet;
}

string DomainsPartInfo::GetCname() const
{
    return m_cname;
}

void DomainsPartInfo::SetCname(const string& _cname)
{
    m_cname = _cname;
    m_cnameHasBeenSet = true;
}

bool DomainsPartInfo::CnameHasBeenSet() const
{
    return m_cnameHasBeenSet;
}

uint64_t DomainsPartInfo::GetIsKeepAlive() const
{
    return m_isKeepAlive;
}

void DomainsPartInfo::SetIsKeepAlive(const uint64_t& _isKeepAlive)
{
    m_isKeepAlive = _isKeepAlive;
    m_isKeepAliveHasBeenSet = true;
}

bool DomainsPartInfo::IsKeepAliveHasBeenSet() const
{
    return m_isKeepAliveHasBeenSet;
}

uint64_t DomainsPartInfo::GetActiveCheck() const
{
    return m_activeCheck;
}

void DomainsPartInfo::SetActiveCheck(const uint64_t& _activeCheck)
{
    m_activeCheck = _activeCheck;
    m_activeCheckHasBeenSet = true;
}

bool DomainsPartInfo::ActiveCheckHasBeenSet() const
{
    return m_activeCheckHasBeenSet;
}

int64_t DomainsPartInfo::GetTLSVersion() const
{
    return m_tLSVersion;
}

void DomainsPartInfo::SetTLSVersion(const int64_t& _tLSVersion)
{
    m_tLSVersion = _tLSVersion;
    m_tLSVersionHasBeenSet = true;
}

bool DomainsPartInfo::TLSVersionHasBeenSet() const
{
    return m_tLSVersionHasBeenSet;
}

vector<int64_t> DomainsPartInfo::GetCiphers() const
{
    return m_ciphers;
}

void DomainsPartInfo::SetCiphers(const vector<int64_t>& _ciphers)
{
    m_ciphers = _ciphers;
    m_ciphersHasBeenSet = true;
}

bool DomainsPartInfo::CiphersHasBeenSet() const
{
    return m_ciphersHasBeenSet;
}

int64_t DomainsPartInfo::GetCipherTemplate() const
{
    return m_cipherTemplate;
}

void DomainsPartInfo::SetCipherTemplate(const int64_t& _cipherTemplate)
{
    m_cipherTemplate = _cipherTemplate;
    m_cipherTemplateHasBeenSet = true;
}

bool DomainsPartInfo::CipherTemplateHasBeenSet() const
{
    return m_cipherTemplateHasBeenSet;
}

int64_t DomainsPartInfo::GetProxyReadTimeout() const
{
    return m_proxyReadTimeout;
}

void DomainsPartInfo::SetProxyReadTimeout(const int64_t& _proxyReadTimeout)
{
    m_proxyReadTimeout = _proxyReadTimeout;
    m_proxyReadTimeoutHasBeenSet = true;
}

bool DomainsPartInfo::ProxyReadTimeoutHasBeenSet() const
{
    return m_proxyReadTimeoutHasBeenSet;
}

int64_t DomainsPartInfo::GetProxySendTimeout() const
{
    return m_proxySendTimeout;
}

void DomainsPartInfo::SetProxySendTimeout(const int64_t& _proxySendTimeout)
{
    m_proxySendTimeout = _proxySendTimeout;
    m_proxySendTimeoutHasBeenSet = true;
}

bool DomainsPartInfo::ProxySendTimeoutHasBeenSet() const
{
    return m_proxySendTimeoutHasBeenSet;
}

int64_t DomainsPartInfo::GetSniType() const
{
    return m_sniType;
}

void DomainsPartInfo::SetSniType(const int64_t& _sniType)
{
    m_sniType = _sniType;
    m_sniTypeHasBeenSet = true;
}

bool DomainsPartInfo::SniTypeHasBeenSet() const
{
    return m_sniTypeHasBeenSet;
}

string DomainsPartInfo::GetSniHost() const
{
    return m_sniHost;
}

void DomainsPartInfo::SetSniHost(const string& _sniHost)
{
    m_sniHost = _sniHost;
    m_sniHostHasBeenSet = true;
}

bool DomainsPartInfo::SniHostHasBeenSet() const
{
    return m_sniHostHasBeenSet;
}

vector<string> DomainsPartInfo::GetWeights() const
{
    return m_weights;
}

void DomainsPartInfo::SetWeights(const vector<string>& _weights)
{
    m_weights = _weights;
    m_weightsHasBeenSet = true;
}

bool DomainsPartInfo::WeightsHasBeenSet() const
{
    return m_weightsHasBeenSet;
}

vector<string> DomainsPartInfo::GetIpHeaders() const
{
    return m_ipHeaders;
}

void DomainsPartInfo::SetIpHeaders(const vector<string>& _ipHeaders)
{
    m_ipHeaders = _ipHeaders;
    m_ipHeadersHasBeenSet = true;
}

bool DomainsPartInfo::IpHeadersHasBeenSet() const
{
    return m_ipHeadersHasBeenSet;
}

