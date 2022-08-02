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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPFAKEURLREQUEST_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPFAKEURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * CreateBPFakeURL请求参数结构体
                */
                class CreateBPFakeURLRequest : public AbstractModel
                {
                public:
                    CreateBPFakeURLRequest();
                    ~CreateBPFakeURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取xxx
                     * @return ProtectURLId xxx
                     */
                    int64_t GetProtectURLId() const;

                    /**
                     * 设置xxx
                     * @param ProtectURLId xxx
                     */
                    void SetProtectURLId(const int64_t& _protectURLId);

                    /**
                     * 判断参数 ProtectURLId 是否已赋值
                     * @return ProtectURLId 是否已赋值
                     */
                    bool ProtectURLIdHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return FakeURL xxx
                     */
                    std::string GetFakeURL() const;

                    /**
                     * 设置xxx
                     * @param FakeURL xxx
                     */
                    void SetFakeURL(const std::string& _fakeURL);

                    /**
                     * 判断参数 FakeURL 是否已赋值
                     * @return FakeURL 是否已赋值
                     */
                    bool FakeURLHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return SnapshotNames xxx
                     */
                    std::vector<std::string> GetSnapshotNames() const;

                    /**
                     * 设置xxx
                     * @param SnapshotNames xxx
                     */
                    void SetSnapshotNames(const std::vector<std::string>& _snapshotNames);

                    /**
                     * 判断参数 SnapshotNames 是否已赋值
                     * @return SnapshotNames 是否已赋值
                     */
                    bool SnapshotNamesHasBeenSet() const;

                    /**
                     * 获取xxx
                     * @return Note xxx
                     */
                    std::string GetNote() const;

                    /**
                     * 设置xxx
                     * @param Note xxx
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * xxx
                     */
                    int64_t m_protectURLId;
                    bool m_protectURLIdHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_fakeURL;
                    bool m_fakeURLHasBeenSet;

                    /**
                     * xxx
                     */
                    std::vector<std::string> m_snapshotNames;
                    bool m_snapshotNamesHasBeenSet;

                    /**
                     * xxx
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATEBPFAKEURLREQUEST_H_
