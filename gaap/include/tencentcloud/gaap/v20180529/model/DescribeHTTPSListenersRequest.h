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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEHTTPSLISTENERSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEHTTPSLISTENERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeHTTPSListeners请求参数结构体
                */
                class DescribeHTTPSListenersRequest : public AbstractModel
                {
                public:
                    DescribeHTTPSListenersRequest();
                    ~DescribeHTTPSListenersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件，通道ID
                     * @return ProxyId 过滤条件，通道ID
                     */
                    std::string GetProxyId() const;

                    /**
                     * 设置过滤条件，通道ID
                     * @param ProxyId 过滤条件，通道ID
                     */
                    void SetProxyId(const std::string& _proxyId);

                    /**
                     * 判断参数 ProxyId 是否已赋值
                     * @return ProxyId 是否已赋值
                     */
                    bool ProxyIdHasBeenSet() const;

                    /**
                     * 获取过滤条件，根据监听器ID进行精确查询。
                     * @return ListenerId 过滤条件，根据监听器ID进行精确查询。
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置过滤条件，根据监听器ID进行精确查询。
                     * @param ListenerId 过滤条件，根据监听器ID进行精确查询。
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取过滤条件，根据监听器名称进行精确查询。
                     * @return ListenerName 过滤条件，根据监听器名称进行精确查询。
                     */
                    std::string GetListenerName() const;

                    /**
                     * 设置过滤条件，根据监听器名称进行精确查询。
                     * @param ListenerName 过滤条件，根据监听器名称进行精确查询。
                     */
                    void SetListenerName(const std::string& _listenerName);

                    /**
                     * 判断参数 ListenerName 是否已赋值
                     * @return ListenerName 是否已赋值
                     */
                    bool ListenerNameHasBeenSet() const;

                    /**
                     * 获取过滤条件，根据监听器端口进行精确查询。
                     * @return Port 过滤条件，根据监听器端口进行精确查询。
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置过滤条件，根据监听器端口进行精确查询。
                     * @param Port 过滤条件，根据监听器端口进行精确查询。
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取偏移量， 默认为0
                     * @return Offset 偏移量， 默认为0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量， 默认为0
                     * @param Offset 偏移量， 默认为0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制数量，默认为20
                     * @return Limit 限制数量，默认为20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制数量，默认为20
                     * @param Limit 限制数量，默认为20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取过滤条件，支持按照端口或监听器名称进行模糊查询
                     * @return SearchValue 过滤条件，支持按照端口或监听器名称进行模糊查询
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置过滤条件，支持按照端口或监听器名称进行模糊查询
                     * @param SearchValue 过滤条件，支持按照端口或监听器名称进行模糊查询
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     */
                    bool SearchValueHasBeenSet() const;

                    /**
                     * 获取过滤条件，通道组ID
                     * @return GroupId 过滤条件，通道组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置过滤条件，通道组ID
                     * @param GroupId 过滤条件，通道组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取支持Http3的开关，其中：
0，表示不需要支持Http3接入；
1，表示需要支持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
该功能的启停无法在监听器创建完毕后再修改。
                     * @return Http3Supported 支持Http3的开关，其中：
0，表示不需要支持Http3接入；
1，表示需要支持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
该功能的启停无法在监听器创建完毕后再修改。
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置支持Http3的开关，其中：
0，表示不需要支持Http3接入；
1，表示需要支持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
该功能的启停无法在监听器创建完毕后再修改。
                     * @param Http3Supported 支持Http3的开关，其中：
0，表示不需要支持Http3接入；
1，表示需要支持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
该功能的启停无法在监听器创建完毕后再修改。
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     */
                    bool Http3SupportedHasBeenSet() const;

                private:

                    /**
                     * 过滤条件，通道ID
                     */
                    std::string m_proxyId;
                    bool m_proxyIdHasBeenSet;

                    /**
                     * 过滤条件，根据监听器ID进行精确查询。
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * 过滤条件，根据监听器名称进行精确查询。
                     */
                    std::string m_listenerName;
                    bool m_listenerNameHasBeenSet;

                    /**
                     * 过滤条件，根据监听器端口进行精确查询。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 偏移量， 默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制数量，默认为20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件，支持按照端口或监听器名称进行模糊查询
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                    /**
                     * 过滤条件，通道组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 支持Http3的开关，其中：
0，表示不需要支持Http3接入；
1，表示需要支持Http3接入。
注意：如果支持了Http3的功能，那么该监听器会占用对应的UDP接入端口，不可再创建相同端口的UDP监听器。
该功能的启停无法在监听器创建完毕后再修改。
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEHTTPSLISTENERSREQUEST_H_
