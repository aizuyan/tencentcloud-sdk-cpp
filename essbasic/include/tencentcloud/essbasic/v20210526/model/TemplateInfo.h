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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TEMPLATEINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/Component.h>
#include <tencentcloud/essbasic/v20210526/model/Recipient.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 此结构体 (TemplateInfo) 用于描述模板的信息。
                */
                class TemplateInfo : public AbstractModel
                {
                public:
                    TemplateInfo();
                    ~TemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID
                     * @return TemplateId 模板ID
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID
                     * @param TemplateId 模板ID
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名字
                     * @return TemplateName 模板名字
                     */
                    std::string GetTemplateName() const;

                    /**
                     * 设置模板名字
                     * @param TemplateName 模板名字
                     */
                    void SetTemplateName(const std::string& _templateName);

                    /**
                     * 判断参数 TemplateName 是否已赋值
                     * @return TemplateName 是否已赋值
                     */
                    bool TemplateNameHasBeenSet() const;

                    /**
                     * 获取模板描述信息
                     * @return Description 模板描述信息
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模板描述信息
                     * @param Description 模板描述信息
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取模板控件信息结构
                     * @return Components 模板控件信息结构
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置模板控件信息结构
                     * @param Components 模板控件信息结构
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取模板中的流程参与人信息
                     * @return Recipients 模板中的流程参与人信息
                     */
                    std::vector<Recipient> GetRecipients() const;

                    /**
                     * 设置模板中的流程参与人信息
                     * @param Recipients 模板中的流程参与人信息
                     */
                    void SetRecipients(const std::vector<Recipient>& _recipients);

                    /**
                     * 判断参数 Recipients 是否已赋值
                     * @return Recipients 是否已赋值
                     */
                    bool RecipientsHasBeenSet() const;

                    /**
                     * 获取签署区模板信息结构
                     * @return SignComponents 签署区模板信息结构
                     */
                    std::vector<Component> GetSignComponents() const;

                    /**
                     * 设置签署区模板信息结构
                     * @param SignComponents 签署区模板信息结构
                     */
                    void SetSignComponents(const std::vector<Component>& _signComponents);

                    /**
                     * 判断参数 SignComponents 是否已赋值
                     * @return SignComponents 是否已赋值
                     */
                    bool SignComponentsHasBeenSet() const;

                    /**
                     * 获取模板类型：1-静默签；3-普通模板
                     * @return TemplateType 模板类型：1-静默签；3-普通模板
                     */
                    int64_t GetTemplateType() const;

                    /**
                     * 设置模板类型：1-静默签；3-普通模板
                     * @param TemplateType 模板类型：1-静默签；3-普通模板
                     */
                    void SetTemplateType(const int64_t& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取是否是发起人 ,已弃用
                     * @return IsPromoter 是否是发起人 ,已弃用
                     */
                    bool GetIsPromoter() const;

                    /**
                     * 设置是否是发起人 ,已弃用
                     * @param IsPromoter 是否是发起人 ,已弃用
                     */
                    void SetIsPromoter(const bool& _isPromoter);

                    /**
                     * 判断参数 IsPromoter 是否已赋值
                     * @return IsPromoter 是否已赋值
                     */
                    bool IsPromoterHasBeenSet() const;

                    /**
                     * 获取模板的创建者信息
                     * @return Creator 模板的创建者信息
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置模板的创建者信息
                     * @param Creator 模板的创建者信息
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取模板创建的时间戳（精确到秒）
                     * @return CreatedOn 模板创建的时间戳（精确到秒）
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置模板创建的时间戳（精确到秒）
                     * @param CreatedOn 模板创建的时间戳（精确到秒）
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取模板的H5预览链接,可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreviewUrl 模板的H5预览链接,可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置模板的H5预览链接,可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PreviewUrl 模板的H5预览链接,可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     */
                    bool PreviewUrlHasBeenSet() const;

                    /**
                     * 获取第三方应用集成-模板PDF文件链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PdfUrl 第三方应用集成-模板PDF文件链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPdfUrl() const;

                    /**
                     * 设置第三方应用集成-模板PDF文件链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PdfUrl 第三方应用集成-模板PDF文件链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPdfUrl(const std::string& _pdfUrl);

                    /**
                     * 判断参数 PdfUrl 是否已赋值
                     * @return PdfUrl 是否已赋值
                     */
                    bool PdfUrlHasBeenSet() const;

                    /**
                     * 获取关联的平台企业模板ID
                     * @return ChannelTemplateId 关联的平台企业模板ID
                     */
                    std::string GetChannelTemplateId() const;

                    /**
                     * 设置关联的平台企业模板ID
                     * @param ChannelTemplateId 关联的平台企业模板ID
                     */
                    void SetChannelTemplateId(const std::string& _channelTemplateId);

                    /**
                     * 判断参数 ChannelTemplateId 是否已赋值
                     * @return ChannelTemplateId 是否已赋值
                     */
                    bool ChannelTemplateIdHasBeenSet() const;

                    /**
                     * 获取关联的平台企业模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelTemplateName 关联的平台企业模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChannelTemplateName() const;

                    /**
                     * 设置关联的平台企业模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChannelTemplateName 关联的平台企业模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChannelTemplateName(const std::string& _channelTemplateName);

                    /**
                     * 判断参数 ChannelTemplateName 是否已赋值
                     * @return ChannelTemplateName 是否已赋值
                     */
                    bool ChannelTemplateNameHasBeenSet() const;

                    /**
                     * 获取0-需要子客企业手动领取平台企业的模板(默认); 1-平台自动设置子客模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelAutoSave 0-需要子客企业手动领取平台企业的模板(默认); 1-平台自动设置子客模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetChannelAutoSave() const;

                    /**
                     * 设置0-需要子客企业手动领取平台企业的模板(默认); 1-平台自动设置子客模板
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChannelAutoSave 0-需要子客企业手动领取平台企业的模板(默认); 1-平台自动设置子客模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChannelAutoSave(const int64_t& _channelAutoSave);

                    /**
                     * 判断参数 ChannelAutoSave 是否已赋值
                     * @return ChannelAutoSave 是否已赋值
                     */
                    bool ChannelAutoSaveHasBeenSet() const;

                    /**
                     * 获取模板版本，全数字字符。默认为空，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateVersion 模板版本，全数字字符。默认为空，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetTemplateVersion() const;

                    /**
                     * 设置模板版本，全数字字符。默认为空，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TemplateVersion 模板版本，全数字字符。默认为空，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTemplateVersion(const std::string& _templateVersion);

                    /**
                     * 判断参数 TemplateVersion 是否已赋值
                     * @return TemplateVersion 是否已赋值
                     */
                    bool TemplateVersionHasBeenSet() const;

                    /**
                     * 获取模板可用状态，取值：1启用（默认），2停用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Available 模板可用状态，取值：1启用（默认），2停用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAvailable() const;

                    /**
                     * 设置模板可用状态，取值：1启用（默认），2停用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Available 模板可用状态，取值：1启用（默认），2停用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAvailable(const int64_t& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     */
                    bool AvailableHasBeenSet() const;

                private:

                    /**
                     * 模板ID
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板名字
                     */
                    std::string m_templateName;
                    bool m_templateNameHasBeenSet;

                    /**
                     * 模板描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 模板控件信息结构
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 模板中的流程参与人信息
                     */
                    std::vector<Recipient> m_recipients;
                    bool m_recipientsHasBeenSet;

                    /**
                     * 签署区模板信息结构
                     */
                    std::vector<Component> m_signComponents;
                    bool m_signComponentsHasBeenSet;

                    /**
                     * 模板类型：1-静默签；3-普通模板
                     */
                    int64_t m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * 是否是发起人 ,已弃用
                     */
                    bool m_isPromoter;
                    bool m_isPromoterHasBeenSet;

                    /**
                     * 模板的创建者信息
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 模板创建的时间戳（精确到秒）
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 模板的H5预览链接,可以通过浏览器打开此链接预览模板，或者嵌入到iframe中预览模板。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                    /**
                     * 第三方应用集成-模板PDF文件链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pdfUrl;
                    bool m_pdfUrlHasBeenSet;

                    /**
                     * 关联的平台企业模板ID
                     */
                    std::string m_channelTemplateId;
                    bool m_channelTemplateIdHasBeenSet;

                    /**
                     * 关联的平台企业模板名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelTemplateName;
                    bool m_channelTemplateNameHasBeenSet;

                    /**
                     * 0-需要子客企业手动领取平台企业的模板(默认); 1-平台自动设置子客模板
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_channelAutoSave;
                    bool m_channelAutoSaveHasBeenSet;

                    /**
                     * 模板版本，全数字字符。默认为空，初始版本为yyyyMMdd001。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_templateVersion;
                    bool m_templateVersionHasBeenSet;

                    /**
                     * 模板可用状态，取值：1启用（默认），2停用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_available;
                    bool m_availableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_TEMPLATEINFO_H_
