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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_REPLICATESETINFO_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_REPLICATESETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/NodeProperty.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 副本集信息
                */
                class ReplicateSetInfo : public AbstractModel
                {
                public:
                    ReplicateSetInfo();
                    ~ReplicateSetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nodes 节点属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeProperty> GetNodes() const;

                    /**
                     * 设置节点属性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Nodes 节点属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNodes(const std::vector<NodeProperty>& _nodes);

                    /**
                     * 判断参数 Nodes 是否已赋值
                     * @return Nodes 是否已赋值
                     */
                    bool NodesHasBeenSet() const;

                private:

                    /**
                     * 节点属性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NodeProperty> m_nodes;
                    bool m_nodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_REPLICATESETINFO_H_
