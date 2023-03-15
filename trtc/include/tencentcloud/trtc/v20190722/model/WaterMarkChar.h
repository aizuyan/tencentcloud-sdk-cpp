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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKCHAR_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKCHAR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 自定义文字水印数据结构
                */
                class WaterMarkChar : public AbstractModel
                {
                public:
                    WaterMarkChar();
                    ~WaterMarkChar() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文字水印的起始坐标Y值，从左上角开始
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Top 文字水印的起始坐标Y值，从左上角开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTop() const;

                    /**
                     * 设置文字水印的起始坐标Y值，从左上角开始
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Top 文字水印的起始坐标Y值，从左上角开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTop(const uint64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取文字水印的起始坐标X值，从左上角开始
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Left 文字水印的起始坐标X值，从左上角开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetLeft() const;

                    /**
                     * 设置文字水印的起始坐标X值，从左上角开始
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Left 文字水印的起始坐标X值，从左上角开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLeft(const uint64_t& _left);

                    /**
                     * 判断参数 Left 是否已赋值
                     * @return Left 是否已赋值
                     */
                    bool LeftHasBeenSet() const;

                    /**
                     * 获取文字水印的宽度，单位像素值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Width 文字水印的宽度，单位像素值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetWidth() const;

                    /**
                     * 设置文字水印的宽度，单位像素值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Width 文字水印的宽度，单位像素值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWidth(const uint64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取文字水印的高度，单位像素值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Height 文字水印的高度，单位像素值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetHeight() const;

                    /**
                     * 设置文字水印的高度，单位像素值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Height 文字水印的高度，单位像素值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHeight(const uint64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取水印文字的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Chars 水印文字的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChars() const;

                    /**
                     * 设置水印文字的内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Chars 水印文字的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChars(const std::string& _chars);

                    /**
                     * 判断参数 Chars 是否已赋值
                     * @return Chars 是否已赋值
                     */
                    bool CharsHasBeenSet() const;

                    /**
                     * 获取水印文字的大小，单位像素，默认14
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FontSize 水印文字的大小，单位像素，默认14
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetFontSize() const;

                    /**
                     * 设置水印文字的大小，单位像素，默认14
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FontSize 水印文字的大小，单位像素，默认14
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFontSize(const uint64_t& _fontSize);

                    /**
                     * 判断参数 FontSize 是否已赋值
                     * @return FontSize 是否已赋值
                     */
                    bool FontSizeHasBeenSet() const;

                    /**
                     * 获取水印文字的颜色，默认白色
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FontColor 水印文字的颜色，默认白色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFontColor() const;

                    /**
                     * 设置水印文字的颜色，默认白色
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FontColor 水印文字的颜色，默认白色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFontColor(const std::string& _fontColor);

                    /**
                     * 判断参数 FontColor 是否已赋值
                     * @return FontColor 是否已赋值
                     */
                    bool FontColorHasBeenSet() const;

                    /**
                     * 获取水印文字的背景色，为空代表背景透明，默认为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackGroundColor 水印文字的背景色，为空代表背景透明，默认为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBackGroundColor() const;

                    /**
                     * 设置水印文字的背景色，为空代表背景透明，默认为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BackGroundColor 水印文字的背景色，为空代表背景透明，默认为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBackGroundColor(const std::string& _backGroundColor);

                    /**
                     * 判断参数 BackGroundColor 是否已赋值
                     * @return BackGroundColor 是否已赋值
                     */
                    bool BackGroundColorHasBeenSet() const;

                private:

                    /**
                     * 文字水印的起始坐标Y值，从左上角开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * 文字水印的起始坐标X值，从左上角开始
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_left;
                    bool m_leftHasBeenSet;

                    /**
                     * 文字水印的宽度，单位像素值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 文字水印的高度，单位像素值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 水印文字的内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chars;
                    bool m_charsHasBeenSet;

                    /**
                     * 水印文字的大小，单位像素，默认14
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fontSize;
                    bool m_fontSizeHasBeenSet;

                    /**
                     * 水印文字的颜色，默认白色
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fontColor;
                    bool m_fontColorHasBeenSet;

                    /**
                     * 水印文字的背景色，为空代表背景透明，默认为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_backGroundColor;
                    bool m_backGroundColorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_WATERMARKCHAR_H_
