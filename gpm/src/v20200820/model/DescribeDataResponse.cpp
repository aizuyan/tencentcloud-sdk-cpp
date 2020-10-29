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

#include <tencentcloud/gpm/v20200820/model/DescribeDataResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Gpm::V20200820::Model;
using namespace rapidjson;
using namespace std;

DescribeDataResponse::DescribeDataResponse() :
    m_overviewDataHasBeenSet(false),
    m_trendDataHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDataResponse::Deserialize(const string &payload)
{
    Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Error("response `Response` is null or not object"));
    }
    Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("OverviewData") && !rsp["OverviewData"].IsNull())
    {
        if (!rsp["OverviewData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `OverviewData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_overviewData.Deserialize(rsp["OverviewData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_overviewDataHasBeenSet = true;
    }

    if (rsp.HasMember("TrendData") && !rsp["TrendData"].IsNull())
    {
        if (!rsp["TrendData"].IsObject())
        {
            return CoreInternalOutcome(Error("response `TrendData` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trendData.Deserialize(rsp["TrendData"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trendDataHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}


ReportOverviewData DescribeDataResponse::GetOverviewData() const
{
    return m_overviewData;
}

bool DescribeDataResponse::OverviewDataHasBeenSet() const
{
    return m_overviewDataHasBeenSet;
}

ReportTrendData DescribeDataResponse::GetTrendData() const
{
    return m_trendData;
}

bool DescribeDataResponse::TrendDataHasBeenSet() const
{
    return m_trendDataHasBeenSet;
}


