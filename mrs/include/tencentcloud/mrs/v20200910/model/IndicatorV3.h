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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORV3_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORV3_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/TableIndicators.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 检验报告v3
                */
                class IndicatorV3 : public AbstractModel
                {
                public:
                    IndicatorV3();
                    ~IndicatorV3() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取检验报告V3结论
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableIndictors 检验报告V3结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableIndicators> GetTableIndictors() const;

                    /**
                     * 设置检验报告V3结论
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TableIndictors 检验报告V3结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTableIndictors(const std::vector<TableIndicators>& _tableIndictors);

                    /**
                     * 判断参数 TableIndictors 是否已赋值
                     * @return TableIndictors 是否已赋值
                     */
                    bool TableIndictorsHasBeenSet() const;

                    /**
                     * 获取版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Version 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                private:

                    /**
                     * 检验报告V3结论
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TableIndicators> m_tableIndictors;
                    bool m_tableIndictorsHasBeenSet;

                    /**
                     * 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORV3_H_
