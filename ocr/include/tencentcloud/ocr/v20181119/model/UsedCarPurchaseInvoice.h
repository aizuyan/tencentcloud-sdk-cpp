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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_USEDCARPURCHASEINVOICE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_USEDCARPURCHASEINVOICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 二手车销售统一发票
                */
                class UsedCarPurchaseInvoice : public AbstractModel
                {
                public:
                    UsedCarPurchaseInvoice();
                    ~UsedCarPurchaseInvoice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发票名称
                     * @return Title 发票名称
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置发票名称
                     * @param Title 发票名称
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取是否存在二维码（0：没有，1：有）
                     * @return QRCodeMark 是否存在二维码（0：没有，1：有）
                     */
                    int64_t GetQRCodeMark() const;

                    /**
                     * 设置是否存在二维码（0：没有，1：有）
                     * @param QRCodeMark 是否存在二维码（0：没有，1：有）
                     */
                    void SetQRCodeMark(const int64_t& _qRCodeMark);

                    /**
                     * 判断参数 QRCodeMark 是否已赋值
                     * @return QRCodeMark 是否已赋值
                     */
                    bool QRCodeMarkHasBeenSet() const;

                    /**
                     * 获取发票代码
                     * @return Code 发票代码
                     */
                    std::string GetCode() const;

                    /**
                     * 设置发票代码
                     * @param Code 发票代码
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取发票号码
                     * @return Number 发票号码
                     */
                    std::string GetNumber() const;

                    /**
                     * 设置发票号码
                     * @param Number 发票号码
                     */
                    void SetNumber(const std::string& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取开票日期
                     * @return Date 开票日期
                     */
                    std::string GetDate() const;

                    /**
                     * 设置开票日期
                     * @param Date 开票日期
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取价税合计（小写）
                     * @return Total 价税合计（小写）
                     */
                    std::string GetTotal() const;

                    /**
                     * 设置价税合计（小写）
                     * @param Total 价税合计（小写）
                     */
                    void SetTotal(const std::string& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取价税合计（大写）
                     * @return TotalCn 价税合计（大写）
                     */
                    std::string GetTotalCn() const;

                    /**
                     * 设置价税合计（大写）
                     * @param TotalCn 价税合计（大写）
                     */
                    void SetTotalCn(const std::string& _totalCn);

                    /**
                     * 判断参数 TotalCn 是否已赋值
                     * @return TotalCn 是否已赋值
                     */
                    bool TotalCnHasBeenSet() const;

                    /**
                     * 获取销货单位名称
                     * @return Seller 销货单位名称
                     */
                    std::string GetSeller() const;

                    /**
                     * 设置销货单位名称
                     * @param Seller 销货单位名称
                     */
                    void SetSeller(const std::string& _seller);

                    /**
                     * 判断参数 Seller 是否已赋值
                     * @return Seller 是否已赋值
                     */
                    bool SellerHasBeenSet() const;

                    /**
                     * 获取销售方电话
                     * @return SellerTel 销售方电话
                     */
                    std::string GetSellerTel() const;

                    /**
                     * 设置销售方电话
                     * @param SellerTel 销售方电话
                     */
                    void SetSellerTel(const std::string& _sellerTel);

                    /**
                     * 判断参数 SellerTel 是否已赋值
                     * @return SellerTel 是否已赋值
                     */
                    bool SellerTelHasBeenSet() const;

                    /**
                     * 获取销售方单位代码/个人身份证号
                     * @return SellerTaxID 销售方单位代码/个人身份证号
                     */
                    std::string GetSellerTaxID() const;

                    /**
                     * 设置销售方单位代码/个人身份证号
                     * @param SellerTaxID 销售方单位代码/个人身份证号
                     */
                    void SetSellerTaxID(const std::string& _sellerTaxID);

                    /**
                     * 判断参数 SellerTaxID 是否已赋值
                     * @return SellerTaxID 是否已赋值
                     */
                    bool SellerTaxIDHasBeenSet() const;

                    /**
                     * 获取销售方地址
                     * @return SellerAddress 销售方地址
                     */
                    std::string GetSellerAddress() const;

                    /**
                     * 设置销售方地址
                     * @param SellerAddress 销售方地址
                     */
                    void SetSellerAddress(const std::string& _sellerAddress);

                    /**
                     * 判断参数 SellerAddress 是否已赋值
                     * @return SellerAddress 是否已赋值
                     */
                    bool SellerAddressHasBeenSet() const;

                    /**
                     * 获取购买方名称
                     * @return Buyer 购买方名称
                     */
                    std::string GetBuyer() const;

                    /**
                     * 设置购买方名称
                     * @param Buyer 购买方名称
                     */
                    void SetBuyer(const std::string& _buyer);

                    /**
                     * 判断参数 Buyer 是否已赋值
                     * @return Buyer 是否已赋值
                     */
                    bool BuyerHasBeenSet() const;

                    /**
                     * 获取购买方单位代码/个人身份证号
                     * @return BuyerID 购买方单位代码/个人身份证号
                     */
                    std::string GetBuyerID() const;

                    /**
                     * 设置购买方单位代码/个人身份证号
                     * @param BuyerID 购买方单位代码/个人身份证号
                     */
                    void SetBuyerID(const std::string& _buyerID);

                    /**
                     * 判断参数 BuyerID 是否已赋值
                     * @return BuyerID 是否已赋值
                     */
                    bool BuyerIDHasBeenSet() const;

                    /**
                     * 获取购买方地址
                     * @return BuyerAddress 购买方地址
                     */
                    std::string GetBuyerAddress() const;

                    /**
                     * 设置购买方地址
                     * @param BuyerAddress 购买方地址
                     */
                    void SetBuyerAddress(const std::string& _buyerAddress);

                    /**
                     * 判断参数 BuyerAddress 是否已赋值
                     * @return BuyerAddress 是否已赋值
                     */
                    bool BuyerAddressHasBeenSet() const;

                    /**
                     * 获取购买方电话
                     * @return BuyerTel 购买方电话
                     */
                    std::string GetBuyerTel() const;

                    /**
                     * 设置购买方电话
                     * @param BuyerTel 购买方电话
                     */
                    void SetBuyerTel(const std::string& _buyerTel);

                    /**
                     * 判断参数 BuyerTel 是否已赋值
                     * @return BuyerTel 是否已赋值
                     */
                    bool BuyerTelHasBeenSet() const;

                    /**
                     * 获取二手车市场
                     * @return CompanyName 二手车市场
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置二手车市场
                     * @param CompanyName 二手车市场
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取二手车市场纳税人识别号
                     * @return CompanyTaxID 二手车市场纳税人识别号
                     */
                    std::string GetCompanyTaxID() const;

                    /**
                     * 设置二手车市场纳税人识别号
                     * @param CompanyTaxID 二手车市场纳税人识别号
                     */
                    void SetCompanyTaxID(const std::string& _companyTaxID);

                    /**
                     * 判断参数 CompanyTaxID 是否已赋值
                     * @return CompanyTaxID 是否已赋值
                     */
                    bool CompanyTaxIDHasBeenSet() const;

                    /**
                     * 获取二手车市场开户银行和账号
                     * @return CompanyBankAccount 二手车市场开户银行和账号
                     */
                    std::string GetCompanyBankAccount() const;

                    /**
                     * 设置二手车市场开户银行和账号
                     * @param CompanyBankAccount 二手车市场开户银行和账号
                     */
                    void SetCompanyBankAccount(const std::string& _companyBankAccount);

                    /**
                     * 判断参数 CompanyBankAccount 是否已赋值
                     * @return CompanyBankAccount 是否已赋值
                     */
                    bool CompanyBankAccountHasBeenSet() const;

                    /**
                     * 获取二手车市场电话
                     * @return CompanyTel 二手车市场电话
                     */
                    std::string GetCompanyTel() const;

                    /**
                     * 设置二手车市场电话
                     * @param CompanyTel 二手车市场电话
                     */
                    void SetCompanyTel(const std::string& _companyTel);

                    /**
                     * 判断参数 CompanyTel 是否已赋值
                     * @return CompanyTel 是否已赋值
                     */
                    bool CompanyTelHasBeenSet() const;

                    /**
                     * 获取二手车市场地址
                     * @return CompanyAddress 二手车市场地址
                     */
                    std::string GetCompanyAddress() const;

                    /**
                     * 设置二手车市场地址
                     * @param CompanyAddress 二手车市场地址
                     */
                    void SetCompanyAddress(const std::string& _companyAddress);

                    /**
                     * 判断参数 CompanyAddress 是否已赋值
                     * @return CompanyAddress 是否已赋值
                     */
                    bool CompanyAddressHasBeenSet() const;

                    /**
                     * 获取转入地车辆管理所名称
                     * @return TransferAdministrationName 转入地车辆管理所名称
                     */
                    std::string GetTransferAdministrationName() const;

                    /**
                     * 设置转入地车辆管理所名称
                     * @param TransferAdministrationName 转入地车辆管理所名称
                     */
                    void SetTransferAdministrationName(const std::string& _transferAdministrationName);

                    /**
                     * 判断参数 TransferAdministrationName 是否已赋值
                     * @return TransferAdministrationName 是否已赋值
                     */
                    bool TransferAdministrationNameHasBeenSet() const;

                    /**
                     * 获取车牌号
                     * @return LicensePlate 车牌号
                     */
                    std::string GetLicensePlate() const;

                    /**
                     * 设置车牌号
                     * @param LicensePlate 车牌号
                     */
                    void SetLicensePlate(const std::string& _licensePlate);

                    /**
                     * 判断参数 LicensePlate 是否已赋值
                     * @return LicensePlate 是否已赋值
                     */
                    bool LicensePlateHasBeenSet() const;

                    /**
                     * 获取登记证号
                     * @return RegistrationNumber 登记证号
                     */
                    std::string GetRegistrationNumber() const;

                    /**
                     * 设置登记证号
                     * @param RegistrationNumber 登记证号
                     */
                    void SetRegistrationNumber(const std::string& _registrationNumber);

                    /**
                     * 判断参数 RegistrationNumber 是否已赋值
                     * @return RegistrationNumber 是否已赋值
                     */
                    bool RegistrationNumberHasBeenSet() const;

                    /**
                     * 获取车辆识别代码
                     * @return VIN 车辆识别代码
                     */
                    std::string GetVIN() const;

                    /**
                     * 设置车辆识别代码
                     * @param VIN 车辆识别代码
                     */
                    void SetVIN(const std::string& _vIN);

                    /**
                     * 判断参数 VIN 是否已赋值
                     * @return VIN 是否已赋值
                     */
                    bool VINHasBeenSet() const;

                    /**
                     * 获取厂牌型号
                     * @return VehicleModel 厂牌型号
                     */
                    std::string GetVehicleModel() const;

                    /**
                     * 设置厂牌型号
                     * @param VehicleModel 厂牌型号
                     */
                    void SetVehicleModel(const std::string& _vehicleModel);

                    /**
                     * 判断参数 VehicleModel 是否已赋值
                     * @return VehicleModel 是否已赋值
                     */
                    bool VehicleModelHasBeenSet() const;

                    /**
                     * 获取发票消费类型
                     * @return Kind 发票消费类型
                     */
                    std::string GetKind() const;

                    /**
                     * 设置发票消费类型
                     * @param Kind 发票消费类型
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取省
                     * @return Province 省
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省
                     * @param Province 省
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取市
                     * @return City 市
                     */
                    std::string GetCity() const;

                    /**
                     * 设置市
                     * @param City 市
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取车辆类型
                     * @return VehicleType 车辆类型
                     */
                    std::string GetVehicleType() const;

                    /**
                     * 设置车辆类型
                     * @param VehicleType 车辆类型
                     */
                    void SetVehicleType(const std::string& _vehicleType);

                    /**
                     * 判断参数 VehicleType 是否已赋值
                     * @return VehicleType 是否已赋值
                     */
                    bool VehicleTypeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取发票联次
                     * @return FormType 发票联次
                     */
                    std::string GetFormType() const;

                    /**
                     * 设置发票联次
                     * @param FormType 发票联次
                     */
                    void SetFormType(const std::string& _formType);

                    /**
                     * 判断参数 FormType 是否已赋值
                     * @return FormType 是否已赋值
                     */
                    bool FormTypeHasBeenSet() const;

                    /**
                     * 获取发票联名
                     * @return FormName 发票联名
                     */
                    std::string GetFormName() const;

                    /**
                     * 设置发票联名
                     * @param FormName 发票联名
                     */
                    void SetFormName(const std::string& _formName);

                    /**
                     * 判断参数 FormName 是否已赋值
                     * @return FormName 是否已赋值
                     */
                    bool FormNameHasBeenSet() const;

                    /**
                     * 获取是否有公司印章（0：没有，1：有）
                     * @return CompanySealMark 是否有公司印章（0：没有，1：有）
                     */
                    int64_t GetCompanySealMark() const;

                    /**
                     * 设置是否有公司印章（0：没有，1：有）
                     * @param CompanySealMark 是否有公司印章（0：没有，1：有）
                     */
                    void SetCompanySealMark(const int64_t& _companySealMark);

                    /**
                     * 判断参数 CompanySealMark 是否已赋值
                     * @return CompanySealMark 是否已赋值
                     */
                    bool CompanySealMarkHasBeenSet() const;

                private:

                    /**
                     * 发票名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 是否存在二维码（0：没有，1：有）
                     */
                    int64_t m_qRCodeMark;
                    bool m_qRCodeMarkHasBeenSet;

                    /**
                     * 发票代码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 发票号码
                     */
                    std::string m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 开票日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 价税合计（小写）
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 价税合计（大写）
                     */
                    std::string m_totalCn;
                    bool m_totalCnHasBeenSet;

                    /**
                     * 销货单位名称
                     */
                    std::string m_seller;
                    bool m_sellerHasBeenSet;

                    /**
                     * 销售方电话
                     */
                    std::string m_sellerTel;
                    bool m_sellerTelHasBeenSet;

                    /**
                     * 销售方单位代码/个人身份证号
                     */
                    std::string m_sellerTaxID;
                    bool m_sellerTaxIDHasBeenSet;

                    /**
                     * 销售方地址
                     */
                    std::string m_sellerAddress;
                    bool m_sellerAddressHasBeenSet;

                    /**
                     * 购买方名称
                     */
                    std::string m_buyer;
                    bool m_buyerHasBeenSet;

                    /**
                     * 购买方单位代码/个人身份证号
                     */
                    std::string m_buyerID;
                    bool m_buyerIDHasBeenSet;

                    /**
                     * 购买方地址
                     */
                    std::string m_buyerAddress;
                    bool m_buyerAddressHasBeenSet;

                    /**
                     * 购买方电话
                     */
                    std::string m_buyerTel;
                    bool m_buyerTelHasBeenSet;

                    /**
                     * 二手车市场
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 二手车市场纳税人识别号
                     */
                    std::string m_companyTaxID;
                    bool m_companyTaxIDHasBeenSet;

                    /**
                     * 二手车市场开户银行和账号
                     */
                    std::string m_companyBankAccount;
                    bool m_companyBankAccountHasBeenSet;

                    /**
                     * 二手车市场电话
                     */
                    std::string m_companyTel;
                    bool m_companyTelHasBeenSet;

                    /**
                     * 二手车市场地址
                     */
                    std::string m_companyAddress;
                    bool m_companyAddressHasBeenSet;

                    /**
                     * 转入地车辆管理所名称
                     */
                    std::string m_transferAdministrationName;
                    bool m_transferAdministrationNameHasBeenSet;

                    /**
                     * 车牌号
                     */
                    std::string m_licensePlate;
                    bool m_licensePlateHasBeenSet;

                    /**
                     * 登记证号
                     */
                    std::string m_registrationNumber;
                    bool m_registrationNumberHasBeenSet;

                    /**
                     * 车辆识别代码
                     */
                    std::string m_vIN;
                    bool m_vINHasBeenSet;

                    /**
                     * 厂牌型号
                     */
                    std::string m_vehicleModel;
                    bool m_vehicleModelHasBeenSet;

                    /**
                     * 发票消费类型
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 省
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 车辆类型
                     */
                    std::string m_vehicleType;
                    bool m_vehicleTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 发票联次
                     */
                    std::string m_formType;
                    bool m_formTypeHasBeenSet;

                    /**
                     * 发票联名
                     */
                    std::string m_formName;
                    bool m_formNameHasBeenSet;

                    /**
                     * 是否有公司印章（0：没有，1：有）
                     */
                    int64_t m_companySealMark;
                    bool m_companySealMarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_USEDCARPURCHASEINVOICE_H_
