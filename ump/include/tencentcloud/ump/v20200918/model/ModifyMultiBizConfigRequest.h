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

#ifndef TENCENTCLOUD_UMP_V20200918_MODEL_MODIFYMULTIBIZCONFIGREQUEST_H_
#define TENCENTCLOUD_UMP_V20200918_MODEL_MODIFYMULTIBIZCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ump/v20200918/model/Polygon.h>


namespace TencentCloud
{
    namespace Ump
    {
        namespace V20200918
        {
            namespace Model
            {
                /**
                * ModifyMultiBizConfig请求参数结构体
                */
                class ModifyMultiBizConfigRequest : public AbstractModel
                {
                public:
                    ModifyMultiBizConfigRequest();
                    ~ModifyMultiBizConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集团编码
                     * @return GroupCode 集团编码
                     */
                    std::string GetGroupCode() const;

                    /**
                     * 设置集团编码
                     * @param GroupCode 集团编码
                     */
                    void SetGroupCode(const std::string& _groupCode);

                    /**
                     * 判断参数 GroupCode 是否已赋值
                     * @return GroupCode 是否已赋值
                     */
                    bool GroupCodeHasBeenSet() const;

                    /**
                     * 获取广场ID
                     * @return MallId 广场ID
                     */
                    uint64_t GetMallId() const;

                    /**
                     * 设置广场ID
                     * @param MallId 广场ID
                     */
                    void SetMallId(const uint64_t& _mallId);

                    /**
                     * 判断参数 MallId 是否已赋值
                     * @return MallId 是否已赋值
                     */
                    bool MallIdHasBeenSet() const;

                    /**
                     * 获取点位ID
                     * @return ZoneId 点位ID
                     */
                    uint64_t GetZoneId() const;

                    /**
                     * 设置点位ID
                     * @param ZoneId 点位ID
                     */
                    void SetZoneId(const uint64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取摄像头ID
                     * @return CameraId 摄像头ID
                     */
                    uint64_t GetCameraId() const;

                    /**
                     * 设置摄像头ID
                     * @param CameraId 摄像头ID
                     */
                    void SetCameraId(const uint64_t& _cameraId);

                    /**
                     * 判断参数 CameraId 是否已赋值
                     * @return CameraId 是否已赋值
                     */
                    bool CameraIdHasBeenSet() const;

                    /**
                     * 获取监控区域
                     * @return MonitoringAreas 监控区域
                     */
                    std::vector<Polygon> GetMonitoringAreas() const;

                    /**
                     * 设置监控区域
                     * @param MonitoringAreas 监控区域
                     */
                    void SetMonitoringAreas(const std::vector<Polygon>& _monitoringAreas);

                    /**
                     * 判断参数 MonitoringAreas 是否已赋值
                     * @return MonitoringAreas 是否已赋值
                     */
                    bool MonitoringAreasHasBeenSet() const;

                private:

                    /**
                     * 集团编码
                     */
                    std::string m_groupCode;
                    bool m_groupCodeHasBeenSet;

                    /**
                     * 广场ID
                     */
                    uint64_t m_mallId;
                    bool m_mallIdHasBeenSet;

                    /**
                     * 点位ID
                     */
                    uint64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 摄像头ID
                     */
                    uint64_t m_cameraId;
                    bool m_cameraIdHasBeenSet;

                    /**
                     * 监控区域
                     */
                    std::vector<Polygon> m_monitoringAreas;
                    bool m_monitoringAreasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_UMP_V20200918_MODEL_MODIFYMULTIBIZCONFIGREQUEST_H_
