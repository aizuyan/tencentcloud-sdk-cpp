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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKSRESPONSE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ModelAccelerateTask.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeModelAccelerateTasks返回参数结构体
                */
                class DescribeModelAccelerateTasksResponse : public AbstractModel
                {
                public:
                    DescribeModelAccelerateTasksResponse();
                    ~DescribeModelAccelerateTasksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取模型加速任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelAccelerateTasks 模型加速任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ModelAccelerateTask> GetModelAccelerateTasks() const;

                    /**
                     * 判断参数 ModelAccelerateTasks 是否已赋值
                     * @return ModelAccelerateTasks 是否已赋值
                     */
                    bool ModelAccelerateTasksHasBeenSet() const;

                    /**
                     * 获取任务总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 任务总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 模型加速任务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ModelAccelerateTask> m_modelAccelerateTasks;
                    bool m_modelAccelerateTasksHasBeenSet;

                    /**
                     * 任务总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELACCELERATETASKSRESPONSE_H_
