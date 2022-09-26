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

#include <tencentcloud/tds/v20220801/TdsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tds::V20220801;
using namespace TencentCloud::Tds::V20220801::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-08-01";
    const string ENDPOINT = "tds.tencentcloudapi.com";
}

TdsClient::TdsClient(const Credential &credential, const string &region) :
    TdsClient(credential, region, ClientProfile())
{
}

TdsClient::TdsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdsClient::DescribeFraudBaseOutcome TdsClient::DescribeFraudBase(const DescribeFraudBaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFraudBase");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFraudBaseResponse rsp = DescribeFraudBaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFraudBaseOutcome(rsp);
        else
            return DescribeFraudBaseOutcome(o.GetError());
    }
    else
    {
        return DescribeFraudBaseOutcome(outcome.GetError());
    }
}

void TdsClient::DescribeFraudBaseAsync(const DescribeFraudBaseRequest& request, const DescribeFraudBaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFraudBase(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdsClient::DescribeFraudBaseOutcomeCallable TdsClient::DescribeFraudBaseCallable(const DescribeFraudBaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFraudBaseOutcome()>>(
        [this, request]()
        {
            return this->DescribeFraudBase(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdsClient::DescribeFraudPremiumOutcome TdsClient::DescribeFraudPremium(const DescribeFraudPremiumRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFraudPremium");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFraudPremiumResponse rsp = DescribeFraudPremiumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFraudPremiumOutcome(rsp);
        else
            return DescribeFraudPremiumOutcome(o.GetError());
    }
    else
    {
        return DescribeFraudPremiumOutcome(outcome.GetError());
    }
}

void TdsClient::DescribeFraudPremiumAsync(const DescribeFraudPremiumRequest& request, const DescribeFraudPremiumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFraudPremium(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdsClient::DescribeFraudPremiumOutcomeCallable TdsClient::DescribeFraudPremiumCallable(const DescribeFraudPremiumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFraudPremiumOutcome()>>(
        [this, request]()
        {
            return this->DescribeFraudPremium(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdsClient::DescribeTrustedIDOutcome TdsClient::DescribeTrustedID(const DescribeTrustedIDRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrustedID");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrustedIDResponse rsp = DescribeTrustedIDResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrustedIDOutcome(rsp);
        else
            return DescribeTrustedIDOutcome(o.GetError());
    }
    else
    {
        return DescribeTrustedIDOutcome(outcome.GetError());
    }
}

void TdsClient::DescribeTrustedIDAsync(const DescribeTrustedIDRequest& request, const DescribeTrustedIDAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrustedID(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdsClient::DescribeTrustedIDOutcomeCallable TdsClient::DescribeTrustedIDCallable(const DescribeTrustedIDRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrustedIDOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrustedID(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

