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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeAuditLogFiles请求参数结构体
                */
                class DescribeAuditLogFilesRequest : public AbstractModel
                {
                public:
                    DescribeAuditLogFilesRequest();
                    ~DescribeAuditLogFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB。
                     * @return Product 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB。
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB。
                     * @param Product 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB。
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取与Product保持一致。如："dcdb" ,"mariadb"
                     * @return NodeRequestType 与Product保持一致。如："dcdb" ,"mariadb"
                     */
                    std::string GetNodeRequestType() const;

                    /**
                     * 设置与Product保持一致。如："dcdb" ,"mariadb"
                     * @param NodeRequestType 与Product保持一致。如："dcdb" ,"mariadb"
                     */
                    void SetNodeRequestType(const std::string& _nodeRequestType);

                    /**
                     * 判断参数 NodeRequestType 是否已赋值
                     * @return NodeRequestType 是否已赋值
                     */
                    bool NodeRequestTypeHasBeenSet() const;

                    /**
                     * 获取实例 ID 。
                     * @return InstanceId 实例 ID 。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID 。
                     * @param InstanceId 实例 ID 。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param Offset 偏移量，默认为0。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询数目，默认为20，最大为100。
                     * @return Limit 查询数目，默认为20，最大为100。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询数目，默认为20，最大为100。
                     * @param Limit 查询数目，默认为20，最大为100。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 服务产品类型，支持值包括： "dcdb" - 云数据库 Tdsql， "mariadb" - 云数据库 MariaDB for MariaDB。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 与Product保持一致。如："dcdb" ,"mariadb"
                     */
                    std::string m_nodeRequestType;
                    bool m_nodeRequestTypeHasBeenSet;

                    /**
                     * 实例 ID 。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询数目，默认为20，最大为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_
