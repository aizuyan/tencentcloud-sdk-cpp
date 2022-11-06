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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CreateOutputSRTSettings.h>
#include <tencentcloud/mps/v20190612/model/CreateOutputRTMPSettings.h>
#include <tencentcloud/mps/v20190612/model/CreateOutputInfoRTPSettings.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 创建输出的配置信息。
                */
                class CreateOutputInfo : public AbstractModel
                {
                public:
                    CreateOutputInfo();
                    ~CreateOutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出的名称。
                     * @return OutputName 输出的名称。
                     */
                    std::string GetOutputName() const;

                    /**
                     * 设置输出的名称。
                     * @param OutputName 输出的名称。
                     */
                    void SetOutputName(const std::string& _outputName);

                    /**
                     * 判断参数 OutputName 是否已赋值
                     * @return OutputName 是否已赋值
                     */
                    bool OutputNameHasBeenSet() const;

                    /**
                     * 获取输出描述。
                     * @return Description 输出描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置输出描述。
                     * @param Description 输出描述。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取输出协议，可选[SRT|RTP|RTMP|RTMP_PULL]。
                     * @return Protocol 输出协议，可选[SRT|RTP|RTMP|RTMP_PULL]。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置输出协议，可选[SRT|RTP|RTMP|RTMP_PULL]。
                     * @param Protocol 输出协议，可选[SRT|RTP|RTMP|RTMP_PULL]。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取输出地区。
                     * @return OutputRegion 输出地区。
                     */
                    std::string GetOutputRegion() const;

                    /**
                     * 设置输出地区。
                     * @param OutputRegion 输出地区。
                     */
                    void SetOutputRegion(const std::string& _outputRegion);

                    /**
                     * 判断参数 OutputRegion 是否已赋值
                     * @return OutputRegion 是否已赋值
                     */
                    bool OutputRegionHasBeenSet() const;

                    /**
                     * 获取输出的SRT的配置。
                     * @return SRTSettings 输出的SRT的配置。
                     */
                    CreateOutputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置输出的SRT的配置。
                     * @param SRTSettings 输出的SRT的配置。
                     */
                    void SetSRTSettings(const CreateOutputSRTSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取输出的RTMP的配置。
                     * @return RTMPSettings 输出的RTMP的配置。
                     */
                    CreateOutputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置输出的RTMP的配置。
                     * @param RTMPSettings 输出的RTMP的配置。
                     */
                    void SetRTMPSettings(const CreateOutputRTMPSettings& _rTMPSettings);

                    /**
                     * 判断参数 RTMPSettings 是否已赋值
                     * @return RTMPSettings 是否已赋值
                     */
                    bool RTMPSettingsHasBeenSet() const;

                    /**
                     * 获取输出的RTP的配置。
                     * @return RTPSettings 输出的RTP的配置。
                     */
                    CreateOutputInfoRTPSettings GetRTPSettings() const;

                    /**
                     * 设置输出的RTP的配置。
                     * @param RTPSettings 输出的RTP的配置。
                     */
                    void SetRTPSettings(const CreateOutputInfoRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取IP白名单列表，格式为CIDR，如0.0.0.0/0。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
                     * @return AllowIpList IP白名单列表，格式为CIDR，如0.0.0.0/0。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置IP白名单列表，格式为CIDR，如0.0.0.0/0。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
                     * @param AllowIpList IP白名单列表，格式为CIDR，如0.0.0.0/0。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
                     */
                    void SetAllowIpList(const std::vector<std::string>& _allowIpList);

                    /**
                     * 判断参数 AllowIpList 是否已赋值
                     * @return AllowIpList 是否已赋值
                     */
                    bool AllowIpListHasBeenSet() const;

                private:

                    /**
                     * 输出的名称。
                     */
                    std::string m_outputName;
                    bool m_outputNameHasBeenSet;

                    /**
                     * 输出描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 输出协议，可选[SRT|RTP|RTMP|RTMP_PULL]。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 输出地区。
                     */
                    std::string m_outputRegion;
                    bool m_outputRegionHasBeenSet;

                    /**
                     * 输出的SRT的配置。
                     */
                    CreateOutputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * 输出的RTMP的配置。
                     */
                    CreateOutputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * 输出的RTP的配置。
                     */
                    CreateOutputInfoRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * IP白名单列表，格式为CIDR，如0.0.0.0/0。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTINFO_H_
