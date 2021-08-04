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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEAVAILABLEZONEINFORESPONSE_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEAVAILABLEZONEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfs/v20190719/model/AvailableRegion.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeAvailableZoneInfo返回参数结构体
                */
                class DescribeAvailableZoneInfoResponse : public AbstractModel
                {
                public:
                    DescribeAvailableZoneInfoResponse();
                    ~DescribeAvailableZoneInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取各可用区的资源售卖情况以及支持的存储类型、存储协议等信息
                     * @return RegionZones 各可用区的资源售卖情况以及支持的存储类型、存储协议等信息
                     */
                    std::vector<AvailableRegion> GetRegionZones() const;

                    /**
                     * 判断参数 RegionZones 是否已赋值
                     * @return RegionZones 是否已赋值
                     */
                    bool RegionZonesHasBeenSet() const;

                private:

                    /**
                     * 各可用区的资源售卖情况以及支持的存储类型、存储协议等信息
                     */
                    std::vector<AvailableRegion> m_regionZones;
                    bool m_regionZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEAVAILABLEZONEINFORESPONSE_H_
