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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQDEADLETTERSOURCEQUEUESRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQDEADLETTERSOURCEQUEUESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/CmqDeadLetterSource.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeCmqDeadLetterSourceQueues返回参数结构体
                */
                class DescribeCmqDeadLetterSourceQueuesResponse : public AbstractModel
                {
                public:
                    DescribeCmqDeadLetterSourceQueuesResponse();
                    ~DescribeCmqDeadLetterSourceQueuesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取满足本次条件的队列个数
                     * @return TotalCount 满足本次条件的队列个数
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取死信队列源队列
                     * @return QueueSet 死信队列源队列
                     */
                    std::vector<CmqDeadLetterSource> GetQueueSet() const;

                    /**
                     * 判断参数 QueueSet 是否已赋值
                     * @return QueueSet 是否已赋值
                     */
                    bool QueueSetHasBeenSet() const;

                private:

                    /**
                     * 满足本次条件的队列个数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 死信队列源队列
                     */
                    std::vector<CmqDeadLetterSource> m_queueSet;
                    bool m_queueSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBECMQDEADLETTERSOURCEQUEUESRESPONSE_H_
