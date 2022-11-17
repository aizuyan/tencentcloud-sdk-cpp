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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETPUBLICKEYRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETPUBLICKEYRESPONSE_H_

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
                * GetPublicKey返回参数结构体
                */
                class GetPublicKeyResponse : public AbstractModel
                {
                public:
                    GetPublicKeyResponse();
                    ~GetPublicKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DID的具体信息
                     * @return Did DID的具体信息
                     */
                    std::string GetDid() const;

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取公钥
                     * @return PublicKey 公钥
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     */
                    bool PublicKeyHasBeenSet() const;

                private:

                    /**
                     * DID的具体信息
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * 公钥
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETPUBLICKEYRESPONSE_H_
