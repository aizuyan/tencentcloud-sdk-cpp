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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_PTNMBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_PTNMBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * PTNM分期
                */
                class PTNMBlock : public AbstractModel
                {
                public:
                    PTNMBlock();
                    ~PTNMBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Src 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PTNMM PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPTNMM() const;

                    /**
                     * 设置PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PTNMM PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPTNMM(const std::string& _pTNMM);

                    /**
                     * 判断参数 PTNMM 是否已赋值
                     * @return PTNMM 是否已赋值
                     */
                    bool PTNMMHasBeenSet() const;

                    /**
                     * 获取PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PTNMN PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPTNMN() const;

                    /**
                     * 设置PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PTNMN PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPTNMN(const std::string& _pTNMN);

                    /**
                     * 判断参数 PTNMN 是否已赋值
                     * @return PTNMN 是否已赋值
                     */
                    bool PTNMNHasBeenSet() const;

                    /**
                     * 获取PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PTNMT PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPTNMT() const;

                    /**
                     * 设置PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PTNMT PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPTNMT(const std::string& _pTNMT);

                    /**
                     * 判断参数 PTNMT 是否已赋值
                     * @return PTNMT 是否已赋值
                     */
                    bool PTNMTHasBeenSet() const;

                private:

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 原文
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pTNMM;
                    bool m_pTNMMHasBeenSet;

                    /**
                     * PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pTNMN;
                    bool m_pTNMNHasBeenSet;

                    /**
                     * PTNM分期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pTNMT;
                    bool m_pTNMTHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_PTNMBLOCK_H_
