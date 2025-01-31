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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERESOURCEPATHREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERESOURCEPATHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CreateResourcePath请求参数结构体
                */
                class CreateResourcePathRequest : public AbstractModel
                {
                public:
                    CreateResourcePathRequest();
                    ~CreateResourcePathRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件夹名称，如 aaa
                     * @return Name 文件夹名称，如 aaa
                     */
                    std::string GetName() const;

                    /**
                     * 设置文件夹名称，如 aaa
                     * @param Name 文件夹名称，如 aaa
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取文件夹所属父目录，请注意，根目录为 /datastudio/resource
                     * @return FilePath 文件夹所属父目录，请注意，根目录为 /datastudio/resource
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件夹所属父目录，请注意，根目录为 /datastudio/resource
                     * @param FilePath 文件夹所属父目录，请注意，根目录为 /datastudio/resource
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 文件夹名称，如 aaa
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 文件夹所属父目录，请注意，根目录为 /datastudio/resource
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATERESOURCEPATHREQUEST_H_
