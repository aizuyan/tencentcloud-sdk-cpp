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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPOFFLINEATTACHMENTREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPOFFLINEATTACHMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * CreateBPOfflineAttachment请求参数结构体
                */
                class CreateBPOfflineAttachmentRequest : public AbstractModel
                {
                public:
                    CreateBPOfflineAttachmentRequest();
                    ~CreateBPOfflineAttachmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取xxx
                     * @return BrandName xxx
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置xxx
                     * @param BrandName xxx
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return BrandCertificateName xx
                     */
                    std::string GetBrandCertificateName() const;

                    /**
                     * 设置xx
                     * @param BrandCertificateName xx
                     */
                    void SetBrandCertificateName(const std::string& _brandCertificateName);

                    /**
                     * 判断参数 BrandCertificateName 是否已赋值
                     * @return BrandCertificateName 是否已赋值
                     */
                    bool BrandCertificateNameHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return TransferName xx
                     */
                    std::string GetTransferName() const;

                    /**
                     * 设置xx
                     * @param TransferName xx
                     */
                    void SetTransferName(const std::string& _transferName);

                    /**
                     * 判断参数 TransferName 是否已赋值
                     * @return TransferName 是否已赋值
                     */
                    bool TransferNameHasBeenSet() const;

                    /**
                     * 获取xx
                     * @return AuthorizationName xx
                     */
                    std::string GetAuthorizationName() const;

                    /**
                     * 设置xx
                     * @param AuthorizationName xx
                     */
                    void SetAuthorizationName(const std::string& _authorizationName);

                    /**
                     * 判断参数 AuthorizationName 是否已赋值
                     * @return AuthorizationName 是否已赋值
                     */
                    bool AuthorizationNameHasBeenSet() const;

                private:

                    /**
                     * xxx
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_brandCertificateName;
                    bool m_brandCertificateNameHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_transferName;
                    bool m_transferNameHasBeenSet;

                    /**
                     * xx
                     */
                    std::string m_authorizationName;
                    bool m_authorizationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPOFFLINEATTACHMENTREQUEST_H_
