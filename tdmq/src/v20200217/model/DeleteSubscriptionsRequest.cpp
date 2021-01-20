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

#include <tencentcloud/tdmq/v20200217/model/DeleteSubscriptionsRequest.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace rapidjson;
using namespace std;

DeleteSubscriptionsRequest::DeleteSubscriptionsRequest() :
    m_subscriptionTopicSetsHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_environmentIdHasBeenSet(false)
{
}

string DeleteSubscriptionsRequest::ToJsonString() const
{
    Document d;
    d.SetObject();
    Document::AllocatorType& allocator = d.GetAllocator();


    if (m_subscriptionTopicSetsHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "SubscriptionTopicSets";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_subscriptionTopicSets.begin(); itr != m_subscriptionTopicSets.end(); ++itr, ++i)
        {
            d[key.c_str()].PushBack(Value(kObjectType).Move(), allocator);
            (*itr).ToJsonObject(d[key.c_str()][i], allocator);
        }
    }

    if (m_clusterIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "ClusterId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_clusterId.c_str(), allocator).Move(), allocator);
    }

    if (m_environmentIdHasBeenSet)
    {
        Value iKey(kStringType);
        string key = "EnvironmentId";
        iKey.SetString(key.c_str(), allocator);
        d.AddMember(iKey, Value(m_environmentId.c_str(), allocator).Move(), allocator);
    }


    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    d.Accept(writer);
    return buffer.GetString();
}


vector<SubscriptionTopic> DeleteSubscriptionsRequest::GetSubscriptionTopicSets() const
{
    return m_subscriptionTopicSets;
}

void DeleteSubscriptionsRequest::SetSubscriptionTopicSets(const vector<SubscriptionTopic>& _subscriptionTopicSets)
{
    m_subscriptionTopicSets = _subscriptionTopicSets;
    m_subscriptionTopicSetsHasBeenSet = true;
}

bool DeleteSubscriptionsRequest::SubscriptionTopicSetsHasBeenSet() const
{
    return m_subscriptionTopicSetsHasBeenSet;
}

string DeleteSubscriptionsRequest::GetClusterId() const
{
    return m_clusterId;
}

void DeleteSubscriptionsRequest::SetClusterId(const string& _clusterId)
{
    m_clusterId = _clusterId;
    m_clusterIdHasBeenSet = true;
}

bool DeleteSubscriptionsRequest::ClusterIdHasBeenSet() const
{
    return m_clusterIdHasBeenSet;
}

string DeleteSubscriptionsRequest::GetEnvironmentId() const
{
    return m_environmentId;
}

void DeleteSubscriptionsRequest::SetEnvironmentId(const string& _environmentId)
{
    m_environmentId = _environmentId;
    m_environmentIdHasBeenSet = true;
}

bool DeleteSubscriptionsRequest::EnvironmentIdHasBeenSet() const
{
    return m_environmentIdHasBeenSet;
}


