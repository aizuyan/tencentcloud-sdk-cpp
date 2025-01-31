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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEINSPECTIONOVERVIEW_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEINSPECTIONOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateStatistic.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateDiagnosticOverview.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群巡检检查结果概览
                */
                class KubeJarvisStateInspectionOverview : public AbstractModel
                {
                public:
                    KubeJarvisStateInspectionOverview();
                    ~KubeJarvisStateInspectionOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ClusterId 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Statistics 诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateStatistic> GetStatistics() const;

                    /**
                     * 设置诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Statistics 诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatistics(const std::vector<KubeJarvisStateStatistic>& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     */
                    bool StatisticsHasBeenSet() const;

                    /**
                     * 获取诊断结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Diagnostics 诊断结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateDiagnosticOverview> GetDiagnostics() const;

                    /**
                     * 设置诊断结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Diagnostics 诊断结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDiagnostics(const std::vector<KubeJarvisStateDiagnosticOverview>& _diagnostics);

                    /**
                     * 判断参数 Diagnostics 是否已赋值
                     * @return Diagnostics 是否已赋值
                     */
                    bool DiagnosticsHasBeenSet() const;

                private:

                    /**
                     * 集群ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 诊断结果统计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateStatistic> m_statistics;
                    bool m_statisticsHasBeenSet;

                    /**
                     * 诊断结果详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateDiagnosticOverview> m_diagnostics;
                    bool m_diagnosticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATEINSPECTIONOVERVIEW_H_
