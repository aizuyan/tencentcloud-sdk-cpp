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

#include <tencentcloud/vrs/v20200824/VrsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vrs::V20200824;
using namespace TencentCloud::Vrs::V20200824::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-08-24";
    const string ENDPOINT = "vrs.tencentcloudapi.com";
}

VrsClient::VrsClient(const Credential &credential, const string &region) :
    VrsClient(credential, region, ClientProfile())
{
}

VrsClient::VrsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VrsClient::CreateVRSTaskOutcome VrsClient::CreateVRSTask(const CreateVRSTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVRSTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVRSTaskResponse rsp = CreateVRSTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVRSTaskOutcome(rsp);
        else
            return CreateVRSTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVRSTaskOutcome(outcome.GetError());
    }
}

void VrsClient::CreateVRSTaskAsync(const CreateVRSTaskRequest& request, const CreateVRSTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVRSTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VrsClient::CreateVRSTaskOutcomeCallable VrsClient::CreateVRSTaskCallable(const CreateVRSTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVRSTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateVRSTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VrsClient::DescribeVRSTaskStatusOutcome VrsClient::DescribeVRSTaskStatus(const DescribeVRSTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVRSTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVRSTaskStatusResponse rsp = DescribeVRSTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVRSTaskStatusOutcome(rsp);
        else
            return DescribeVRSTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeVRSTaskStatusOutcome(outcome.GetError());
    }
}

void VrsClient::DescribeVRSTaskStatusAsync(const DescribeVRSTaskStatusRequest& request, const DescribeVRSTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVRSTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VrsClient::DescribeVRSTaskStatusOutcomeCallable VrsClient::DescribeVRSTaskStatusCallable(const DescribeVRSTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVRSTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeVRSTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VrsClient::DetectEnvAndSoundQualityOutcome VrsClient::DetectEnvAndSoundQuality(const DetectEnvAndSoundQualityRequest &request)
{
    auto outcome = MakeRequest(request, "DetectEnvAndSoundQuality");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectEnvAndSoundQualityResponse rsp = DetectEnvAndSoundQualityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectEnvAndSoundQualityOutcome(rsp);
        else
            return DetectEnvAndSoundQualityOutcome(o.GetError());
    }
    else
    {
        return DetectEnvAndSoundQualityOutcome(outcome.GetError());
    }
}

void VrsClient::DetectEnvAndSoundQualityAsync(const DetectEnvAndSoundQualityRequest& request, const DetectEnvAndSoundQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectEnvAndSoundQuality(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VrsClient::DetectEnvAndSoundQualityOutcomeCallable VrsClient::DetectEnvAndSoundQualityCallable(const DetectEnvAndSoundQualityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectEnvAndSoundQualityOutcome()>>(
        [this, request]()
        {
            return this->DetectEnvAndSoundQuality(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VrsClient::GetTrainingTextOutcome VrsClient::GetTrainingText(const GetTrainingTextRequest &request)
{
    auto outcome = MakeRequest(request, "GetTrainingText");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTrainingTextResponse rsp = GetTrainingTextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTrainingTextOutcome(rsp);
        else
            return GetTrainingTextOutcome(o.GetError());
    }
    else
    {
        return GetTrainingTextOutcome(outcome.GetError());
    }
}

void VrsClient::GetTrainingTextAsync(const GetTrainingTextRequest& request, const GetTrainingTextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTrainingText(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VrsClient::GetTrainingTextOutcomeCallable VrsClient::GetTrainingTextCallable(const GetTrainingTextRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTrainingTextOutcome()>>(
        [this, request]()
        {
            return this->GetTrainingText(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

