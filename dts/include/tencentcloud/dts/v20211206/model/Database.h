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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DATABASE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Table.h>
#include <tencentcloud/dts/v20211206/model/View.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 需要同步的库表对象
                */
                class Database : public AbstractModel
                {
                public:
                    Database();
                    ~Database() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要迁移或同步的库名，当ObjectMode为Partial时，此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbName 需要迁移或同步的库名，当ObjectMode为Partial时，此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置需要迁移或同步的库名，当ObjectMode为Partial时，此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DbName 需要迁移或同步的库名，当ObjectMode为Partial时，此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取迁移或同步后的库名，默认与源库相同
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewDbName 迁移或同步后的库名，默认与源库相同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNewDbName() const;

                    /**
                     * 设置迁移或同步后的库名，默认与源库相同
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NewDbName 迁移或同步后的库名，默认与源库相同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNewDbName(const std::string& _newDbName);

                    /**
                     * 判断参数 NewDbName 是否已赋值
                     * @return NewDbName 是否已赋值
                     */
                    bool NewDbNameHasBeenSet() const;

                    /**
                     * 获取DB选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当Mode为Partial时，此项必填。注意，高级对象的同步不依赖此值，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbMode DB选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当Mode为Partial时，此项必填。注意，高级对象的同步不依赖此值，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDbMode() const;

                    /**
                     * 设置DB选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当Mode为Partial时，此项必填。注意，高级对象的同步不依赖此值，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DbMode DB选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当Mode为Partial时，此项必填。注意，高级对象的同步不依赖此值，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDbMode(const std::string& _dbMode);

                    /**
                     * 判断参数 DbMode 是否已赋值
                     * @return DbMode 是否已赋值
                     */
                    bool DbModeHasBeenSet() const;

                    /**
                     * 获取迁移或同步的 schema
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchemaName 迁移或同步的 schema
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置迁移或同步的 schema
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SchemaName 迁移或同步的 schema
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取迁移或同步后的 schema name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NewSchemaName 迁移或同步后的 schema name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNewSchemaName() const;

                    /**
                     * 设置迁移或同步后的 schema name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param NewSchemaName 迁移或同步后的 schema name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNewSchemaName(const std::string& _newSchemaName);

                    /**
                     * 判断参数 NewSchemaName 是否已赋值
                     * @return NewSchemaName 是否已赋值
                     */
                    bool NewSchemaNameHasBeenSet() const;

                    /**
                     * 获取表选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当DBMode为Partial时此项必填，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableMode 表选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当DBMode为Partial时此项必填，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTableMode() const;

                    /**
                     * 设置表选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当DBMode为Partial时此项必填，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableMode 表选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当DBMode为Partial时此项必填，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableMode(const std::string& _tableMode);

                    /**
                     * 判断参数 TableMode 是否已赋值
                     * @return TableMode 是否已赋值
                     */
                    bool TableModeHasBeenSet() const;

                    /**
                     * 获取表图对象集合，当 TableMode 为 Partial 时，此项需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tables 表图对象集合，当 TableMode 为 Partial 时，此项需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Table> GetTables() const;

                    /**
                     * 设置表图对象集合，当 TableMode 为 Partial 时，此项需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tables 表图对象集合，当 TableMode 为 Partial 时，此项需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTables(const std::vector<Table>& _tables);

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     */
                    bool TablesHasBeenSet() const;

                    /**
                     * 获取视图选择模式: All 为当前对象下的所有视图对象,Partial 为部分视图对象，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ViewMode 视图选择模式: All 为当前对象下的所有视图对象,Partial 为部分视图对象，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetViewMode() const;

                    /**
                     * 设置视图选择模式: All 为当前对象下的所有视图对象,Partial 为部分视图对象，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ViewMode 视图选择模式: All 为当前对象下的所有视图对象,Partial 为部分视图对象，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetViewMode(const std::string& _viewMode);

                    /**
                     * 判断参数 ViewMode 是否已赋值
                     * @return ViewMode 是否已赋值
                     */
                    bool ViewModeHasBeenSet() const;

                    /**
                     * 获取视图对象集合，当 ViewMode 为 Partial 时， 此项需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Views 视图对象集合，当 ViewMode 为 Partial 时， 此项需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<View> GetViews() const;

                    /**
                     * 设置视图对象集合，当 ViewMode 为 Partial 时， 此项需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Views 视图对象集合，当 ViewMode 为 Partial 时， 此项需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetViews(const std::vector<View>& _views);

                    /**
                     * 判断参数 Views 是否已赋值
                     * @return Views 是否已赋值
                     */
                    bool ViewsHasBeenSet() const;

                    /**
                     * 获取选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FunctionMode 选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFunctionMode() const;

                    /**
                     * 设置选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FunctionMode 选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFunctionMode(const std::string& _functionMode);

                    /**
                     * 判断参数 FunctionMode 是否已赋值
                     * @return FunctionMode 是否已赋值
                     */
                    bool FunctionModeHasBeenSet() const;

                    /**
                     * 获取FunctionMode取值为Partial时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Functions FunctionMode取值为Partial时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetFunctions() const;

                    /**
                     * 设置FunctionMode取值为Partial时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Functions FunctionMode取值为Partial时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFunctions(const std::vector<std::string>& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     */
                    bool FunctionsHasBeenSet() const;

                    /**
                     * 获取选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcedureMode 选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProcedureMode() const;

                    /**
                     * 设置选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProcedureMode 选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcedureMode(const std::string& _procedureMode);

                    /**
                     * 判断参数 ProcedureMode 是否已赋值
                     * @return ProcedureMode 是否已赋值
                     */
                    bool ProcedureModeHasBeenSet() const;

                    /**
                     * 获取ProcedureMode取值为Partial时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Procedures ProcedureMode取值为Partial时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetProcedures() const;

                    /**
                     * 设置ProcedureMode取值为Partial时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Procedures ProcedureMode取值为Partial时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProcedures(const std::vector<std::string>& _procedures);

                    /**
                     * 判断参数 Procedures 是否已赋值
                     * @return Procedures 是否已赋值
                     */
                    bool ProceduresHasBeenSet() const;

                    /**
                     * 获取触发器迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TriggerMode 触发器迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置触发器迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TriggerMode 触发器迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTriggerMode(const std::string& _triggerMode);

                    /**
                     * 判断参数 TriggerMode 是否已赋值
                     * @return TriggerMode 是否已赋值
                     */
                    bool TriggerModeHasBeenSet() const;

                    /**
                     * 获取当TriggerMode为partial，指定要迁移的触发器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Triggers 当TriggerMode为partial，指定要迁移的触发器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTriggers() const;

                    /**
                     * 设置当TriggerMode为partial，指定要迁移的触发器名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Triggers 当TriggerMode为partial，指定要迁移的触发器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTriggers(const std::vector<std::string>& _triggers);

                    /**
                     * 判断参数 Triggers 是否已赋值
                     * @return Triggers 是否已赋值
                     */
                    bool TriggersHasBeenSet() const;

                    /**
                     * 获取事件迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventMode 事件迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEventMode() const;

                    /**
                     * 设置事件迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EventMode 事件迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEventMode(const std::string& _eventMode);

                    /**
                     * 判断参数 EventMode 是否已赋值
                     * @return EventMode 是否已赋值
                     */
                    bool EventModeHasBeenSet() const;

                    /**
                     * 获取当EventMode为partial，指定要迁移的事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Events 当EventMode为partial，指定要迁移的事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetEvents() const;

                    /**
                     * 设置当EventMode为partial，指定要迁移的事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Events 当EventMode为partial，指定要迁移的事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEvents(const std::vector<std::string>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     */
                    bool EventsHasBeenSet() const;

                private:

                    /**
                     * 需要迁移或同步的库名，当ObjectMode为Partial时，此项必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 迁移或同步后的库名，默认与源库相同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newDbName;
                    bool m_newDbNameHasBeenSet;

                    /**
                     * DB选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当Mode为Partial时，此项必填。注意，高级对象的同步不依赖此值，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbMode;
                    bool m_dbModeHasBeenSet;

                    /**
                     * 迁移或同步的 schema
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 迁移或同步后的 schema name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_newSchemaName;
                    bool m_newSchemaNameHasBeenSet;

                    /**
                     * 表选择模式: All(为当前对象下的所有对象)，Partial(部分对象)，当DBMode为Partial时此项必填，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tableMode;
                    bool m_tableModeHasBeenSet;

                    /**
                     * 表图对象集合，当 TableMode 为 Partial 时，此项需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Table> m_tables;
                    bool m_tablesHasBeenSet;

                    /**
                     * 视图选择模式: All 为当前对象下的所有视图对象,Partial 为部分视图对象，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_viewMode;
                    bool m_viewModeHasBeenSet;

                    /**
                     * 视图对象集合，当 ViewMode 为 Partial 时， 此项需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<View> m_views;
                    bool m_viewsHasBeenSet;

                    /**
                     * 选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_functionMode;
                    bool m_functionModeHasBeenSet;

                    /**
                     * FunctionMode取值为Partial时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_functions;
                    bool m_functionsHasBeenSet;

                    /**
                     * 选择要同步的模式，Partial为部分，All为整选，如果整库同步此处应该为All。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_procedureMode;
                    bool m_procedureModeHasBeenSet;

                    /**
                     * ProcedureMode取值为Partial时需要填写
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_procedures;
                    bool m_proceduresHasBeenSet;

                    /**
                     * 触发器迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                    /**
                     * 当TriggerMode为partial，指定要迁移的触发器名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_triggers;
                    bool m_triggersHasBeenSet;

                    /**
                     * 事件迁移模式，All(为当前对象下的所有对象)，Partial(部分对象)，如果整库同步此处应该为All。数据同步暂不支持此高级对象。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventMode;
                    bool m_eventModeHasBeenSet;

                    /**
                     * 当EventMode为partial，指定要迁移的事件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_events;
                    bool m_eventsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DATABASE_H_
