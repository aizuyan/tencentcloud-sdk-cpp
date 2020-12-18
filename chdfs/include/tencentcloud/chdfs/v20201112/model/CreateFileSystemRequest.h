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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEFILESYSTEMREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEFILESYSTEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * CreateFileSystem请求参数结构体
                */
                class CreateFileSystemRequest : public AbstractModel
                {
                public:
                    CreateFileSystemRequest();
                    ~CreateFileSystemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统名称
                     * @return FileSystemName 文件系统名称
                     */
                    std::string GetFileSystemName() const;

                    /**
                     * 设置文件系统名称
                     * @param FileSystemName 文件系统名称
                     */
                    void SetFileSystemName(const std::string& _fileSystemName);

                    /**
                     * 判断参数 FileSystemName 是否已赋值
                     * @return FileSystemName 是否已赋值
                     */
                    bool FileSystemNameHasBeenSet() const;

                    /**
                     * 获取文件系统容量（byte），下限为1G，上限为1P，且必须是1G的整数倍
                     * @return CapacityQuota 文件系统容量（byte），下限为1G，上限为1P，且必须是1G的整数倍
                     */
                    uint64_t GetCapacityQuota() const;

                    /**
                     * 设置文件系统容量（byte），下限为1G，上限为1P，且必须是1G的整数倍
                     * @param CapacityQuota 文件系统容量（byte），下限为1G，上限为1P，且必须是1G的整数倍
                     */
                    void SetCapacityQuota(const uint64_t& _capacityQuota);

                    /**
                     * 判断参数 CapacityQuota 是否已赋值
                     * @return CapacityQuota 是否已赋值
                     */
                    bool CapacityQuotaHasBeenSet() const;

                    /**
                     * 获取是否校验POSIX ACL
                     * @return PosixAcl 是否校验POSIX ACL
                     */
                    bool GetPosixAcl() const;

                    /**
                     * 设置是否校验POSIX ACL
                     * @param PosixAcl 是否校验POSIX ACL
                     */
                    void SetPosixAcl(const bool& _posixAcl);

                    /**
                     * 判断参数 PosixAcl 是否已赋值
                     * @return PosixAcl 是否已赋值
                     */
                    bool PosixAclHasBeenSet() const;

                    /**
                     * 获取文件系统描述，默认为空字符串
                     * @return Description 文件系统描述，默认为空字符串
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置文件系统描述，默认为空字符串
                     * @param Description 文件系统描述，默认为空字符串
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取超级用户名列表，默认为空数组
                     * @return SuperUsers 超级用户名列表，默认为空数组
                     */
                    std::vector<std::string> GetSuperUsers() const;

                    /**
                     * 设置超级用户名列表，默认为空数组
                     * @param SuperUsers 超级用户名列表，默认为空数组
                     */
                    void SetSuperUsers(const std::vector<std::string>& _superUsers);

                    /**
                     * 判断参数 SuperUsers 是否已赋值
                     * @return SuperUsers 是否已赋值
                     */
                    bool SuperUsersHasBeenSet() const;

                    /**
                     * 获取根目录Inode用户名，默认为hadoop
                     * @return RootInodeUser 根目录Inode用户名，默认为hadoop
                     */
                    std::string GetRootInodeUser() const;

                    /**
                     * 设置根目录Inode用户名，默认为hadoop
                     * @param RootInodeUser 根目录Inode用户名，默认为hadoop
                     */
                    void SetRootInodeUser(const std::string& _rootInodeUser);

                    /**
                     * 判断参数 RootInodeUser 是否已赋值
                     * @return RootInodeUser 是否已赋值
                     */
                    bool RootInodeUserHasBeenSet() const;

                    /**
                     * 获取根目录Inode组名，默认为supergroup
                     * @return RootInodeGroup 根目录Inode组名，默认为supergroup
                     */
                    std::string GetRootInodeGroup() const;

                    /**
                     * 设置根目录Inode组名，默认为supergroup
                     * @param RootInodeGroup 根目录Inode组名，默认为supergroup
                     */
                    void SetRootInodeGroup(const std::string& _rootInodeGroup);

                    /**
                     * 判断参数 RootInodeGroup 是否已赋值
                     * @return RootInodeGroup 是否已赋值
                     */
                    bool RootInodeGroupHasBeenSet() const;

                private:

                    /**
                     * 文件系统名称
                     */
                    std::string m_fileSystemName;
                    bool m_fileSystemNameHasBeenSet;

                    /**
                     * 文件系统容量（byte），下限为1G，上限为1P，且必须是1G的整数倍
                     */
                    uint64_t m_capacityQuota;
                    bool m_capacityQuotaHasBeenSet;

                    /**
                     * 是否校验POSIX ACL
                     */
                    bool m_posixAcl;
                    bool m_posixAclHasBeenSet;

                    /**
                     * 文件系统描述，默认为空字符串
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 超级用户名列表，默认为空数组
                     */
                    std::vector<std::string> m_superUsers;
                    bool m_superUsersHasBeenSet;

                    /**
                     * 根目录Inode用户名，默认为hadoop
                     */
                    std::string m_rootInodeUser;
                    bool m_rootInodeUserHasBeenSet;

                    /**
                     * 根目录Inode组名，默认为supergroup
                     */
                    std::string m_rootInodeGroup;
                    bool m_rootInodeGroupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_CREATEFILESYSTEMREQUEST_H_
