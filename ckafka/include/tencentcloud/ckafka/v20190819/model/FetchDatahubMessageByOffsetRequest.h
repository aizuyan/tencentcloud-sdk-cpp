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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHDATAHUBMESSAGEBYOFFSETREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHDATAHUBMESSAGEBYOFFSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * FetchDatahubMessageByOffset请求参数结构体
                */
                class FetchDatahubMessageByOffsetRequest : public AbstractModel
                {
                public:
                    FetchDatahubMessageByOffsetRequest();
                    ~FetchDatahubMessageByOffsetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主题名
                     * @return Name 主题名
                     */
                    std::string GetName() const;

                    /**
                     * 设置主题名
                     * @param Name 主题名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分区id
                     * @return Partition 分区id
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置分区id
                     * @param Partition 分区id
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取位点信息，必填
                     * @return Offset 位点信息，必填
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置位点信息，必填
                     * @param Offset 位点信息，必填
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 主题名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分区id
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 位点信息，必填
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHDATAHUBMESSAGEBYOFFSETREQUEST_H_
