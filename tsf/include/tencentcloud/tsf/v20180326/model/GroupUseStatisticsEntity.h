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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GROUPUSESTATISTICSENTITY_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GROUPUSESTATISTICSENTITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * API分组日使用统计对象数据点
                */
                class GroupUseStatisticsEntity : public AbstractModel
                {
                public:
                    GroupUseStatisticsEntity();
                    ~GroupUseStatisticsEntity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取API 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiPath API 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApiPath() const;

                    /**
                     * 设置API 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApiPath API 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApiPath(const std::string& _apiPath);

                    /**
                     * 判断参数 ApiPath 是否已赋值
                     * @return ApiPath 是否已赋值
                     */
                    bool ApiPathHasBeenSet() const;

                    /**
                     * 获取服务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceName 服务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ServiceName 服务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 统计值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetValue() const;

                    /**
                     * 设置统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Value 统计值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取API ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiId API ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApiId() const;

                    /**
                     * 设置API ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApiId API ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApiId(const std::string& _apiId);

                    /**
                     * 判断参数 ApiId 是否已赋值
                     * @return ApiId 是否已赋值
                     */
                    bool ApiIdHasBeenSet() const;

                private:

                    /**
                     * API 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiPath;
                    bool m_apiPathHasBeenSet;

                    /**
                     * 服务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 统计值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * API ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiId;
                    bool m_apiIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GROUPUSESTATISTICSENTITY_H_
