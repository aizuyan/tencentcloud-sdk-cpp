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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/BaselineRule.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyBaselineRule请求参数结构体
                */
                class ModifyBaselineRuleRequest : public AbstractModel
                {
                public:
                    ModifyBaselineRuleRequest();
                    ~ModifyBaselineRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return Data 无
                     */
                    BaselineRule GetData() const;

                    /**
                     * 设置无
                     * @param Data 无
                     */
                    void SetData(const BaselineRule& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取是否过滤全选
                     * @return SelectAll 是否过滤全选
                     */
                    int64_t GetSelectAll() const;

                    /**
                     * 设置是否过滤全选
                     * @param SelectAll 是否过滤全选
                     */
                    void SetSelectAll(const int64_t& _selectAll);

                    /**
                     * 判断参数 SelectAll 是否已赋值
                     * @return SelectAll 是否已赋值
                     */
                    bool SelectAllHasBeenSet() const;

                    /**
                     * 获取<li>ItemName - string - 是否必填：否 - 项名称</li>
                     * @return Filters <li>ItemName - string - 是否必填：否 - 项名称</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>ItemName - string - 是否必填：否 - 项名称</li>
                     * @param Filters <li>ItemName - string - 是否必填：否 - 项名称</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    BaselineRule m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 是否过滤全选
                     */
                    int64_t m_selectAll;
                    bool m_selectAllHasBeenSet;

                    /**
                     * <li>ItemName - string - 是否必填：否 - 项名称</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYBASELINERULEREQUEST_H_
