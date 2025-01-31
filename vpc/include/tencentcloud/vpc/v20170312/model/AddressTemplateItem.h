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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEITEM_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 地址信息
                */
                class AddressTemplateItem : public AbstractModel
                {
                public:
                    AddressTemplateItem();
                    ~AddressTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ipm-xxxxxxxx
                     * @return AddressTemplateId ipm-xxxxxxxx
                     */
                    std::string GetAddressTemplateId() const;

                    /**
                     * 设置ipm-xxxxxxxx
                     * @param AddressTemplateId ipm-xxxxxxxx
                     */
                    void SetAddressTemplateId(const std::string& _addressTemplateId);

                    /**
                     * 判断参数 AddressTemplateId 是否已赋值
                     * @return AddressTemplateId 是否已赋值
                     */
                    bool AddressTemplateIdHasBeenSet() const;

                    /**
                     * 获取IP模板名称
                     * @return AddressTemplateName IP模板名称
                     */
                    std::string GetAddressTemplateName() const;

                    /**
                     * 设置IP模板名称
                     * @param AddressTemplateName IP模板名称
                     */
                    void SetAddressTemplateName(const std::string& _addressTemplateName);

                    /**
                     * 判断参数 AddressTemplateName 是否已赋值
                     * @return AddressTemplateName 是否已赋值
                     */
                    bool AddressTemplateNameHasBeenSet() const;

                    /**
                     * 获取废弃字段
                     * @return From 废弃字段
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置废弃字段
                     * @param From 废弃字段
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取废弃字段
                     * @return To 废弃字段
                     */
                    std::string GetTo() const;

                    /**
                     * 设置废弃字段
                     * @param To 废弃字段
                     */
                    void SetTo(const std::string& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     */
                    bool ToHasBeenSet() const;

                private:

                    /**
                     * ipm-xxxxxxxx
                     */
                    std::string m_addressTemplateId;
                    bool m_addressTemplateIdHasBeenSet;

                    /**
                     * IP模板名称
                     */
                    std::string m_addressTemplateName;
                    bool m_addressTemplateNameHasBeenSet;

                    /**
                     * 废弃字段
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 废弃字段
                     */
                    std::string m_to;
                    bool m_toHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEITEM_H_
