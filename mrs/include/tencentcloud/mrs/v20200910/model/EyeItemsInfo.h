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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_EYEITEMSINFO_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_EYEITEMSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/EyeItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 眼科报告结构体
                */
                class EyeItemsInfo : public AbstractModel
                {
                public:
                    EyeItemsInfo();
                    ~EyeItemsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取眼科报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EyeItems 眼科报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EyeItem GetEyeItems() const;

                    /**
                     * 设置眼科报告
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EyeItems 眼科报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEyeItems(const EyeItem& _eyeItems);

                    /**
                     * 判断参数 EyeItems 是否已赋值
                     * @return EyeItems 是否已赋值
                     */
                    bool EyeItemsHasBeenSet() const;

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
                     * 眼科报告
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EyeItem m_eyeItems;
                    bool m_eyeItemsHasBeenSet;

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

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_EYEITEMSINFO_H_
