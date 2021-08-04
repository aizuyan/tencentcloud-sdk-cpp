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

#ifndef TENCENTCLOUD_SMPN_V20190822_MODEL_CREATESMPNEPARESPONSE_H_
#define TENCENTCLOUD_SMPN_V20190822_MODEL_CREATESMPNEPARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/smpn/v20190822/model/EPAResponse.h>


namespace TencentCloud
{
    namespace Smpn
    {
        namespace V20190822
        {
            namespace Model
            {
                /**
                * CreateSmpnEpa返回参数结构体
                */
                class CreateSmpnEpaResponse : public AbstractModel
                {
                public:
                    CreateSmpnEpaResponse();
                    ~CreateSmpnEpaResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取业号码认证回应内容
                     * @return ResponseData 业号码认证回应内容
                     */
                    EPAResponse GetResponseData() const;

                    /**
                     * 判断参数 ResponseData 是否已赋值
                     * @return ResponseData 是否已赋值
                     */
                    bool ResponseDataHasBeenSet() const;

                private:

                    /**
                     * 业号码认证回应内容
                     */
                    EPAResponse m_responseData;
                    bool m_responseDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMPN_V20190822_MODEL_CREATESMPNEPARESPONSE_H_
