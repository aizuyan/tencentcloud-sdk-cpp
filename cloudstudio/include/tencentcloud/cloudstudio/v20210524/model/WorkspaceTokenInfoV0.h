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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACETOKENINFOV0_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACETOKENINFOV0_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 获取工作空间临时访问 token 出参
                */
                class WorkspaceTokenInfoV0 : public AbstractModel
                {
                public:
                    WorkspaceTokenInfoV0();
                    ~WorkspaceTokenInfoV0() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问工作空间临时凭证
                     * @return Token 访问工作空间临时凭证
                     */
                    std::string GetToken() const;

                    /**
                     * 设置访问工作空间临时凭证
                     * @param Token 访问工作空间临时凭证
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取token 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpiredTime token 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置token 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpiredTime token 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 访问工作空间临时凭证
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * token 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACETOKENINFOV0_H_
