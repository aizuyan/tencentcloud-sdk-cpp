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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHCMQMSGRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHCMQMSGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * PublishCmqMsg返回参数结构体
                */
                class PublishCmqMsgResponse : public AbstractModel
                {
                public:
                    PublishCmqMsgResponse();
                    ~PublishCmqMsgResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取true表示发送成功
                     * @return Result true表示发送成功
                     */
                    bool GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取消息id
                     * @return MsgId 消息id
                     */
                    std::string GetMsgId() const;

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     */
                    bool MsgIdHasBeenSet() const;

                private:

                    /**
                     * true表示发送成功
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 消息id
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PUBLISHCMQMSGRESPONSE_H_
