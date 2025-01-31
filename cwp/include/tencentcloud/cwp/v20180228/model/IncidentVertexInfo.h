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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_INCIDENTVERTEXINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_INCIDENTVERTEXINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VertexInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 事件点信息
                */
                class IncidentVertexInfo : public AbstractModel
                {
                public:
                    IncidentVertexInfo();
                    ~IncidentVertexInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncidentId 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIncidentId() const;

                    /**
                     * 设置事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IncidentId 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIncidentId(const std::string& _incidentId);

                    /**
                     * 判断参数 IncidentId 是否已赋值
                     * @return IncidentId 是否已赋值
                     */
                    bool IncidentIdHasBeenSet() const;

                    /**
                     * 获取事件所在表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 事件所在表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置事件所在表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableName 事件所在表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取节点信息列表，数组项中包含节点详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Vertex 节点信息列表，数组项中包含节点详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VertexInfo> GetVertex() const;

                    /**
                     * 设置节点信息列表，数组项中包含节点详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Vertex 节点信息列表，数组项中包含节点详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVertex(const std::vector<VertexInfo>& _vertex);

                    /**
                     * 判断参数 Vertex 是否已赋值
                     * @return Vertex 是否已赋值
                     */
                    bool VertexHasBeenSet() const;

                    /**
                     * 获取节点总个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VertexCount 节点总个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetVertexCount() const;

                    /**
                     * 设置节点总个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VertexCount 节点总个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVertexCount(const int64_t& _vertexCount);

                    /**
                     * 判断参数 VertexCount 是否已赋值
                     * @return VertexCount 是否已赋值
                     */
                    bool VertexCountHasBeenSet() const;

                private:

                    /**
                     * 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_incidentId;
                    bool m_incidentIdHasBeenSet;

                    /**
                     * 事件所在表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 节点信息列表，数组项中包含节点详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VertexInfo> m_vertex;
                    bool m_vertexHasBeenSet;

                    /**
                     * 节点总个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vertexCount;
                    bool m_vertexCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_INCIDENTVERTEXINFO_H_
