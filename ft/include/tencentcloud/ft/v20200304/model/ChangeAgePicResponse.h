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

#ifndef TENCENTCLOUD_FT_V20200304_MODEL_CHANGEAGEPICRESPONSE_H_
#define TENCENTCLOUD_FT_V20200304_MODEL_CHANGEAGEPICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ft
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * ChangeAgePic返回参数结构体
                */
                class ChangeAgePicResponse : public AbstractModel
                {
                public:
                    ChangeAgePicResponse();
                    ~ChangeAgePicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取RspImgType 为 base64 时，返回处理后的图片 base64 数据。默认返回base64
                     * @return ResultImage RspImgType 为 base64 时，返回处理后的图片 base64 数据。默认返回base64
                     */
                    std::string GetResultImage() const;

                    /**
                     * 判断参数 ResultImage 是否已赋值
                     * @return ResultImage 是否已赋值
                     */
                    bool ResultImageHasBeenSet() const;

                    /**
                     * 获取RspImgType 为 url 时，返回处理后的图片 url 数据。
                     * @return ResultUrl RspImgType 为 url 时，返回处理后的图片 url 数据。
                     */
                    std::string GetResultUrl() const;

                    /**
                     * 判断参数 ResultUrl 是否已赋值
                     * @return ResultUrl 是否已赋值
                     */
                    bool ResultUrlHasBeenSet() const;

                private:

                    /**
                     * RspImgType 为 base64 时，返回处理后的图片 base64 数据。默认返回base64
                     */
                    std::string m_resultImage;
                    bool m_resultImageHasBeenSet;

                    /**
                     * RspImgType 为 url 时，返回处理后的图片 url 数据。
                     */
                    std::string m_resultUrl;
                    bool m_resultUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FT_V20200304_MODEL_CHANGEAGEPICRESPONSE_H_
