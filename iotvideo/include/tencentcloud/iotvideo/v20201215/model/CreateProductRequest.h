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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CREATEPRODUCTREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CREATEPRODUCTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * CreateProduct请求参数结构体
                */
                class CreateProductRequest : public AbstractModel
                {
                public:
                    CreateProductRequest();
                    ~CreateProductRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param ProductName 产品名称
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品设备类型 1.普通设备 2.NVR设备
                     * @return DeviceType 产品设备类型 1.普通设备 2.NVR设备
                     */
                    uint64_t GetDeviceType() const;

                    /**
                     * 设置产品设备类型 1.普通设备 2.NVR设备
                     * @param DeviceType 产品设备类型 1.普通设备 2.NVR设备
                     */
                    void SetDeviceType(const uint64_t& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取产品有效期
                     * @return ProductVaildYears 产品有效期
                     */
                    uint64_t GetProductVaildYears() const;

                    /**
                     * 设置产品有效期
                     * @param ProductVaildYears 产品有效期
                     */
                    void SetProductVaildYears(const uint64_t& _productVaildYears);

                    /**
                     * 判断参数 ProductVaildYears 是否已赋值
                     * @return ProductVaildYears 是否已赋值
                     */
                    bool ProductVaildYearsHasBeenSet() const;

                    /**
                     * 获取设备功能码 ypsxth音频双向通话 spdxth视频单向通话
                     * @return Features 设备功能码 ypsxth音频双向通话 spdxth视频单向通话
                     */
                    std::vector<std::string> GetFeatures() const;

                    /**
                     * 设置设备功能码 ypsxth音频双向通话 spdxth视频单向通话
                     * @param Features 设备功能码 ypsxth音频双向通话 spdxth视频单向通话
                     */
                    void SetFeatures(const std::vector<std::string>& _features);

                    /**
                     * 判断参数 Features 是否已赋值
                     * @return Features 是否已赋值
                     */
                    bool FeaturesHasBeenSet() const;

                    /**
                     * 获取设备操作系统 android linux liteos
                     * @return ChipOs 设备操作系统 android linux liteos
                     */
                    std::string GetChipOs() const;

                    /**
                     * 设置设备操作系统 android linux liteos
                     * @param ChipOs 设备操作系统 android linux liteos
                     */
                    void SetChipOs(const std::string& _chipOs);

                    /**
                     * 判断参数 ChipOs 是否已赋值
                     * @return ChipOs 是否已赋值
                     */
                    bool ChipOsHasBeenSet() const;

                    /**
                     * 获取芯片厂商id
                     * @return ChipManufactureId 芯片厂商id
                     */
                    std::string GetChipManufactureId() const;

                    /**
                     * 设置芯片厂商id
                     * @param ChipManufactureId 芯片厂商id
                     */
                    void SetChipManufactureId(const std::string& _chipManufactureId);

                    /**
                     * 判断参数 ChipManufactureId 是否已赋值
                     * @return ChipManufactureId 是否已赋值
                     */
                    bool ChipManufactureIdHasBeenSet() const;

                    /**
                     * 获取芯片id
                     * @return ChipId 芯片id
                     */
                    std::string GetChipId() const;

                    /**
                     * 设置芯片id
                     * @param ChipId 芯片id
                     */
                    void SetChipId(const std::string& _chipId);

                    /**
                     * 判断参数 ChipId 是否已赋值
                     * @return ChipId 是否已赋值
                     */
                    bool ChipIdHasBeenSet() const;

                    /**
                     * 获取产品描述信息
                     * @return ProductDescription 产品描述信息
                     */
                    std::string GetProductDescription() const;

                    /**
                     * 设置产品描述信息
                     * @param ProductDescription 产品描述信息
                     */
                    void SetProductDescription(const std::string& _productDescription);

                    /**
                     * 判断参数 ProductDescription 是否已赋值
                     * @return ProductDescription 是否已赋值
                     */
                    bool ProductDescriptionHasBeenSet() const;

                    /**
                     * 获取认证方式 只支持取值为2 psk认证
                     * @return EncryptionType 认证方式 只支持取值为2 psk认证
                     */
                    uint64_t GetEncryptionType() const;

                    /**
                     * 设置认证方式 只支持取值为2 psk认证
                     * @param EncryptionType 认证方式 只支持取值为2 psk认证
                     */
                    void SetEncryptionType(const uint64_t& _encryptionType);

                    /**
                     * 判断参数 EncryptionType 是否已赋值
                     * @return EncryptionType 是否已赋值
                     */
                    bool EncryptionTypeHasBeenSet() const;

                private:

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品设备类型 1.普通设备 2.NVR设备
                     */
                    uint64_t m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 产品有效期
                     */
                    uint64_t m_productVaildYears;
                    bool m_productVaildYearsHasBeenSet;

                    /**
                     * 设备功能码 ypsxth音频双向通话 spdxth视频单向通话
                     */
                    std::vector<std::string> m_features;
                    bool m_featuresHasBeenSet;

                    /**
                     * 设备操作系统 android linux liteos
                     */
                    std::string m_chipOs;
                    bool m_chipOsHasBeenSet;

                    /**
                     * 芯片厂商id
                     */
                    std::string m_chipManufactureId;
                    bool m_chipManufactureIdHasBeenSet;

                    /**
                     * 芯片id
                     */
                    std::string m_chipId;
                    bool m_chipIdHasBeenSet;

                    /**
                     * 产品描述信息
                     */
                    std::string m_productDescription;
                    bool m_productDescriptionHasBeenSet;

                    /**
                     * 认证方式 只支持取值为2 psk认证
                     */
                    uint64_t m_encryptionType;
                    bool m_encryptionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CREATEPRODUCTREQUEST_H_
