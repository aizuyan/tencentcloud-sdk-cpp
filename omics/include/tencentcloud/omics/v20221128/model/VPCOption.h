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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_VPCOPTION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_VPCOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 私有网络配置。
                */
                class VPCOption : public AbstractModel
                {
                public:
                    VPCOption();
                    ~VPCOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子网可用区。
                     * @return SubnetZone 子网可用区。
                     */
                    std::string GetSubnetZone() const;

                    /**
                     * 设置子网可用区。
                     * @param SubnetZone 子网可用区。
                     */
                    void SetSubnetZone(const std::string& _subnetZone);

                    /**
                     * 判断参数 SubnetZone 是否已赋值
                     * @return SubnetZone 是否已赋值
                     */
                    bool SubnetZoneHasBeenSet() const;

                    /**
                     * 获取私有网络CIDR。
                     * @return VPCCIDRBlock 私有网络CIDR。
                     */
                    std::string GetVPCCIDRBlock() const;

                    /**
                     * 设置私有网络CIDR。
                     * @param VPCCIDRBlock 私有网络CIDR。
                     */
                    void SetVPCCIDRBlock(const std::string& _vPCCIDRBlock);

                    /**
                     * 判断参数 VPCCIDRBlock 是否已赋值
                     * @return VPCCIDRBlock 是否已赋值
                     */
                    bool VPCCIDRBlockHasBeenSet() const;

                    /**
                     * 获取子网CIDR。
                     * @return SubnetCIDRBlock 子网CIDR。
                     */
                    std::string GetSubnetCIDRBlock() const;

                    /**
                     * 设置子网CIDR。
                     * @param SubnetCIDRBlock 子网CIDR。
                     */
                    void SetSubnetCIDRBlock(const std::string& _subnetCIDRBlock);

                    /**
                     * 判断参数 SubnetCIDRBlock 是否已赋值
                     * @return SubnetCIDRBlock 是否已赋值
                     */
                    bool SubnetCIDRBlockHasBeenSet() const;

                private:

                    /**
                     * 子网可用区。
                     */
                    std::string m_subnetZone;
                    bool m_subnetZoneHasBeenSet;

                    /**
                     * 私有网络CIDR。
                     */
                    std::string m_vPCCIDRBlock;
                    bool m_vPCCIDRBlockHasBeenSet;

                    /**
                     * 子网CIDR。
                     */
                    std::string m_subnetCIDRBlock;
                    bool m_subnetCIDRBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_VPCOPTION_H_
