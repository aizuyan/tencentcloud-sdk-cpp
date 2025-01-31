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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_RELEASEDETAILS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_RELEASEDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 应用市场的安装应用详情
                */
                class ReleaseDetails : public AbstractModel
                {
                public:
                    ReleaseDetails();
                    ~ReleaseDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用名称
                     * @return Name 应用名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称
                     * @param Name 应用名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取应用所在命名空间
                     * @return Namespace 应用所在命名空间
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置应用所在命名空间
                     * @param Namespace 应用所在命名空间
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取应用当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 应用当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetVersion() const;

                    /**
                     * 设置应用当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Version 应用当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVersion(const uint64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取应用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 应用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置应用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 应用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取应用提示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Notes 应用提示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNotes() const;

                    /**
                     * 设置应用提示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Notes 应用提示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNotes(const std::string& _notes);

                    /**
                     * 判断参数 Notes 是否已赋值
                     * @return Notes 是否已赋值
                     */
                    bool NotesHasBeenSet() const;

                    /**
                     * 获取用户自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Config 用户自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置用户自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Config 用户自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取应用资源详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Manifest 应用资源详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetManifest() const;

                    /**
                     * 设置应用资源详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Manifest 应用资源详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetManifest(const std::string& _manifest);

                    /**
                     * 判断参数 Manifest 是否已赋值
                     * @return Manifest 是否已赋值
                     */
                    bool ManifestHasBeenSet() const;

                    /**
                     * 获取应用制品版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChartVersion 应用制品版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChartVersion() const;

                    /**
                     * 设置应用制品版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChartVersion 应用制品版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChartVersion(const std::string& _chartVersion);

                    /**
                     * 判断参数 ChartVersion 是否已赋值
                     * @return ChartVersion 是否已赋值
                     */
                    bool ChartVersionHasBeenSet() const;

                    /**
                     * 获取应用制品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChartName 应用制品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChartName() const;

                    /**
                     * 设置应用制品名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChartName 应用制品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChartName(const std::string& _chartName);

                    /**
                     * 判断参数 ChartName 是否已赋值
                     * @return ChartName 是否已赋值
                     */
                    bool ChartNameHasBeenSet() const;

                    /**
                     * 获取应用制品描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChartDescription 应用制品描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetChartDescription() const;

                    /**
                     * 设置应用制品描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ChartDescription 应用制品描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetChartDescription(const std::string& _chartDescription);

                    /**
                     * 判断参数 ChartDescription 是否已赋值
                     * @return ChartDescription 是否已赋值
                     */
                    bool ChartDescriptionHasBeenSet() const;

                    /**
                     * 获取应用制品app版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppVersion 应用制品app版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAppVersion() const;

                    /**
                     * 设置应用制品app版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppVersion 应用制品app版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppVersion(const std::string& _appVersion);

                    /**
                     * 判断参数 AppVersion 是否已赋值
                     * @return AppVersion 是否已赋值
                     */
                    bool AppVersionHasBeenSet() const;

                    /**
                     * 获取应用首次部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstDeployedTime 应用首次部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFirstDeployedTime() const;

                    /**
                     * 设置应用首次部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FirstDeployedTime 应用首次部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFirstDeployedTime(const std::string& _firstDeployedTime);

                    /**
                     * 判断参数 FirstDeployedTime 是否已赋值
                     * @return FirstDeployedTime 是否已赋值
                     */
                    bool FirstDeployedTimeHasBeenSet() const;

                    /**
                     * 获取应用最近部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastDeployedTime 应用最近部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastDeployedTime() const;

                    /**
                     * 设置应用最近部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastDeployedTime 应用最近部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastDeployedTime(const std::string& _lastDeployedTime);

                    /**
                     * 判断参数 LastDeployedTime 是否已赋值
                     * @return LastDeployedTime 是否已赋值
                     */
                    bool LastDeployedTimeHasBeenSet() const;

                    /**
                     * 获取应用参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputedValues 应用参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetComputedValues() const;

                    /**
                     * 设置应用参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ComputedValues 应用参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetComputedValues(const std::string& _computedValues);

                    /**
                     * 判断参数 ComputedValues 是否已赋值
                     * @return ComputedValues 是否已赋值
                     */
                    bool ComputedValuesHasBeenSet() const;

                private:

                    /**
                     * 应用名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用所在命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 应用当前版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 应用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 应用提示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_notes;
                    bool m_notesHasBeenSet;

                    /**
                     * 用户自定义参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 应用资源详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_manifest;
                    bool m_manifestHasBeenSet;

                    /**
                     * 应用制品版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chartVersion;
                    bool m_chartVersionHasBeenSet;

                    /**
                     * 应用制品名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chartName;
                    bool m_chartNameHasBeenSet;

                    /**
                     * 应用制品描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chartDescription;
                    bool m_chartDescriptionHasBeenSet;

                    /**
                     * 应用制品app版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appVersion;
                    bool m_appVersionHasBeenSet;

                    /**
                     * 应用首次部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstDeployedTime;
                    bool m_firstDeployedTimeHasBeenSet;

                    /**
                     * 应用最近部署时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastDeployedTime;
                    bool m_lastDeployedTimeHasBeenSet;

                    /**
                     * 应用参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_computedValues;
                    bool m_computedValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_RELEASEDETAILS_H_
