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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DISKBACKUP_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DISKBACKUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 云硬盘备份点。
                */
                class DiskBackup : public AbstractModel
                {
                public:
                    DiskBackup();
                    ~DiskBackup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云硬盘备份点的ID。
                     * @return DiskBackupId 云硬盘备份点的ID。
                     */
                    std::string GetDiskBackupId() const;

                    /**
                     * 设置云硬盘备份点的ID。
                     * @param DiskBackupId 云硬盘备份点的ID。
                     */
                    void SetDiskBackupId(const std::string& _diskBackupId);

                    /**
                     * 判断参数 DiskBackupId 是否已赋值
                     * @return DiskBackupId 是否已赋值
                     */
                    bool DiskBackupIdHasBeenSet() const;

                    /**
                     * 获取云硬盘备份点关联的云硬盘ID。
                     * @return DiskId 云硬盘备份点关联的云硬盘ID。
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置云硬盘备份点关联的云硬盘ID。
                     * @param DiskId 云硬盘备份点关联的云硬盘ID。
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取云硬盘大小，单位GB。
                     * @return DiskSize 云硬盘大小，单位GB。
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置云硬盘大小，单位GB。
                     * @param DiskSize 云硬盘大小，单位GB。
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     * @return DiskUsage 云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     */
                    std::string GetDiskUsage() const;

                    /**
                     * 设置云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     * @param DiskUsage 云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     */
                    void SetDiskUsage(const std::string& _diskUsage);

                    /**
                     * 判断参数 DiskUsage 是否已赋值
                     * @return DiskUsage 是否已赋值
                     */
                    bool DiskUsageHasBeenSet() const;

                    /**
                     * 获取备份点名称。
                     * @return DiskBackupName 备份点名称。
                     */
                    std::string GetDiskBackupName() const;

                    /**
                     * 设置备份点名称。
                     * @param DiskBackupName 备份点名称。
                     */
                    void SetDiskBackupName(const std::string& _diskBackupName);

                    /**
                     * 判断参数 DiskBackupName 是否已赋值
                     * @return DiskBackupName 是否已赋值
                     */
                    bool DiskBackupNameHasBeenSet() const;

                    /**
                     * 获取云硬盘备份点状态。取值范围：<br><li>NORMAL：正常<br><li>CREATING：创建中<br><li>ROLLBACKING：回滚中
                     * @return DiskBackupState 云硬盘备份点状态。取值范围：<br><li>NORMAL：正常<br><li>CREATING：创建中<br><li>ROLLBACKING：回滚中
                     */
                    std::string GetDiskBackupState() const;

                    /**
                     * 设置云硬盘备份点状态。取值范围：<br><li>NORMAL：正常<br><li>CREATING：创建中<br><li>ROLLBACKING：回滚中
                     * @param DiskBackupState 云硬盘备份点状态。取值范围：<br><li>NORMAL：正常<br><li>CREATING：创建中<br><li>ROLLBACKING：回滚中
                     */
                    void SetDiskBackupState(const std::string& _diskBackupState);

                    /**
                     * 判断参数 DiskBackupState 是否已赋值
                     * @return DiskBackupState 是否已赋值
                     */
                    bool DiskBackupStateHasBeenSet() const;

                    /**
                     * 获取云硬盘创建进度百分比。
                     * @return Percent 云硬盘创建进度百分比。
                     */
                    uint64_t GetPercent() const;

                    /**
                     * 设置云硬盘创建进度百分比。
                     * @param Percent 云硬盘创建进度百分比。
                     */
                    void SetPercent(const uint64_t& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取云硬盘备份点的创建时间。
                     * @return CreateTime 云硬盘备份点的创建时间。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置云硬盘备份点的创建时间。
                     * @param CreateTime 云硬盘备份点的创建时间。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取云盘是否为加密盘。取值范围：<br><li>false:表示非加密盘<br><li>true:表示加密盘。
                     * @return Encrypt 云盘是否为加密盘。取值范围：<br><li>false:表示非加密盘<br><li>true:表示加密盘。
                     */
                    bool GetEncrypt() const;

                    /**
                     * 设置云盘是否为加密盘。取值范围：<br><li>false:表示非加密盘<br><li>true:表示加密盘。
                     * @param Encrypt 云盘是否为加密盘。取值范围：<br><li>false:表示非加密盘<br><li>true:表示加密盘。
                     */
                    void SetEncrypt(const bool& _encrypt);

                    /**
                     * 判断参数 Encrypt 是否已赋值
                     * @return Encrypt 是否已赋值
                     */
                    bool EncryptHasBeenSet() const;

                private:

                    /**
                     * 云硬盘备份点的ID。
                     */
                    std::string m_diskBackupId;
                    bool m_diskBackupIdHasBeenSet;

                    /**
                     * 云硬盘备份点关联的云硬盘ID。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 云硬盘大小，单位GB。
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 云硬盘类型。取值范围：<br><li>SYSTEM_DISK：系统盘<br><li>DATA_DISK：数据盘。
                     */
                    std::string m_diskUsage;
                    bool m_diskUsageHasBeenSet;

                    /**
                     * 备份点名称。
                     */
                    std::string m_diskBackupName;
                    bool m_diskBackupNameHasBeenSet;

                    /**
                     * 云硬盘备份点状态。取值范围：<br><li>NORMAL：正常<br><li>CREATING：创建中<br><li>ROLLBACKING：回滚中
                     */
                    std::string m_diskBackupState;
                    bool m_diskBackupStateHasBeenSet;

                    /**
                     * 云硬盘创建进度百分比。
                     */
                    uint64_t m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 云硬盘备份点的创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 云盘是否为加密盘。取值范围：<br><li>false:表示非加密盘<br><li>true:表示加密盘。
                     */
                    bool m_encrypt;
                    bool m_encryptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DISKBACKUP_H_
