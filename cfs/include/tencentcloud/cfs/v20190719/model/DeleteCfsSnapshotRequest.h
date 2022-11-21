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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DELETECFSSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DELETECFSSNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DeleteCfsSnapshot请求参数结构体
                */
                class DeleteCfsSnapshotRequest : public AbstractModel
                {
                public:
                    DeleteCfsSnapshotRequest();
                    ~DeleteCfsSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取文件系统快照id
                     * @return SnapshotId 文件系统快照id
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置文件系统快照id
                     * @param SnapshotId 文件系统快照id
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取需要删除的文件文件系统快照ID 列表，快照ID，跟ID列表至少填一项
                     * @return SnapshotIds 需要删除的文件文件系统快照ID 列表，快照ID，跟ID列表至少填一项
                     */
                    std::vector<std::string> GetSnapshotIds() const;

                    /**
                     * 设置需要删除的文件文件系统快照ID 列表，快照ID，跟ID列表至少填一项
                     * @param SnapshotIds 需要删除的文件文件系统快照ID 列表，快照ID，跟ID列表至少填一项
                     */
                    void SetSnapshotIds(const std::vector<std::string>& _snapshotIds);

                    /**
                     * 判断参数 SnapshotIds 是否已赋值
                     * @return SnapshotIds 是否已赋值
                     */
                    bool SnapshotIdsHasBeenSet() const;

                private:

                    /**
                     * 文件系统快照id
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 需要删除的文件文件系统快照ID 列表，快照ID，跟ID列表至少填一项
                     */
                    std::vector<std::string> m_snapshotIds;
                    bool m_snapshotIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DELETECFSSNAPSHOTREQUEST_H_
