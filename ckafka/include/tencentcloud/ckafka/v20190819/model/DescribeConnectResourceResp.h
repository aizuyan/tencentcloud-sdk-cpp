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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCERESP_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/MySQLConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/PostgreSQLConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/DtsConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/MongoDBConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/EsConnectParam.h>
#include <tencentcloud/ckafka/v20190819/model/ClickHouseConnectParam.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 查询连接源具体数据的返参
                */
                class DescribeConnectResourceResp : public AbstractModel
                {
                public:
                    DescribeConnectResourceResp();
                    ~DescribeConnectResourceResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取连接源的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceId 连接源的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置连接源的Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceId 连接源的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取连接源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceName 连接源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置连接源名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ResourceName 连接源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取连接源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 连接源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置连接源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 连接源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取连接源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 连接源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetType() const;

                    /**
                     * 设置连接源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Type 连接源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取连接源的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 连接源的状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置连接源的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 连接源的状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取连接源的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 连接源的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置连接源的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 连接源的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取连接源的异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 连接源的异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置连接源的异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorMessage 连接源的异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取连接源的当前所处步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CurrentStep 连接源的当前所处步骤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCurrentStep() const;

                    /**
                     * 设置连接源的当前所处步骤
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CurrentStep 连接源的当前所处步骤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCurrentStep(const std::string& _currentStep);

                    /**
                     * 判断参数 CurrentStep 是否已赋值
                     * @return CurrentStep 是否已赋值
                     */
                    bool CurrentStepHasBeenSet() const;

                    /**
                     * 获取步骤列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StepList 步骤列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetStepList() const;

                    /**
                     * 设置步骤列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StepList 步骤列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStepList(const std::vector<std::string>& _stepList);

                    /**
                     * 判断参数 StepList 是否已赋值
                     * @return StepList 是否已赋值
                     */
                    bool StepListHasBeenSet() const;

                    /**
                     * 获取MySQL配置，Type为MYSQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MySQLConnectParam MySQL配置，Type为MYSQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MySQLConnectParam GetMySQLConnectParam() const;

                    /**
                     * 设置MySQL配置，Type为MYSQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MySQLConnectParam MySQL配置，Type为MYSQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMySQLConnectParam(const MySQLConnectParam& _mySQLConnectParam);

                    /**
                     * 判断参数 MySQLConnectParam 是否已赋值
                     * @return MySQLConnectParam 是否已赋值
                     */
                    bool MySQLConnectParamHasBeenSet() const;

                    /**
                     * 获取PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostgreSQLConnectParam PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostgreSQLConnectParam GetPostgreSQLConnectParam() const;

                    /**
                     * 设置PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PostgreSQLConnectParam PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPostgreSQLConnectParam(const PostgreSQLConnectParam& _postgreSQLConnectParam);

                    /**
                     * 判断参数 PostgreSQLConnectParam 是否已赋值
                     * @return PostgreSQLConnectParam 是否已赋值
                     */
                    bool PostgreSQLConnectParamHasBeenSet() const;

                    /**
                     * 获取Dts配置，Type为DTS时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DtsConnectParam Dts配置，Type为DTS时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DtsConnectParam GetDtsConnectParam() const;

                    /**
                     * 设置Dts配置，Type为DTS时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DtsConnectParam Dts配置，Type为DTS时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDtsConnectParam(const DtsConnectParam& _dtsConnectParam);

                    /**
                     * 判断参数 DtsConnectParam 是否已赋值
                     * @return DtsConnectParam 是否已赋值
                     */
                    bool DtsConnectParamHasBeenSet() const;

                    /**
                     * 获取MongoDB配置，Type为MONGODB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MongoDBConnectParam MongoDB配置，Type为MONGODB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MongoDBConnectParam GetMongoDBConnectParam() const;

                    /**
                     * 设置MongoDB配置，Type为MONGODB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MongoDBConnectParam MongoDB配置，Type为MONGODB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMongoDBConnectParam(const MongoDBConnectParam& _mongoDBConnectParam);

                    /**
                     * 判断参数 MongoDBConnectParam 是否已赋值
                     * @return MongoDBConnectParam 是否已赋值
                     */
                    bool MongoDBConnectParamHasBeenSet() const;

                    /**
                     * 获取Es配置，Type为ES时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EsConnectParam Es配置，Type为ES时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EsConnectParam GetEsConnectParam() const;

                    /**
                     * 设置Es配置，Type为ES时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EsConnectParam Es配置，Type为ES时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEsConnectParam(const EsConnectParam& _esConnectParam);

                    /**
                     * 判断参数 EsConnectParam 是否已赋值
                     * @return EsConnectParam 是否已赋值
                     */
                    bool EsConnectParamHasBeenSet() const;

                    /**
                     * 获取ClickHouse配置，Type为CLICKHOUSE时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClickHouseConnectParam ClickHouse配置，Type为CLICKHOUSE时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClickHouseConnectParam GetClickHouseConnectParam() const;

                    /**
                     * 设置ClickHouse配置，Type为CLICKHOUSE时返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClickHouseConnectParam ClickHouse配置，Type为CLICKHOUSE时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClickHouseConnectParam(const ClickHouseConnectParam& _clickHouseConnectParam);

                    /**
                     * 判断参数 ClickHouseConnectParam 是否已赋值
                     * @return ClickHouseConnectParam 是否已赋值
                     */
                    bool ClickHouseConnectParamHasBeenSet() const;

                private:

                    /**
                     * 连接源的Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 连接源名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 连接源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 连接源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 连接源的状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 连接源的创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 连接源的异常信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 连接源的当前所处步骤
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_currentStep;
                    bool m_currentStepHasBeenSet;

                    /**
                     * 步骤列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_stepList;
                    bool m_stepListHasBeenSet;

                    /**
                     * MySQL配置，Type为MYSQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MySQLConnectParam m_mySQLConnectParam;
                    bool m_mySQLConnectParamHasBeenSet;

                    /**
                     * PostgreSQL配置，Type为POSTGRESQL或TDSQL_C_POSTGRESQL时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PostgreSQLConnectParam m_postgreSQLConnectParam;
                    bool m_postgreSQLConnectParamHasBeenSet;

                    /**
                     * Dts配置，Type为DTS时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DtsConnectParam m_dtsConnectParam;
                    bool m_dtsConnectParamHasBeenSet;

                    /**
                     * MongoDB配置，Type为MONGODB时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MongoDBConnectParam m_mongoDBConnectParam;
                    bool m_mongoDBConnectParamHasBeenSet;

                    /**
                     * Es配置，Type为ES时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EsConnectParam m_esConnectParam;
                    bool m_esConnectParamHasBeenSet;

                    /**
                     * ClickHouse配置，Type为CLICKHOUSE时返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClickHouseConnectParam m_clickHouseConnectParam;
                    bool m_clickHouseConnectParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCERESP_H_
