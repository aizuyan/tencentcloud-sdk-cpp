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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_APPUPDATEDEVICERESPONSE_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_APPUPDATEDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/AppDevice.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * AppUpdateDevice返回参数结构体
                */
                class AppUpdateDeviceResponse : public AbstractModel
                {
                public:
                    AppUpdateDeviceResponse();
                    ~AppUpdateDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备信息
                     * @return AppDevice 设备信息
                     */
                    AppDevice GetAppDevice() const;

                    /**
                     * 判断参数 AppDevice 是否已赋值
                     * @return AppDevice 是否已赋值
                     */
                    bool AppDeviceHasBeenSet() const;

                private:

                    /**
                     * 设备信息
                     */
                    AppDevice m_appDevice;
                    bool m_appDeviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_APPUPDATEDEVICERESPONSE_H_
