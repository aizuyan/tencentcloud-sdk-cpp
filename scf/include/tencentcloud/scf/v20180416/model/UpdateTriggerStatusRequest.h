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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_UPDATETRIGGERSTATUSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_UPDATETRIGGERSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateTriggerStatus请求参数结构体
                */
                class UpdateTriggerStatusRequest : public AbstractModel
                {
                public:
                    UpdateTriggerStatusRequest();
                    ~UpdateTriggerStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取触发器的初始是能状态OPEN表示开启 CLOSE表示关闭
                     * @return Enable 触发器的初始是能状态OPEN表示开启 CLOSE表示关闭
                     */
                    std::string GetEnable() const;

                    /**
                     * 设置触发器的初始是能状态OPEN表示开启 CLOSE表示关闭
                     * @param Enable 触发器的初始是能状态OPEN表示开启 CLOSE表示关闭
                     */
                    void SetEnable(const std::string& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取函数名称
                     * @return FunctionName 函数名称
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称
                     * @param FunctionName 函数名称
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取触发器名称
                     * @return TriggerName 触发器名称
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置触发器名称
                     * @param TriggerName 触发器名称
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取触发器类型
                     * @return Type 触发器类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置触发器类型
                     * @param Type 触发器类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取函数的版本，默认为 $LATEST，建议填写 [$DEFAULT](https://cloud.tencent.com/document/product/583/36149#.E9.BB.98.E8.AE.A4.E5.88.AB.E5.90.8D)方便后续进行版本的灰度发布。
                     * @return Qualifier 函数的版本，默认为 $LATEST，建议填写 [$DEFAULT](https://cloud.tencent.com/document/product/583/36149#.E9.BB.98.E8.AE.A4.E5.88.AB.E5.90.8D)方便后续进行版本的灰度发布。
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置函数的版本，默认为 $LATEST，建议填写 [$DEFAULT](https://cloud.tencent.com/document/product/583/36149#.E9.BB.98.E8.AE.A4.E5.88.AB.E5.90.8D)方便后续进行版本的灰度发布。
                     * @param Qualifier 函数的版本，默认为 $LATEST，建议填写 [$DEFAULT](https://cloud.tencent.com/document/product/583/36149#.E9.BB.98.E8.AE.A4.E5.88.AB.E5.90.8D)方便后续进行版本的灰度发布。
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取函数的命名空间
                     * @return Namespace 函数的命名空间
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数的命名空间
                     * @param Namespace 函数的命名空间
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取如果更新的触发器类型为 COS 触发器，该字段为必填值，存放 JSON 格式的数据 {"event":"cos:ObjectCreated:*"}，数据内容和 SetTrigger 接口中该字段的格式相同；如果更新的触发器类型为定时触发器或 CMQ 触发器，可以不指定该字段
                     * @return TriggerDesc 如果更新的触发器类型为 COS 触发器，该字段为必填值，存放 JSON 格式的数据 {"event":"cos:ObjectCreated:*"}，数据内容和 SetTrigger 接口中该字段的格式相同；如果更新的触发器类型为定时触发器或 CMQ 触发器，可以不指定该字段
                     */
                    std::string GetTriggerDesc() const;

                    /**
                     * 设置如果更新的触发器类型为 COS 触发器，该字段为必填值，存放 JSON 格式的数据 {"event":"cos:ObjectCreated:*"}，数据内容和 SetTrigger 接口中该字段的格式相同；如果更新的触发器类型为定时触发器或 CMQ 触发器，可以不指定该字段
                     * @param TriggerDesc 如果更新的触发器类型为 COS 触发器，该字段为必填值，存放 JSON 格式的数据 {"event":"cos:ObjectCreated:*"}，数据内容和 SetTrigger 接口中该字段的格式相同；如果更新的触发器类型为定时触发器或 CMQ 触发器，可以不指定该字段
                     */
                    void SetTriggerDesc(const std::string& _triggerDesc);

                    /**
                     * 判断参数 TriggerDesc 是否已赋值
                     * @return TriggerDesc 是否已赋值
                     */
                    bool TriggerDescHasBeenSet() const;

                private:

                    /**
                     * 触发器的初始是能状态OPEN表示开启 CLOSE表示关闭
                     */
                    std::string m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 触发器名称
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * 触发器类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 函数的版本，默认为 $LATEST，建议填写 [$DEFAULT](https://cloud.tencent.com/document/product/583/36149#.E9.BB.98.E8.AE.A4.E5.88.AB.E5.90.8D)方便后续进行版本的灰度发布。
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 函数的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 如果更新的触发器类型为 COS 触发器，该字段为必填值，存放 JSON 格式的数据 {"event":"cos:ObjectCreated:*"}，数据内容和 SetTrigger 接口中该字段的格式相同；如果更新的触发器类型为定时触发器或 CMQ 触发器，可以不指定该字段
                     */
                    std::string m_triggerDesc;
                    bool m_triggerDescHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_UPDATETRIGGERSTATUSREQUEST_H_
