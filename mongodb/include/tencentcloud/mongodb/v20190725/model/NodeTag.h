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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_NODETAG_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_NODETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 节点Tag
                */
                class NodeTag : public AbstractModel
                {
                public:
                    NodeTag();
                    ~NodeTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点Tag key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagKey 节点Tag key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置节点Tag key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagKey 节点Tag key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取节点Tag Value
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagValue 节点Tag Value
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置节点Tag Value
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TagValue 节点Tag Value
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     */
                    bool TagValueHasBeenSet() const;

                private:

                    /**
                     * 节点Tag key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 节点Tag Value
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_NODETAG_H_
