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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEORUPDATERESOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEORUPDATERESOURCEREQUEST_H_

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
                * CreateOrUpdateResource请求参数结构体
                */
                class CreateOrUpdateResourceRequest : public AbstractModel
                {
                public:
                    CreateOrUpdateResourceRequest();
                    ~CreateOrUpdateResourceRequest() = default;
                    std::string ToJsonString() const;


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

                    /**
                     * 获取文件名
                     * @return Files 文件名
                     */
                    std::vector<std::string> GetFiles() const;

                    /**
                     * 设置文件名
                     * @param Files 文件名
                     */
                    void SetFiles(const std::vector<std::string>& _files);

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     */
                    bool FilesHasBeenSet() const;

                    /**
                     * 获取文件所属路径，资源管理根路径为 /datastudio/resouce
                     * @return FilePath 文件所属路径，资源管理根路径为 /datastudio/resouce
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置文件所属路径，资源管理根路径为 /datastudio/resouce
                     * @param FilePath 文件所属路径，资源管理根路径为 /datastudio/resouce
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取cos存储桶名字
                     * @return CosBucketName cos存储桶名字
                     */
                    std::string GetCosBucketName() const;

                    /**
                     * 设置cos存储桶名字
                     * @param CosBucketName cos存储桶名字
                     */
                    void SetCosBucketName(const std::string& _cosBucketName);

                    /**
                     * 判断参数 CosBucketName 是否已赋值
                     * @return CosBucketName 是否已赋值
                     */
                    bool CosBucketNameHasBeenSet() const;

                    /**
                     * 获取cos所属地域
                     * @return CosRegion cos所属地域
                     */
                    std::string GetCosRegion() const;

                    /**
                     * 设置cos所属地域
                     * @param CosRegion cos所属地域
                     */
                    void SetCosRegion(const std::string& _cosRegion);

                    /**
                     * 判断参数 CosRegion 是否已赋值
                     * @return CosRegion 是否已赋值
                     */
                    bool CosRegionHasBeenSet() const;

                    /**
                     * 获取是否为新文件，新增为 true，更新为 false
                     * @return NewFile 是否为新文件，新增为 true，更新为 false
                     */
                    bool GetNewFile() const;

                    /**
                     * 设置是否为新文件，新增为 true，更新为 false
                     * @param NewFile 是否为新文件，新增为 true，更新为 false
                     */
                    void SetNewFile(const bool& _newFile);

                    /**
                     * 判断参数 NewFile 是否已赋值
                     * @return NewFile 是否已赋值
                     */
                    bool NewFileHasBeenSet() const;

                    /**
                     * 获取文件大小
                     * @return FilesSize 文件大小
                     */
                    std::vector<std::string> GetFilesSize() const;

                    /**
                     * 设置文件大小
                     * @param FilesSize 文件大小
                     */
                    void SetFilesSize(const std::vector<std::string>& _filesSize);

                    /**
                     * 判断参数 FilesSize 是否已赋值
                     * @return FilesSize 是否已赋值
                     */
                    bool FilesSizeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 文件名
                     */
                    std::vector<std::string> m_files;
                    bool m_filesHasBeenSet;

                    /**
                     * 文件所属路径，资源管理根路径为 /datastudio/resouce
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * cos存储桶名字
                     */
                    std::string m_cosBucketName;
                    bool m_cosBucketNameHasBeenSet;

                    /**
                     * cos所属地域
                     */
                    std::string m_cosRegion;
                    bool m_cosRegionHasBeenSet;

                    /**
                     * 是否为新文件，新增为 true，更新为 false
                     */
                    bool m_newFile;
                    bool m_newFileHasBeenSet;

                    /**
                     * 文件大小
                     */
                    std::vector<std::string> m_filesSize;
                    bool m_filesSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATEORUPDATERESOURCEREQUEST_H_
