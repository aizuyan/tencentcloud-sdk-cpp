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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYPRIVATEKEYREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYPRIVATEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * CreateTDidByPrivateKey请求参数结构体
                */
                class CreateTDidByPrivateKeyRequest : public AbstractModel
                {
                public:
                    CreateTDidByPrivateKeyRequest();
                    ~CreateTDidByPrivateKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID
                     * @param ClusterId 网络ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取群组ID
                     * @return GroupId 群组ID
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置群组ID
                     * @param GroupId 群组ID
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取私钥
                     * @return PrivateKey 私钥
                     */
                    std::string GetPrivateKey() const;

                    /**
                     * 设置私钥
                     * @param PrivateKey 私钥
                     */
                    void SetPrivateKey(const std::string& _privateKey);

                    /**
                     * 判断参数 PrivateKey 是否已赋值
                     * @return PrivateKey 是否已赋值
                     */
                    bool PrivateKeyHasBeenSet() const;

                private:

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 群组ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 私钥
                     */
                    std::string m_privateKey;
                    bool m_privateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYPRIVATEKEYREQUEST_H_
