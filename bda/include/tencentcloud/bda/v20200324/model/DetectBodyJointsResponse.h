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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_DETECTBODYJOINTSRESPONSE_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_DETECTBODYJOINTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/BodyJointsResult.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DetectBodyJoints返回参数结构体
                */
                class DetectBodyJointsResponse : public AbstractModel
                {
                public:
                    DetectBodyJointsResponse();
                    ~DetectBodyJointsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取图中检测出的人体框和人体关键点， 包含14个人体关键点的坐标，建议根据人体框置信度筛选出合格的人体；
                     * @return BodyJointsResults 图中检测出的人体框和人体关键点， 包含14个人体关键点的坐标，建议根据人体框置信度筛选出合格的人体；
                     */
                    std::vector<BodyJointsResult> GetBodyJointsResults() const;

                    /**
                     * 判断参数 BodyJointsResults 是否已赋值
                     * @return BodyJointsResults 是否已赋值
                     */
                    bool BodyJointsResultsHasBeenSet() const;

                private:

                    /**
                     * 图中检测出的人体框和人体关键点， 包含14个人体关键点的坐标，建议根据人体框置信度筛选出合格的人体；
                     */
                    std::vector<BodyJointsResult> m_bodyJointsResults;
                    bool m_bodyJointsResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_DETECTBODYJOINTSRESPONSE_H_
