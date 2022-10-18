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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_GETTOTALTICKETSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_GETTOTALTICKETSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/captcha/v20190722/model/CaptchaStatisticObj.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * GetTotalTicketStatistics返回参数结构体
                */
                class GetTotalTicketStatisticsResponse : public AbstractModel
                {
                public:
                    GetTotalTicketStatisticsResponse();
                    ~GetTotalTicketStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 返回数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CaptchaStatisticObj GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取返回码
                     * @return CaptchaCode 返回码
                     */
                    int64_t GetCaptchaCode() const;

                    /**
                     * 判断参数 CaptchaCode 是否已赋值
                     * @return CaptchaCode 是否已赋值
                     */
                    bool CaptchaCodeHasBeenSet() const;

                    /**
                     * 获取返回信息
                     * @return CaptchaMsg 返回信息
                     */
                    std::string GetCaptchaMsg() const;

                    /**
                     * 判断参数 CaptchaMsg 是否已赋值
                     * @return CaptchaMsg 是否已赋值
                     */
                    bool CaptchaMsgHasBeenSet() const;

                private:

                    /**
                     * 返回数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CaptchaStatisticObj m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 返回码
                     */
                    int64_t m_captchaCode;
                    bool m_captchaCodeHasBeenSet;

                    /**
                     * 返回信息
                     */
                    std::string m_captchaMsg;
                    bool m_captchaMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_GETTOTALTICKETSTATISTICSRESPONSE_H_
