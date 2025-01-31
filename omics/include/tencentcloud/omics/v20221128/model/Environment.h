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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENT_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/ResourceIds.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 组学平台环境详情。
                */
                class Environment : public AbstractModel
                {
                public:
                    Environment();
                    ~Environment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境ID。
                     * @return EnvironmentId 环境ID。
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置环境ID。
                     * @param EnvironmentId 环境ID。
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取环境名称。
                     * @return Name 环境名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置环境名称。
                     * @param Name 环境名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取环境描述信息。
                     * @return Description 环境描述信息。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置环境描述信息。
                     * @param Description 环境描述信息。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取环境地域。
                     * @return Region 环境地域。
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置环境地域。
                     * @param Region 环境地域。
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取环境类型，取值范围：
- KUBERNETES：Kubernetes容器集群
- HPC：HPC高性能计算集群
                     * @return Type 环境类型，取值范围：
- KUBERNETES：Kubernetes容器集群
- HPC：HPC高性能计算集群
                     */
                    std::string GetType() const;

                    /**
                     * 设置环境类型，取值范围：
- KUBERNETES：Kubernetes容器集群
- HPC：HPC高性能计算集群
                     * @param Type 环境类型，取值范围：
- KUBERNETES：Kubernetes容器集群
- HPC：HPC高性能计算集群
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取环境状态，取值范围：
- INITIALIZING：创建中
- INITIALIZATION_ERROR：创建失败
- RUNNING：运行中
- ERROR：异常
- DELETING：正在删除
- DELETE_ERROR：删除失败
                     * @return Status 环境状态，取值范围：
- INITIALIZING：创建中
- INITIALIZATION_ERROR：创建失败
- RUNNING：运行中
- ERROR：异常
- DELETING：正在删除
- DELETE_ERROR：删除失败
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置环境状态，取值范围：
- INITIALIZING：创建中
- INITIALIZATION_ERROR：创建失败
- RUNNING：运行中
- ERROR：异常
- DELETING：正在删除
- DELETE_ERROR：删除失败
                     * @param Status 环境状态，取值范围：
- INITIALIZING：创建中
- INITIALIZATION_ERROR：创建失败
- RUNNING：运行中
- ERROR：异常
- DELETING：正在删除
- DELETE_ERROR：删除失败
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取环境是否可用。环境需要可用才能投递计算任务。
                     * @return Available 环境是否可用。环境需要可用才能投递计算任务。
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置环境是否可用。环境需要可用才能投递计算任务。
                     * @param Available 环境是否可用。环境需要可用才能投递计算任务。
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取环境信息。
                     * @return Message 环境信息。
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置环境信息。
                     * @param Message 环境信息。
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取云资源ID。
                     * @return ResourceIds 云资源ID。
                     */
                    ResourceIds GetResourceIds() const;

                    /**
                     * 设置云资源ID。
                     * @param ResourceIds 云资源ID。
                     */
                    void SetResourceIds(const ResourceIds& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取上个工作流UUID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastWorkflowUuid 上个工作流UUID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastWorkflowUuid() const;

                    /**
                     * 设置上个工作流UUID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastWorkflowUuid 上个工作流UUID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastWorkflowUuid(const std::string& _lastWorkflowUuid);

                    /**
                     * 判断参数 LastWorkflowUuid 是否已赋值
                     * @return LastWorkflowUuid 是否已赋值
                     */
                    bool LastWorkflowUuidHasBeenSet() const;

                    /**
                     * 获取创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreationTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreationTime() const;

                    /**
                     * 设置创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreationTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreationTime(const std::string& _creationTime);

                    /**
                     * 判断参数 CreationTime 是否已赋值
                     * @return CreationTime 是否已赋值
                     */
                    bool CreationTimeHasBeenSet() const;

                private:

                    /**
                     * 环境ID。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 环境名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 环境描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 环境地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 环境类型，取值范围：
- KUBERNETES：Kubernetes容器集群
- HPC：HPC高性能计算集群
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 环境状态，取值范围：
- INITIALIZING：创建中
- INITIALIZATION_ERROR：创建失败
- RUNNING：运行中
- ERROR：异常
- DELETING：正在删除
- DELETE_ERROR：删除失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 环境是否可用。环境需要可用才能投递计算任务。
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * 环境信息。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 云资源ID。
                     */
                    ResourceIds m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 上个工作流UUID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastWorkflowUuid;
                    bool m_lastWorkflowUuidHasBeenSet;

                    /**
                     * 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creationTime;
                    bool m_creationTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_ENVIRONMENT_H_
