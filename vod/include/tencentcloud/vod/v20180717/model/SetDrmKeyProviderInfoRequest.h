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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SETDRMKEYPROVIDERINFOREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SETDRMKEYPROVIDERINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SDMCDrmKeyProviderInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SetDrmKeyProviderInfo请求参数结构体
                */
                class SetDrmKeyProviderInfoRequest : public AbstractModel
                {
                public:
                    SetDrmKeyProviderInfoRequest();
                    ~SetDrmKeyProviderInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取华曦达（SDMC）相关的 DRM 密钥提供商信息。
                     * @return SDMCInfo 华曦达（SDMC）相关的 DRM 密钥提供商信息。
                     */
                    SDMCDrmKeyProviderInfo GetSDMCInfo() const;

                    /**
                     * 设置华曦达（SDMC）相关的 DRM 密钥提供商信息。
                     * @param SDMCInfo 华曦达（SDMC）相关的 DRM 密钥提供商信息。
                     */
                    void SetSDMCInfo(const SDMCDrmKeyProviderInfo& _sDMCInfo);

                    /**
                     * 判断参数 SDMCInfo 是否已赋值
                     * @return SDMCInfo 是否已赋值
                     */
                    bool SDMCInfoHasBeenSet() const;

                    /**
                     * 获取<b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * @return SubAppId <b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     * @param SubAppId <b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 华曦达（SDMC）相关的 DRM 密钥提供商信息。
                     */
                    SDMCDrmKeyProviderInfo m_sDMCInfo;
                    bool m_sDMCInfoHasBeenSet;

                    /**
                     * <b>点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SETDRMKEYPROVIDERINFOREQUEST_H_
