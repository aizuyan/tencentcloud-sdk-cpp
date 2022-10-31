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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_TABLEITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_TABLEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 表图对象集合，当 TableMode 为 partial 时，此项需要填写
                */
                class TableItem : public AbstractModel
                {
                public:
                    TableItem();
                    ~TableItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取迁移的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableName 迁移的表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置迁移的表名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableName 迁移的表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取迁移后的表名，当TableEditMode为rename时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewTableName 迁移后的表名，当TableEditMode为rename时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNewTableName() const;

                    /**
                     * 设置迁移后的表名，当TableEditMode为rename时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NewTableName 迁移后的表名，当TableEditMode为rename时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNewTableName(const std::string& _newTableName);

                    /**
                     * 判断参数 NewTableName 是否已赋值
                     * @return NewTableName 是否已赋值
                     */
                    bool NewTableNameHasBeenSet() const;

                    /**
                     * 获取迁移临时表，针对pt-osc等工具在迁移过程中产生的临时表同步，需要提前将可能的临时表配置在这里，当TableEditMode为pt时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TmpTables 迁移临时表，针对pt-osc等工具在迁移过程中产生的临时表同步，需要提前将可能的临时表配置在这里，当TableEditMode为pt时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTmpTables() const;

                    /**
                     * 设置迁移临时表，针对pt-osc等工具在迁移过程中产生的临时表同步，需要提前将可能的临时表配置在这里，当TableEditMode为pt时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TmpTables 迁移临时表，针对pt-osc等工具在迁移过程中产生的临时表同步，需要提前将可能的临时表配置在这里，当TableEditMode为pt时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTmpTables(const std::vector<std::string>& _tmpTables);

                    /**
                     * 判断参数 TmpTables 是否已赋值
                     * @return TmpTables 是否已赋值
                     */
                    bool TmpTablesHasBeenSet() const;

                    /**
                     * 获取编辑表类型，rename(表映射)，pt(同步附加表)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableEditMode 编辑表类型，rename(表映射)，pt(同步附加表)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableEditMode() const;

                    /**
                     * 设置编辑表类型，rename(表映射)，pt(同步附加表)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableEditMode 编辑表类型，rename(表映射)，pt(同步附加表)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableEditMode(const std::string& _tableEditMode);

                    /**
                     * 判断参数 TableEditMode 是否已赋值
                     * @return TableEditMode 是否已赋值
                     */
                    bool TableEditModeHasBeenSet() const;

                private:

                    /**
                     * 迁移的表名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 迁移后的表名，当TableEditMode为rename时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newTableName;
                    bool m_newTableNameHasBeenSet;

                    /**
                     * 迁移临时表，针对pt-osc等工具在迁移过程中产生的临时表同步，需要提前将可能的临时表配置在这里，当TableEditMode为pt时此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tmpTables;
                    bool m_tmpTablesHasBeenSet;

                    /**
                     * 编辑表类型，rename(表映射)，pt(同步附加表)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableEditMode;
                    bool m_tableEditModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_TABLEITEM_H_
