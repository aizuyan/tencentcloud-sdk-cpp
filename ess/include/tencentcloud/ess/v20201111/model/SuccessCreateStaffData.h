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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_SUCCESSCREATESTAFFDATA_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_SUCCESSCREATESTAFFDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 创建员工的成功数据
                */
                class SuccessCreateStaffData : public AbstractModel
                {
                public:
                    SuccessCreateStaffData();
                    ~SuccessCreateStaffData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取员工名
                     * @return DisplayName 员工名
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置员工名
                     * @param DisplayName 员工名
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取员工手机号
                     * @return Mobile 员工手机号
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置员工手机号
                     * @param Mobile 员工手机号
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取员工在电子签平台的id
                     * @return UserId 员工在电子签平台的id
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置员工在电子签平台的id
                     * @param UserId 员工在电子签平台的id
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取提示，当创建已存在未实名用户时，改字段有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Note 提示，当创建已存在未实名用户时，改字段有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNote() const;

                    /**
                     * 设置提示，当创建已存在未实名用户时，改字段有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Note 提示，当创建已存在未实名用户时，改字段有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * 员工名
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 员工手机号
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 员工在电子签平台的id
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 提示，当创建已存在未实名用户时，改字段有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_SUCCESSCREATESTAFFDATA_H_
