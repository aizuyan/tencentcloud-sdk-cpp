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

#include <tencentcloud/nlp/v20190408/model/SimilarWordsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Nlp::V20190408::Model;
using namespace std;

SimilarWordsRequest::SimilarWordsRequest() :
    m_textHasBeenSet(false),
    m_wordNumberHasBeenSet(false)
{
}

string SimilarWordsRequest::ToJsonString() const
{
    rapidjson::Document d;
    d.SetObject();
    rapidjson::Document::AllocatorType& allocator = d.GetAllocator();


    if (m_textHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Text";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, rapidjson::Value(m_text.c_str(), allocator).Move(), allocator);
    }

    if (m_wordNumberHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "WordNumber";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, m_wordNumber, allocator);
    }


    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


string SimilarWordsRequest::GetText() const
{
    return m_text;
}

void SimilarWordsRequest::SetText(const string& _text)
{
    m_text = _text;
    m_textHasBeenSet = true;
}

bool SimilarWordsRequest::TextHasBeenSet() const
{
    return m_textHasBeenSet;
}

uint64_t SimilarWordsRequest::GetWordNumber() const
{
    return m_wordNumber;
}

void SimilarWordsRequest::SetWordNumber(const uint64_t& _wordNumber)
{
    m_wordNumber = _wordNumber;
    m_wordNumberHasBeenSet = true;
}

bool SimilarWordsRequest::WordNumberHasBeenSet() const
{
    return m_wordNumberHasBeenSet;
}


