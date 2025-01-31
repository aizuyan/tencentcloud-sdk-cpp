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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * CreateVulScanTask请求参数结构体
                */
                class CreateVulScanTaskRequest : public AbstractModel
                {
                public:
                    CreateVulScanTaskRequest();
                    ~CreateVulScanTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本地镜像扫描范围类型。ALL:全部本地镜像，NOT_SCAN：全部已授权未扫描本地镜像，IMAGEIDS:自选本地镜像ID
                     * @return LocalImageScanType 本地镜像扫描范围类型。ALL:全部本地镜像，NOT_SCAN：全部已授权未扫描本地镜像，IMAGEIDS:自选本地镜像ID
                     */
                    std::string GetLocalImageScanType() const;

                    /**
                     * 设置本地镜像扫描范围类型。ALL:全部本地镜像，NOT_SCAN：全部已授权未扫描本地镜像，IMAGEIDS:自选本地镜像ID
                     * @param LocalImageScanType 本地镜像扫描范围类型。ALL:全部本地镜像，NOT_SCAN：全部已授权未扫描本地镜像，IMAGEIDS:自选本地镜像ID
                     */
                    void SetLocalImageScanType(const std::string& _localImageScanType);

                    /**
                     * 判断参数 LocalImageScanType 是否已赋值
                     * @return LocalImageScanType 是否已赋值
                     */
                    bool LocalImageScanTypeHasBeenSet() const;

                    /**
                     * 获取根据已授权的本地镜像IDs扫描，优先权高于根据满足条件的已授权的本地镜像。
                     * @return LocalImageIDs 根据已授权的本地镜像IDs扫描，优先权高于根据满足条件的已授权的本地镜像。
                     */
                    std::vector<std::string> GetLocalImageIDs() const;

                    /**
                     * 设置根据已授权的本地镜像IDs扫描，优先权高于根据满足条件的已授权的本地镜像。
                     * @param LocalImageIDs 根据已授权的本地镜像IDs扫描，优先权高于根据满足条件的已授权的本地镜像。
                     */
                    void SetLocalImageIDs(const std::vector<std::string>& _localImageIDs);

                    /**
                     * 判断参数 LocalImageIDs 是否已赋值
                     * @return LocalImageIDs 是否已赋值
                     */
                    bool LocalImageIDsHasBeenSet() const;

                    /**
                     * 获取仓库镜像扫描范围类型。ALL:全部仓库镜像，NOT_SCAN：全部已授权未扫描仓库镜像，IMAGEIDS:自选仓库镜像ID
                     * @return RegistryImageScanType 仓库镜像扫描范围类型。ALL:全部仓库镜像，NOT_SCAN：全部已授权未扫描仓库镜像，IMAGEIDS:自选仓库镜像ID
                     */
                    std::string GetRegistryImageScanType() const;

                    /**
                     * 设置仓库镜像扫描范围类型。ALL:全部仓库镜像，NOT_SCAN：全部已授权未扫描仓库镜像，IMAGEIDS:自选仓库镜像ID
                     * @param RegistryImageScanType 仓库镜像扫描范围类型。ALL:全部仓库镜像，NOT_SCAN：全部已授权未扫描仓库镜像，IMAGEIDS:自选仓库镜像ID
                     */
                    void SetRegistryImageScanType(const std::string& _registryImageScanType);

                    /**
                     * 判断参数 RegistryImageScanType 是否已赋值
                     * @return RegistryImageScanType 是否已赋值
                     */
                    bool RegistryImageScanTypeHasBeenSet() const;

                    /**
                     * 获取根据已授权的仓库镜像IDs扫描，优先权高于根据满足条件的已授权的仓库镜像。
                     * @return RegistryImageIDs 根据已授权的仓库镜像IDs扫描，优先权高于根据满足条件的已授权的仓库镜像。
                     */
                    std::vector<uint64_t> GetRegistryImageIDs() const;

                    /**
                     * 设置根据已授权的仓库镜像IDs扫描，优先权高于根据满足条件的已授权的仓库镜像。
                     * @param RegistryImageIDs 根据已授权的仓库镜像IDs扫描，优先权高于根据满足条件的已授权的仓库镜像。
                     */
                    void SetRegistryImageIDs(const std::vector<uint64_t>& _registryImageIDs);

                    /**
                     * 判断参数 RegistryImageIDs 是否已赋值
                     * @return RegistryImageIDs 是否已赋值
                     */
                    bool RegistryImageIDsHasBeenSet() const;

                    /**
                     * 获取本地镜像重新漏洞扫描时的任务ID
                     * @return LocalTaskID 本地镜像重新漏洞扫描时的任务ID
                     */
                    int64_t GetLocalTaskID() const;

                    /**
                     * 设置本地镜像重新漏洞扫描时的任务ID
                     * @param LocalTaskID 本地镜像重新漏洞扫描时的任务ID
                     */
                    void SetLocalTaskID(const int64_t& _localTaskID);

                    /**
                     * 判断参数 LocalTaskID 是否已赋值
                     * @return LocalTaskID 是否已赋值
                     */
                    bool LocalTaskIDHasBeenSet() const;

                    /**
                     * 获取仓库镜像重新漏洞扫描时的任务ID
                     * @return RegistryTaskID 仓库镜像重新漏洞扫描时的任务ID
                     */
                    int64_t GetRegistryTaskID() const;

                    /**
                     * 设置仓库镜像重新漏洞扫描时的任务ID
                     * @param RegistryTaskID 仓库镜像重新漏洞扫描时的任务ID
                     */
                    void SetRegistryTaskID(const int64_t& _registryTaskID);

                    /**
                     * 判断参数 RegistryTaskID 是否已赋值
                     * @return RegistryTaskID 是否已赋值
                     */
                    bool RegistryTaskIDHasBeenSet() const;

                private:

                    /**
                     * 本地镜像扫描范围类型。ALL:全部本地镜像，NOT_SCAN：全部已授权未扫描本地镜像，IMAGEIDS:自选本地镜像ID
                     */
                    std::string m_localImageScanType;
                    bool m_localImageScanTypeHasBeenSet;

                    /**
                     * 根据已授权的本地镜像IDs扫描，优先权高于根据满足条件的已授权的本地镜像。
                     */
                    std::vector<std::string> m_localImageIDs;
                    bool m_localImageIDsHasBeenSet;

                    /**
                     * 仓库镜像扫描范围类型。ALL:全部仓库镜像，NOT_SCAN：全部已授权未扫描仓库镜像，IMAGEIDS:自选仓库镜像ID
                     */
                    std::string m_registryImageScanType;
                    bool m_registryImageScanTypeHasBeenSet;

                    /**
                     * 根据已授权的仓库镜像IDs扫描，优先权高于根据满足条件的已授权的仓库镜像。
                     */
                    std::vector<uint64_t> m_registryImageIDs;
                    bool m_registryImageIDsHasBeenSet;

                    /**
                     * 本地镜像重新漏洞扫描时的任务ID
                     */
                    int64_t m_localTaskID;
                    bool m_localTaskIDHasBeenSet;

                    /**
                     * 仓库镜像重新漏洞扫描时的任务ID
                     */
                    int64_t m_registryTaskID;
                    bool m_registryTaskIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_CREATEVULSCANTASKREQUEST_H_
