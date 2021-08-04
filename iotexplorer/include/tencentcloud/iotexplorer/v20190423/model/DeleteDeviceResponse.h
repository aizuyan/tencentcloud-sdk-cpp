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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETEDEVICERESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETEDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DeleteDevice返回参数结构体
                */
                class DeleteDeviceResponse : public AbstractModel
                {
                public:
                    DeleteDeviceResponse();
                    ~DeleteDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取删除的结果代码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultCode 删除的结果代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResultCode() const;

                    /**
                     * 判断参数 ResultCode 是否已赋值
                     * @return ResultCode 是否已赋值
                     */
                    bool ResultCodeHasBeenSet() const;

                    /**
                     * 获取删除的结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultMessage 删除的结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResultMessage() const;

                    /**
                     * 判断参数 ResultMessage 是否已赋值
                     * @return ResultMessage 是否已赋值
                     */
                    bool ResultMessageHasBeenSet() const;

                private:

                    /**
                     * 删除的结果代码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultCode;
                    bool m_resultCodeHasBeenSet;

                    /**
                     * 删除的结果信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultMessage;
                    bool m_resultMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETEDEVICERESPONSE_H_
