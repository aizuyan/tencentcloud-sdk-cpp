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

#include <tencentcloud/tione/v20211111/TioneClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tione::V20211111;
using namespace TencentCloud::Tione::V20211111::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-11-11";
    const string ENDPOINT = "tione.tencentcloudapi.com";
}

TioneClient::TioneClient(const Credential &credential, const string &region) :
    TioneClient(credential, region, ClientProfile())
{
}

TioneClient::TioneClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TioneClient::CreateBatchModelAccTasksOutcome TioneClient::CreateBatchModelAccTasks(const CreateBatchModelAccTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchModelAccTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchModelAccTasksResponse rsp = CreateBatchModelAccTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchModelAccTasksOutcome(rsp);
        else
            return CreateBatchModelAccTasksOutcome(o.GetError());
    }
    else
    {
        return CreateBatchModelAccTasksOutcome(outcome.GetError());
    }
}

void TioneClient::CreateBatchModelAccTasksAsync(const CreateBatchModelAccTasksRequest& request, const CreateBatchModelAccTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchModelAccTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreateBatchModelAccTasksOutcomeCallable TioneClient::CreateBatchModelAccTasksCallable(const CreateBatchModelAccTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchModelAccTasksOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchModelAccTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::CreateBatchTaskOutcome TioneClient::CreateBatchTask(const CreateBatchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchTaskResponse rsp = CreateBatchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchTaskOutcome(rsp);
        else
            return CreateBatchTaskOutcome(o.GetError());
    }
    else
    {
        return CreateBatchTaskOutcome(outcome.GetError());
    }
}

void TioneClient::CreateBatchTaskAsync(const CreateBatchTaskRequest& request, const CreateBatchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreateBatchTaskOutcomeCallable TioneClient::CreateBatchTaskCallable(const CreateBatchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::CreateDatasetOutcome TioneClient::CreateDataset(const CreateDatasetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatasetResponse rsp = CreateDatasetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatasetOutcome(rsp);
        else
            return CreateDatasetOutcome(o.GetError());
    }
    else
    {
        return CreateDatasetOutcome(outcome.GetError());
    }
}

void TioneClient::CreateDatasetAsync(const CreateDatasetRequest& request, const CreateDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDataset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreateDatasetOutcomeCallable TioneClient::CreateDatasetCallable(const CreateDatasetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDatasetOutcome()>>(
        [this, request]()
        {
            return this->CreateDataset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::CreateModelServiceOutcome TioneClient::CreateModelService(const CreateModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelServiceResponse rsp = CreateModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelServiceOutcome(rsp);
        else
            return CreateModelServiceOutcome(o.GetError());
    }
    else
    {
        return CreateModelServiceOutcome(outcome.GetError());
    }
}

void TioneClient::CreateModelServiceAsync(const CreateModelServiceRequest& request, const CreateModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateModelService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreateModelServiceOutcomeCallable TioneClient::CreateModelServiceCallable(const CreateModelServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateModelServiceOutcome()>>(
        [this, request]()
        {
            return this->CreateModelService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::CreateOptimizedModelOutcome TioneClient::CreateOptimizedModel(const CreateOptimizedModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOptimizedModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOptimizedModelResponse rsp = CreateOptimizedModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOptimizedModelOutcome(rsp);
        else
            return CreateOptimizedModelOutcome(o.GetError());
    }
    else
    {
        return CreateOptimizedModelOutcome(outcome.GetError());
    }
}

void TioneClient::CreateOptimizedModelAsync(const CreateOptimizedModelRequest& request, const CreateOptimizedModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOptimizedModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreateOptimizedModelOutcomeCallable TioneClient::CreateOptimizedModelCallable(const CreateOptimizedModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOptimizedModelOutcome()>>(
        [this, request]()
        {
            return this->CreateOptimizedModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::CreateTrainingModelOutcome TioneClient::CreateTrainingModel(const CreateTrainingModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrainingModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrainingModelResponse rsp = CreateTrainingModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrainingModelOutcome(rsp);
        else
            return CreateTrainingModelOutcome(o.GetError());
    }
    else
    {
        return CreateTrainingModelOutcome(outcome.GetError());
    }
}

void TioneClient::CreateTrainingModelAsync(const CreateTrainingModelRequest& request, const CreateTrainingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTrainingModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreateTrainingModelOutcomeCallable TioneClient::CreateTrainingModelCallable(const CreateTrainingModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTrainingModelOutcome()>>(
        [this, request]()
        {
            return this->CreateTrainingModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::CreateTrainingTaskOutcome TioneClient::CreateTrainingTask(const CreateTrainingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrainingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrainingTaskResponse rsp = CreateTrainingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrainingTaskOutcome(rsp);
        else
            return CreateTrainingTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTrainingTaskOutcome(outcome.GetError());
    }
}

void TioneClient::CreateTrainingTaskAsync(const CreateTrainingTaskRequest& request, const CreateTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTrainingTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::CreateTrainingTaskOutcomeCallable TioneClient::CreateTrainingTaskCallable(const CreateTrainingTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTrainingTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateTrainingTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DeleteBatchTaskOutcome TioneClient::DeleteBatchTask(const DeleteBatchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBatchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBatchTaskResponse rsp = DeleteBatchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBatchTaskOutcome(rsp);
        else
            return DeleteBatchTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteBatchTaskOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteBatchTaskAsync(const DeleteBatchTaskRequest& request, const DeleteBatchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBatchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DeleteBatchTaskOutcomeCallable TioneClient::DeleteBatchTaskCallable(const DeleteBatchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBatchTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteBatchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DeleteDatasetOutcome TioneClient::DeleteDataset(const DeleteDatasetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDatasetResponse rsp = DeleteDatasetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDatasetOutcome(rsp);
        else
            return DeleteDatasetOutcome(o.GetError());
    }
    else
    {
        return DeleteDatasetOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteDatasetAsync(const DeleteDatasetRequest& request, const DeleteDatasetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDataset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DeleteDatasetOutcomeCallable TioneClient::DeleteDatasetCallable(const DeleteDatasetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDatasetOutcome()>>(
        [this, request]()
        {
            return this->DeleteDataset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DeleteModelAccelerateTaskOutcome TioneClient::DeleteModelAccelerateTask(const DeleteModelAccelerateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModelAccelerateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelAccelerateTaskResponse rsp = DeleteModelAccelerateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelAccelerateTaskOutcome(rsp);
        else
            return DeleteModelAccelerateTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteModelAccelerateTaskOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteModelAccelerateTaskAsync(const DeleteModelAccelerateTaskRequest& request, const DeleteModelAccelerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteModelAccelerateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DeleteModelAccelerateTaskOutcomeCallable TioneClient::DeleteModelAccelerateTaskCallable(const DeleteModelAccelerateTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteModelAccelerateTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteModelAccelerateTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DeleteModelServiceOutcome TioneClient::DeleteModelService(const DeleteModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelServiceResponse rsp = DeleteModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelServiceOutcome(rsp);
        else
            return DeleteModelServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteModelServiceOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteModelServiceAsync(const DeleteModelServiceRequest& request, const DeleteModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteModelService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DeleteModelServiceOutcomeCallable TioneClient::DeleteModelServiceCallable(const DeleteModelServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteModelServiceOutcome()>>(
        [this, request]()
        {
            return this->DeleteModelService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DeleteModelServiceGroupOutcome TioneClient::DeleteModelServiceGroup(const DeleteModelServiceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteModelServiceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteModelServiceGroupResponse rsp = DeleteModelServiceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteModelServiceGroupOutcome(rsp);
        else
            return DeleteModelServiceGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteModelServiceGroupOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteModelServiceGroupAsync(const DeleteModelServiceGroupRequest& request, const DeleteModelServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteModelServiceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DeleteModelServiceGroupOutcomeCallable TioneClient::DeleteModelServiceGroupCallable(const DeleteModelServiceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteModelServiceGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteModelServiceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DeleteTrainingModelOutcome TioneClient::DeleteTrainingModel(const DeleteTrainingModelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrainingModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTrainingModelResponse rsp = DeleteTrainingModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTrainingModelOutcome(rsp);
        else
            return DeleteTrainingModelOutcome(o.GetError());
    }
    else
    {
        return DeleteTrainingModelOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteTrainingModelAsync(const DeleteTrainingModelRequest& request, const DeleteTrainingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTrainingModel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DeleteTrainingModelOutcomeCallable TioneClient::DeleteTrainingModelCallable(const DeleteTrainingModelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTrainingModelOutcome()>>(
        [this, request]()
        {
            return this->DeleteTrainingModel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DeleteTrainingModelVersionOutcome TioneClient::DeleteTrainingModelVersion(const DeleteTrainingModelVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrainingModelVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTrainingModelVersionResponse rsp = DeleteTrainingModelVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTrainingModelVersionOutcome(rsp);
        else
            return DeleteTrainingModelVersionOutcome(o.GetError());
    }
    else
    {
        return DeleteTrainingModelVersionOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteTrainingModelVersionAsync(const DeleteTrainingModelVersionRequest& request, const DeleteTrainingModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTrainingModelVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DeleteTrainingModelVersionOutcomeCallable TioneClient::DeleteTrainingModelVersionCallable(const DeleteTrainingModelVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTrainingModelVersionOutcome()>>(
        [this, request]()
        {
            return this->DeleteTrainingModelVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DeleteTrainingTaskOutcome TioneClient::DeleteTrainingTask(const DeleteTrainingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrainingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTrainingTaskResponse rsp = DeleteTrainingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTrainingTaskOutcome(rsp);
        else
            return DeleteTrainingTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteTrainingTaskOutcome(outcome.GetError());
    }
}

void TioneClient::DeleteTrainingTaskAsync(const DeleteTrainingTaskRequest& request, const DeleteTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTrainingTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DeleteTrainingTaskOutcomeCallable TioneClient::DeleteTrainingTaskCallable(const DeleteTrainingTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTrainingTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteTrainingTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeAPIConfigsOutcome TioneClient::DescribeAPIConfigs(const DescribeAPIConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAPIConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAPIConfigsResponse rsp = DescribeAPIConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAPIConfigsOutcome(rsp);
        else
            return DescribeAPIConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeAPIConfigsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeAPIConfigsAsync(const DescribeAPIConfigsRequest& request, const DescribeAPIConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAPIConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeAPIConfigsOutcomeCallable TioneClient::DescribeAPIConfigsCallable(const DescribeAPIConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAPIConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAPIConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeBatchTaskOutcome TioneClient::DescribeBatchTask(const DescribeBatchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchTaskResponse rsp = DescribeBatchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchTaskOutcome(rsp);
        else
            return DescribeBatchTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchTaskOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBatchTaskAsync(const DescribeBatchTaskRequest& request, const DescribeBatchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeBatchTaskOutcomeCallable TioneClient::DescribeBatchTaskCallable(const DescribeBatchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeBatchTaskInstancesOutcome TioneClient::DescribeBatchTaskInstances(const DescribeBatchTaskInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchTaskInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchTaskInstancesResponse rsp = DescribeBatchTaskInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchTaskInstancesOutcome(rsp);
        else
            return DescribeBatchTaskInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchTaskInstancesOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBatchTaskInstancesAsync(const DescribeBatchTaskInstancesRequest& request, const DescribeBatchTaskInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchTaskInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeBatchTaskInstancesOutcomeCallable TioneClient::DescribeBatchTaskInstancesCallable(const DescribeBatchTaskInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchTaskInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchTaskInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeBatchTasksOutcome TioneClient::DescribeBatchTasks(const DescribeBatchTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchTasksResponse rsp = DescribeBatchTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchTasksOutcome(rsp);
        else
            return DescribeBatchTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchTasksOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBatchTasksAsync(const DescribeBatchTasksRequest& request, const DescribeBatchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeBatchTasksOutcomeCallable TioneClient::DescribeBatchTasksCallable(const DescribeBatchTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeBillingResourceGroupsOutcome TioneClient::DescribeBillingResourceGroups(const DescribeBillingResourceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingResourceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingResourceGroupsResponse rsp = DescribeBillingResourceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingResourceGroupsOutcome(rsp);
        else
            return DescribeBillingResourceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingResourceGroupsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBillingResourceGroupsAsync(const DescribeBillingResourceGroupsRequest& request, const DescribeBillingResourceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillingResourceGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeBillingResourceGroupsOutcomeCallable TioneClient::DescribeBillingResourceGroupsCallable(const DescribeBillingResourceGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillingResourceGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillingResourceGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeBillingSpecsOutcome TioneClient::DescribeBillingSpecs(const DescribeBillingSpecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingSpecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingSpecsResponse rsp = DescribeBillingSpecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingSpecsOutcome(rsp);
        else
            return DescribeBillingSpecsOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingSpecsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBillingSpecsAsync(const DescribeBillingSpecsRequest& request, const DescribeBillingSpecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillingSpecs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeBillingSpecsOutcomeCallable TioneClient::DescribeBillingSpecsCallable(const DescribeBillingSpecsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillingSpecsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillingSpecs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeBillingSpecsPriceOutcome TioneClient::DescribeBillingSpecsPrice(const DescribeBillingSpecsPriceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingSpecsPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingSpecsPriceResponse rsp = DescribeBillingSpecsPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingSpecsPriceOutcome(rsp);
        else
            return DescribeBillingSpecsPriceOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingSpecsPriceOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeBillingSpecsPriceAsync(const DescribeBillingSpecsPriceRequest& request, const DescribeBillingSpecsPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillingSpecsPrice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeBillingSpecsPriceOutcomeCallable TioneClient::DescribeBillingSpecsPriceCallable(const DescribeBillingSpecsPriceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillingSpecsPriceOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillingSpecsPrice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeDatasetDetailStructuredOutcome TioneClient::DescribeDatasetDetailStructured(const DescribeDatasetDetailStructuredRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatasetDetailStructured");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatasetDetailStructuredResponse rsp = DescribeDatasetDetailStructuredResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatasetDetailStructuredOutcome(rsp);
        else
            return DescribeDatasetDetailStructuredOutcome(o.GetError());
    }
    else
    {
        return DescribeDatasetDetailStructuredOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeDatasetDetailStructuredAsync(const DescribeDatasetDetailStructuredRequest& request, const DescribeDatasetDetailStructuredAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatasetDetailStructured(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeDatasetDetailStructuredOutcomeCallable TioneClient::DescribeDatasetDetailStructuredCallable(const DescribeDatasetDetailStructuredRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatasetDetailStructuredOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatasetDetailStructured(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeDatasetDetailUnstructuredOutcome TioneClient::DescribeDatasetDetailUnstructured(const DescribeDatasetDetailUnstructuredRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatasetDetailUnstructured");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatasetDetailUnstructuredResponse rsp = DescribeDatasetDetailUnstructuredResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatasetDetailUnstructuredOutcome(rsp);
        else
            return DescribeDatasetDetailUnstructuredOutcome(o.GetError());
    }
    else
    {
        return DescribeDatasetDetailUnstructuredOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeDatasetDetailUnstructuredAsync(const DescribeDatasetDetailUnstructuredRequest& request, const DescribeDatasetDetailUnstructuredAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatasetDetailUnstructured(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeDatasetDetailUnstructuredOutcomeCallable TioneClient::DescribeDatasetDetailUnstructuredCallable(const DescribeDatasetDetailUnstructuredRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatasetDetailUnstructuredOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatasetDetailUnstructured(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeDatasetsOutcome TioneClient::DescribeDatasets(const DescribeDatasetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatasets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatasetsResponse rsp = DescribeDatasetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatasetsOutcome(rsp);
        else
            return DescribeDatasetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatasetsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeDatasetsAsync(const DescribeDatasetsRequest& request, const DescribeDatasetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatasets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeDatasetsOutcomeCallable TioneClient::DescribeDatasetsCallable(const DescribeDatasetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatasetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatasets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeInferTemplatesOutcome TioneClient::DescribeInferTemplates(const DescribeInferTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInferTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInferTemplatesResponse rsp = DescribeInferTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInferTemplatesOutcome(rsp);
        else
            return DescribeInferTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeInferTemplatesOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeInferTemplatesAsync(const DescribeInferTemplatesRequest& request, const DescribeInferTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInferTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeInferTemplatesOutcomeCallable TioneClient::DescribeInferTemplatesCallable(const DescribeInferTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInferTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInferTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeLatestTrainingMetricsOutcome TioneClient::DescribeLatestTrainingMetrics(const DescribeLatestTrainingMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLatestTrainingMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLatestTrainingMetricsResponse rsp = DescribeLatestTrainingMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLatestTrainingMetricsOutcome(rsp);
        else
            return DescribeLatestTrainingMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeLatestTrainingMetricsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeLatestTrainingMetricsAsync(const DescribeLatestTrainingMetricsRequest& request, const DescribeLatestTrainingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLatestTrainingMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeLatestTrainingMetricsOutcomeCallable TioneClient::DescribeLatestTrainingMetricsCallable(const DescribeLatestTrainingMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLatestTrainingMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLatestTrainingMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeLogsOutcome TioneClient::DescribeLogs(const DescribeLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogsResponse rsp = DescribeLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogsOutcome(rsp);
        else
            return DescribeLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeLogsAsync(const DescribeLogsRequest& request, const DescribeLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeLogsOutcomeCallable TioneClient::DescribeLogsCallable(const DescribeLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeModelAccEngineVersionsOutcome TioneClient::DescribeModelAccEngineVersions(const DescribeModelAccEngineVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelAccEngineVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelAccEngineVersionsResponse rsp = DescribeModelAccEngineVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelAccEngineVersionsOutcome(rsp);
        else
            return DescribeModelAccEngineVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeModelAccEngineVersionsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelAccEngineVersionsAsync(const DescribeModelAccEngineVersionsRequest& request, const DescribeModelAccEngineVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelAccEngineVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeModelAccEngineVersionsOutcomeCallable TioneClient::DescribeModelAccEngineVersionsCallable(const DescribeModelAccEngineVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelAccEngineVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelAccEngineVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeModelAccelerateTaskOutcome TioneClient::DescribeModelAccelerateTask(const DescribeModelAccelerateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelAccelerateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelAccelerateTaskResponse rsp = DescribeModelAccelerateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelAccelerateTaskOutcome(rsp);
        else
            return DescribeModelAccelerateTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeModelAccelerateTaskOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelAccelerateTaskAsync(const DescribeModelAccelerateTaskRequest& request, const DescribeModelAccelerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelAccelerateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeModelAccelerateTaskOutcomeCallable TioneClient::DescribeModelAccelerateTaskCallable(const DescribeModelAccelerateTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelAccelerateTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelAccelerateTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeModelAccelerateTasksOutcome TioneClient::DescribeModelAccelerateTasks(const DescribeModelAccelerateTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelAccelerateTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelAccelerateTasksResponse rsp = DescribeModelAccelerateTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelAccelerateTasksOutcome(rsp);
        else
            return DescribeModelAccelerateTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeModelAccelerateTasksOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelAccelerateTasksAsync(const DescribeModelAccelerateTasksRequest& request, const DescribeModelAccelerateTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelAccelerateTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeModelAccelerateTasksOutcomeCallable TioneClient::DescribeModelAccelerateTasksCallable(const DescribeModelAccelerateTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelAccelerateTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelAccelerateTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeModelServiceOutcome TioneClient::DescribeModelService(const DescribeModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceResponse rsp = DescribeModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceOutcome(rsp);
        else
            return DescribeModelServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceAsync(const DescribeModelServiceRequest& request, const DescribeModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeModelServiceOutcomeCallable TioneClient::DescribeModelServiceCallable(const DescribeModelServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelServiceOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeModelServiceCallInfoOutcome TioneClient::DescribeModelServiceCallInfo(const DescribeModelServiceCallInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServiceCallInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceCallInfoResponse rsp = DescribeModelServiceCallInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceCallInfoOutcome(rsp);
        else
            return DescribeModelServiceCallInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceCallInfoOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceCallInfoAsync(const DescribeModelServiceCallInfoRequest& request, const DescribeModelServiceCallInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelServiceCallInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeModelServiceCallInfoOutcomeCallable TioneClient::DescribeModelServiceCallInfoCallable(const DescribeModelServiceCallInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelServiceCallInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelServiceCallInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeModelServiceGroupOutcome TioneClient::DescribeModelServiceGroup(const DescribeModelServiceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServiceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceGroupResponse rsp = DescribeModelServiceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceGroupOutcome(rsp);
        else
            return DescribeModelServiceGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceGroupOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceGroupAsync(const DescribeModelServiceGroupRequest& request, const DescribeModelServiceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelServiceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeModelServiceGroupOutcomeCallable TioneClient::DescribeModelServiceGroupCallable(const DescribeModelServiceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelServiceGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelServiceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeModelServiceGroupsOutcome TioneClient::DescribeModelServiceGroups(const DescribeModelServiceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServiceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceGroupsResponse rsp = DescribeModelServiceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceGroupsOutcome(rsp);
        else
            return DescribeModelServiceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceGroupsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceGroupsAsync(const DescribeModelServiceGroupsRequest& request, const DescribeModelServiceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelServiceGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeModelServiceGroupsOutcomeCallable TioneClient::DescribeModelServiceGroupsCallable(const DescribeModelServiceGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelServiceGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelServiceGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeModelServiceHistoryOutcome TioneClient::DescribeModelServiceHistory(const DescribeModelServiceHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServiceHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceHistoryResponse rsp = DescribeModelServiceHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceHistoryOutcome(rsp);
        else
            return DescribeModelServiceHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceHistoryOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceHistoryAsync(const DescribeModelServiceHistoryRequest& request, const DescribeModelServiceHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelServiceHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeModelServiceHistoryOutcomeCallable TioneClient::DescribeModelServiceHistoryCallable(const DescribeModelServiceHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelServiceHistoryOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelServiceHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeModelServiceHotUpdatedOutcome TioneClient::DescribeModelServiceHotUpdated(const DescribeModelServiceHotUpdatedRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServiceHotUpdated");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServiceHotUpdatedResponse rsp = DescribeModelServiceHotUpdatedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServiceHotUpdatedOutcome(rsp);
        else
            return DescribeModelServiceHotUpdatedOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServiceHotUpdatedOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServiceHotUpdatedAsync(const DescribeModelServiceHotUpdatedRequest& request, const DescribeModelServiceHotUpdatedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelServiceHotUpdated(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeModelServiceHotUpdatedOutcomeCallable TioneClient::DescribeModelServiceHotUpdatedCallable(const DescribeModelServiceHotUpdatedRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelServiceHotUpdatedOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelServiceHotUpdated(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeModelServicesOutcome TioneClient::DescribeModelServices(const DescribeModelServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelServicesResponse rsp = DescribeModelServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelServicesOutcome(rsp);
        else
            return DescribeModelServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeModelServicesOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeModelServicesAsync(const DescribeModelServicesRequest& request, const DescribeModelServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeModelServices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeModelServicesOutcomeCallable TioneClient::DescribeModelServicesCallable(const DescribeModelServicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeModelServicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeModelServices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeTrainingFrameworksOutcome TioneClient::DescribeTrainingFrameworks(const DescribeTrainingFrameworksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingFrameworks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingFrameworksResponse rsp = DescribeTrainingFrameworksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingFrameworksOutcome(rsp);
        else
            return DescribeTrainingFrameworksOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingFrameworksOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingFrameworksAsync(const DescribeTrainingFrameworksRequest& request, const DescribeTrainingFrameworksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrainingFrameworks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeTrainingFrameworksOutcomeCallable TioneClient::DescribeTrainingFrameworksCallable(const DescribeTrainingFrameworksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrainingFrameworksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrainingFrameworks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeTrainingMetricsOutcome TioneClient::DescribeTrainingMetrics(const DescribeTrainingMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingMetricsResponse rsp = DescribeTrainingMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingMetricsOutcome(rsp);
        else
            return DescribeTrainingMetricsOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingMetricsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingMetricsAsync(const DescribeTrainingMetricsRequest& request, const DescribeTrainingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrainingMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeTrainingMetricsOutcomeCallable TioneClient::DescribeTrainingMetricsCallable(const DescribeTrainingMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrainingMetricsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrainingMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeTrainingModelVersionOutcome TioneClient::DescribeTrainingModelVersion(const DescribeTrainingModelVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingModelVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingModelVersionResponse rsp = DescribeTrainingModelVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingModelVersionOutcome(rsp);
        else
            return DescribeTrainingModelVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingModelVersionOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingModelVersionAsync(const DescribeTrainingModelVersionRequest& request, const DescribeTrainingModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrainingModelVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeTrainingModelVersionOutcomeCallable TioneClient::DescribeTrainingModelVersionCallable(const DescribeTrainingModelVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrainingModelVersionOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrainingModelVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeTrainingModelVersionsOutcome TioneClient::DescribeTrainingModelVersions(const DescribeTrainingModelVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingModelVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingModelVersionsResponse rsp = DescribeTrainingModelVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingModelVersionsOutcome(rsp);
        else
            return DescribeTrainingModelVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingModelVersionsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingModelVersionsAsync(const DescribeTrainingModelVersionsRequest& request, const DescribeTrainingModelVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrainingModelVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeTrainingModelVersionsOutcomeCallable TioneClient::DescribeTrainingModelVersionsCallable(const DescribeTrainingModelVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrainingModelVersionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrainingModelVersions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeTrainingModelsOutcome TioneClient::DescribeTrainingModels(const DescribeTrainingModelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingModels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingModelsResponse rsp = DescribeTrainingModelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingModelsOutcome(rsp);
        else
            return DescribeTrainingModelsOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingModelsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingModelsAsync(const DescribeTrainingModelsRequest& request, const DescribeTrainingModelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrainingModels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeTrainingModelsOutcomeCallable TioneClient::DescribeTrainingModelsCallable(const DescribeTrainingModelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrainingModelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrainingModels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeTrainingTaskOutcome TioneClient::DescribeTrainingTask(const DescribeTrainingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingTaskResponse rsp = DescribeTrainingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingTaskOutcome(rsp);
        else
            return DescribeTrainingTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingTaskOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingTaskAsync(const DescribeTrainingTaskRequest& request, const DescribeTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrainingTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeTrainingTaskOutcomeCallable TioneClient::DescribeTrainingTaskCallable(const DescribeTrainingTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrainingTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrainingTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeTrainingTaskPodsOutcome TioneClient::DescribeTrainingTaskPods(const DescribeTrainingTaskPodsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingTaskPods");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingTaskPodsResponse rsp = DescribeTrainingTaskPodsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingTaskPodsOutcome(rsp);
        else
            return DescribeTrainingTaskPodsOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingTaskPodsOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingTaskPodsAsync(const DescribeTrainingTaskPodsRequest& request, const DescribeTrainingTaskPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrainingTaskPods(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeTrainingTaskPodsOutcomeCallable TioneClient::DescribeTrainingTaskPodsCallable(const DescribeTrainingTaskPodsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrainingTaskPodsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrainingTaskPods(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::DescribeTrainingTasksOutcome TioneClient::DescribeTrainingTasks(const DescribeTrainingTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrainingTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrainingTasksResponse rsp = DescribeTrainingTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrainingTasksOutcome(rsp);
        else
            return DescribeTrainingTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTrainingTasksOutcome(outcome.GetError());
    }
}

void TioneClient::DescribeTrainingTasksAsync(const DescribeTrainingTasksRequest& request, const DescribeTrainingTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrainingTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::DescribeTrainingTasksOutcomeCallable TioneClient::DescribeTrainingTasksCallable(const DescribeTrainingTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrainingTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrainingTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::ModifyModelServiceOutcome TioneClient::ModifyModelService(const ModifyModelServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModelService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModelServiceResponse rsp = ModifyModelServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModelServiceOutcome(rsp);
        else
            return ModifyModelServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyModelServiceOutcome(outcome.GetError());
    }
}

void TioneClient::ModifyModelServiceAsync(const ModifyModelServiceRequest& request, const ModifyModelServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModelService(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::ModifyModelServiceOutcomeCallable TioneClient::ModifyModelServiceCallable(const ModifyModelServiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModelServiceOutcome()>>(
        [this, request]()
        {
            return this->ModifyModelService(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::ModifyModelServicePartialConfigOutcome TioneClient::ModifyModelServicePartialConfig(const ModifyModelServicePartialConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyModelServicePartialConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyModelServicePartialConfigResponse rsp = ModifyModelServicePartialConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyModelServicePartialConfigOutcome(rsp);
        else
            return ModifyModelServicePartialConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyModelServicePartialConfigOutcome(outcome.GetError());
    }
}

void TioneClient::ModifyModelServicePartialConfigAsync(const ModifyModelServicePartialConfigRequest& request, const ModifyModelServicePartialConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyModelServicePartialConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::ModifyModelServicePartialConfigOutcomeCallable TioneClient::ModifyModelServicePartialConfigCallable(const ModifyModelServicePartialConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyModelServicePartialConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyModelServicePartialConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::ModifyServiceGroupWeightsOutcome TioneClient::ModifyServiceGroupWeights(const ModifyServiceGroupWeightsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceGroupWeights");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceGroupWeightsResponse rsp = ModifyServiceGroupWeightsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceGroupWeightsOutcome(rsp);
        else
            return ModifyServiceGroupWeightsOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceGroupWeightsOutcome(outcome.GetError());
    }
}

void TioneClient::ModifyServiceGroupWeightsAsync(const ModifyServiceGroupWeightsRequest& request, const ModifyServiceGroupWeightsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyServiceGroupWeights(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::ModifyServiceGroupWeightsOutcomeCallable TioneClient::ModifyServiceGroupWeightsCallable(const ModifyServiceGroupWeightsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyServiceGroupWeightsOutcome()>>(
        [this, request]()
        {
            return this->ModifyServiceGroupWeights(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::PushTrainingMetricsOutcome TioneClient::PushTrainingMetrics(const PushTrainingMetricsRequest &request)
{
    auto outcome = MakeRequest(request, "PushTrainingMetrics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PushTrainingMetricsResponse rsp = PushTrainingMetricsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PushTrainingMetricsOutcome(rsp);
        else
            return PushTrainingMetricsOutcome(o.GetError());
    }
    else
    {
        return PushTrainingMetricsOutcome(outcome.GetError());
    }
}

void TioneClient::PushTrainingMetricsAsync(const PushTrainingMetricsRequest& request, const PushTrainingMetricsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PushTrainingMetrics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::PushTrainingMetricsOutcomeCallable TioneClient::PushTrainingMetricsCallable(const PushTrainingMetricsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PushTrainingMetricsOutcome()>>(
        [this, request]()
        {
            return this->PushTrainingMetrics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::RestartModelAccelerateTaskOutcome TioneClient::RestartModelAccelerateTask(const RestartModelAccelerateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RestartModelAccelerateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartModelAccelerateTaskResponse rsp = RestartModelAccelerateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartModelAccelerateTaskOutcome(rsp);
        else
            return RestartModelAccelerateTaskOutcome(o.GetError());
    }
    else
    {
        return RestartModelAccelerateTaskOutcome(outcome.GetError());
    }
}

void TioneClient::RestartModelAccelerateTaskAsync(const RestartModelAccelerateTaskRequest& request, const RestartModelAccelerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RestartModelAccelerateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::RestartModelAccelerateTaskOutcomeCallable TioneClient::RestartModelAccelerateTaskCallable(const RestartModelAccelerateTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RestartModelAccelerateTaskOutcome()>>(
        [this, request]()
        {
            return this->RestartModelAccelerateTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::StartTrainingTaskOutcome TioneClient::StartTrainingTask(const StartTrainingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StartTrainingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartTrainingTaskResponse rsp = StartTrainingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartTrainingTaskOutcome(rsp);
        else
            return StartTrainingTaskOutcome(o.GetError());
    }
    else
    {
        return StartTrainingTaskOutcome(outcome.GetError());
    }
}

void TioneClient::StartTrainingTaskAsync(const StartTrainingTaskRequest& request, const StartTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartTrainingTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::StartTrainingTaskOutcomeCallable TioneClient::StartTrainingTaskCallable(const StartTrainingTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartTrainingTaskOutcome()>>(
        [this, request]()
        {
            return this->StartTrainingTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::StopBatchTaskOutcome TioneClient::StopBatchTask(const StopBatchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopBatchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopBatchTaskResponse rsp = StopBatchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopBatchTaskOutcome(rsp);
        else
            return StopBatchTaskOutcome(o.GetError());
    }
    else
    {
        return StopBatchTaskOutcome(outcome.GetError());
    }
}

void TioneClient::StopBatchTaskAsync(const StopBatchTaskRequest& request, const StopBatchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopBatchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::StopBatchTaskOutcomeCallable TioneClient::StopBatchTaskCallable(const StopBatchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopBatchTaskOutcome()>>(
        [this, request]()
        {
            return this->StopBatchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::StopModelAccelerateTaskOutcome TioneClient::StopModelAccelerateTask(const StopModelAccelerateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopModelAccelerateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopModelAccelerateTaskResponse rsp = StopModelAccelerateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopModelAccelerateTaskOutcome(rsp);
        else
            return StopModelAccelerateTaskOutcome(o.GetError());
    }
    else
    {
        return StopModelAccelerateTaskOutcome(outcome.GetError());
    }
}

void TioneClient::StopModelAccelerateTaskAsync(const StopModelAccelerateTaskRequest& request, const StopModelAccelerateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopModelAccelerateTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::StopModelAccelerateTaskOutcomeCallable TioneClient::StopModelAccelerateTaskCallable(const StopModelAccelerateTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopModelAccelerateTaskOutcome()>>(
        [this, request]()
        {
            return this->StopModelAccelerateTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TioneClient::StopTrainingTaskOutcome TioneClient::StopTrainingTask(const StopTrainingTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopTrainingTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopTrainingTaskResponse rsp = StopTrainingTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopTrainingTaskOutcome(rsp);
        else
            return StopTrainingTaskOutcome(o.GetError());
    }
    else
    {
        return StopTrainingTaskOutcome(outcome.GetError());
    }
}

void TioneClient::StopTrainingTaskAsync(const StopTrainingTaskRequest& request, const StopTrainingTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopTrainingTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TioneClient::StopTrainingTaskOutcomeCallable TioneClient::StopTrainingTaskCallable(const StopTrainingTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopTrainingTaskOutcome()>>(
        [this, request]()
        {
            return this->StopTrainingTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

