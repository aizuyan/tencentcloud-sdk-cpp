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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETDETECTINFOENHANCEDREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETDETECTINFOENHANCEDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetDetectInfoEnhanced请求参数结构体
                */
                class GetDetectInfoEnhancedRequest : public AbstractModel
                {
                public:
                    GetDetectInfoEnhancedRequest();
                    ~GetDetectInfoEnhancedRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取人脸核身流程的标识，调用DetectAuth接口时生成。
                     * @return BizToken 人脸核身流程的标识，调用DetectAuth接口时生成。
                     */
                    std::string GetBizToken() const;

                    /**
                     * 设置人脸核身流程的标识，调用DetectAuth接口时生成。
                     * @param BizToken 人脸核身流程的标识，调用DetectAuth接口时生成。
                     */
                    void SetBizToken(const std::string& _bizToken);

                    /**
                     * 判断参数 BizToken 是否已赋值
                     * @return BizToken 是否已赋值
                     */
                    bool BizTokenHasBeenSet() const;

                    /**
                     * 获取用于细分客户使用场景，由腾讯侧在线下对接时分配。
                     * @return RuleId 用于细分客户使用场景，由腾讯侧在线下对接时分配。
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置用于细分客户使用场景，由腾讯侧在线下对接时分配。
                     * @param RuleId 用于细分客户使用场景，由腾讯侧在线下对接时分配。
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取指定拉取的结果信息，取值（0：全部；1：文本类；2：身份证信息；3：视频最佳截图信息）。
如 13表示拉取文本类、视频最佳截图信息。
默认值：0
                     * @return InfoType 指定拉取的结果信息，取值（0：全部；1：文本类；2：身份证信息；3：视频最佳截图信息）。
如 13表示拉取文本类、视频最佳截图信息。
默认值：0
                     */
                    std::string GetInfoType() const;

                    /**
                     * 设置指定拉取的结果信息，取值（0：全部；1：文本类；2：身份证信息；3：视频最佳截图信息）。
如 13表示拉取文本类、视频最佳截图信息。
默认值：0
                     * @param InfoType 指定拉取的结果信息，取值（0：全部；1：文本类；2：身份证信息；3：视频最佳截图信息）。
如 13表示拉取文本类、视频最佳截图信息。
默认值：0
                     */
                    void SetInfoType(const std::string& _infoType);

                    /**
                     * 判断参数 InfoType 是否已赋值
                     * @return InfoType 是否已赋值
                     */
                    bool InfoTypeHasBeenSet() const;

                    /**
                     * 获取从活体视频中截取一定张数的最佳帧（仅部分服务支持，若需使用请与慧眼小助手沟通）。默认为0，最大为10，超出10的最多只给10张。（InfoType需要包含3）
                     * @return BestFramesCount 从活体视频中截取一定张数的最佳帧（仅部分服务支持，若需使用请与慧眼小助手沟通）。默认为0，最大为10，超出10的最多只给10张。（InfoType需要包含3）
                     */
                    uint64_t GetBestFramesCount() const;

                    /**
                     * 设置从活体视频中截取一定张数的最佳帧（仅部分服务支持，若需使用请与慧眼小助手沟通）。默认为0，最大为10，超出10的最多只给10张。（InfoType需要包含3）
                     * @param BestFramesCount 从活体视频中截取一定张数的最佳帧（仅部分服务支持，若需使用请与慧眼小助手沟通）。默认为0，最大为10，超出10的最多只给10张。（InfoType需要包含3）
                     */
                    void SetBestFramesCount(const uint64_t& _bestFramesCount);

                    /**
                     * 判断参数 BestFramesCount 是否已赋值
                     * @return BestFramesCount 是否已赋值
                     */
                    bool BestFramesCountHasBeenSet() const;

                    /**
                     * 获取是否对身份证照片进行裁边。默认为false。（InfoType需要包含2）
                     * @return IsCutIdCardImage 是否对身份证照片进行裁边。默认为false。（InfoType需要包含2）
                     */
                    bool GetIsCutIdCardImage() const;

                    /**
                     * 设置是否对身份证照片进行裁边。默认为false。（InfoType需要包含2）
                     * @param IsCutIdCardImage 是否对身份证照片进行裁边。默认为false。（InfoType需要包含2）
                     */
                    void SetIsCutIdCardImage(const bool& _isCutIdCardImage);

                    /**
                     * 判断参数 IsCutIdCardImage 是否已赋值
                     * @return IsCutIdCardImage 是否已赋值
                     */
                    bool IsCutIdCardImageHasBeenSet() const;

                    /**
                     * 获取是否需要从身份证中抠出头像。默认为false。（InfoType需要包含2）
                     * @return IsNeedIdCardAvatar 是否需要从身份证中抠出头像。默认为false。（InfoType需要包含2）
                     */
                    bool GetIsNeedIdCardAvatar() const;

                    /**
                     * 设置是否需要从身份证中抠出头像。默认为false。（InfoType需要包含2）
                     * @param IsNeedIdCardAvatar 是否需要从身份证中抠出头像。默认为false。（InfoType需要包含2）
                     */
                    void SetIsNeedIdCardAvatar(const bool& _isNeedIdCardAvatar);

                    /**
                     * 判断参数 IsNeedIdCardAvatar 是否已赋值
                     * @return IsNeedIdCardAvatar 是否已赋值
                     */
                    bool IsNeedIdCardAvatarHasBeenSet() const;

                    /**
                     * 获取是否需要对返回中的敏感信息进行加密。其中敏感信息包括：Response.Text.IdCard、Response.Text.Name、Response.Text.OcrIdCard、Response.Text.OcrName
                     * @return IsEncrypt 是否需要对返回中的敏感信息进行加密。其中敏感信息包括：Response.Text.IdCard、Response.Text.Name、Response.Text.OcrIdCard、Response.Text.OcrName
                     */
                    bool GetIsEncrypt() const;

                    /**
                     * 设置是否需要对返回中的敏感信息进行加密。其中敏感信息包括：Response.Text.IdCard、Response.Text.Name、Response.Text.OcrIdCard、Response.Text.OcrName
                     * @param IsEncrypt 是否需要对返回中的敏感信息进行加密。其中敏感信息包括：Response.Text.IdCard、Response.Text.Name、Response.Text.OcrIdCard、Response.Text.OcrName
                     */
                    void SetIsEncrypt(const bool& _isEncrypt);

                    /**
                     * 判断参数 IsEncrypt 是否已赋值
                     * @return IsEncrypt 是否已赋值
                     */
                    bool IsEncryptHasBeenSet() const;

                private:

                    /**
                     * 人脸核身流程的标识，调用DetectAuth接口时生成。
                     */
                    std::string m_bizToken;
                    bool m_bizTokenHasBeenSet;

                    /**
                     * 用于细分客户使用场景，由腾讯侧在线下对接时分配。
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 指定拉取的结果信息，取值（0：全部；1：文本类；2：身份证信息；3：视频最佳截图信息）。
如 13表示拉取文本类、视频最佳截图信息。
默认值：0
                     */
                    std::string m_infoType;
                    bool m_infoTypeHasBeenSet;

                    /**
                     * 从活体视频中截取一定张数的最佳帧（仅部分服务支持，若需使用请与慧眼小助手沟通）。默认为0，最大为10，超出10的最多只给10张。（InfoType需要包含3）
                     */
                    uint64_t m_bestFramesCount;
                    bool m_bestFramesCountHasBeenSet;

                    /**
                     * 是否对身份证照片进行裁边。默认为false。（InfoType需要包含2）
                     */
                    bool m_isCutIdCardImage;
                    bool m_isCutIdCardImageHasBeenSet;

                    /**
                     * 是否需要从身份证中抠出头像。默认为false。（InfoType需要包含2）
                     */
                    bool m_isNeedIdCardAvatar;
                    bool m_isNeedIdCardAvatarHasBeenSet;

                    /**
                     * 是否需要对返回中的敏感信息进行加密。其中敏感信息包括：Response.Text.IdCard、Response.Text.Name、Response.Text.OcrIdCard、Response.Text.OcrName
                     */
                    bool m_isEncrypt;
                    bool m_isEncryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETDETECTINFOENHANCEDREQUEST_H_
