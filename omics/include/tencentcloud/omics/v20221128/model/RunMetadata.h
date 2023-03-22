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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_RUNMETADATA_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_RUNMETADATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 任务作业详情。
                */
                class RunMetadata : public AbstractModel
                {
                public:
                    RunMetadata();
                    ~RunMetadata() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunType 任务类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRunType() const;

                    /**
                     * 设置任务类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunType 任务类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunType(const std::string& _runType);

                    /**
                     * 判断参数 RunType 是否已赋值
                     * @return RunType 是否已赋值
                     */
                    bool RunTypeHasBeenSet() const;

                    /**
                     * 获取任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunId 任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRunId() const;

                    /**
                     * 设置任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RunId 任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRunId(const std::string& _runId);

                    /**
                     * 判断参数 RunId 是否已赋值
                     * @return RunId 是否已赋值
                     */
                    bool RunIdHasBeenSet() const;

                    /**
                     * 获取父层ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 父层ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置父层ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ParentId 父层ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取作业ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 作业ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param JobId 作业ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取作业名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallName 作业名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCallName() const;

                    /**
                     * 设置作业名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CallName 作业名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCallName(const std::string& _callName);

                    /**
                     * 判断参数 CallName 是否已赋值
                     * @return CallName 是否已赋值
                     */
                    bool CallNameHasBeenSet() const;

                    /**
                     * 获取Scatter索引。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScatterIndex Scatter索引。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScatterIndex() const;

                    /**
                     * 设置Scatter索引。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ScatterIndex Scatter索引。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScatterIndex(const std::string& _scatterIndex);

                    /**
                     * 判断参数 ScatterIndex 是否已赋值
                     * @return ScatterIndex 是否已赋值
                     */
                    bool ScatterIndexHasBeenSet() const;

                    /**
                     * 获取输入。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Input 输入。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInput() const;

                    /**
                     * 设置输入。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Input 输入。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output 输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Output 输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorMessage 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ErrorMessage 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取提交时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubmitTime 提交时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置提交时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubmitTime 提交时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubmitTime(const std::string& _submitTime);

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     */
                    bool SubmitTimeHasBeenSet() const;

                    /**
                     * 获取结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取命令行。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Command 命令行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置命令行。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Command 命令行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取运行时。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Runtime 运行时。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRuntime() const;

                    /**
                     * 设置运行时。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Runtime 运行时。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRuntime(const std::string& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取预处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Preprocess 预处理。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetPreprocess() const;

                    /**
                     * 设置预处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Preprocess 预处理。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPreprocess(const bool& _preprocess);

                    /**
                     * 判断参数 Preprocess 是否已赋值
                     * @return Preprocess 是否已赋值
                     */
                    bool PreprocessHasBeenSet() const;

                    /**
                     * 获取后处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostProcess 后处理。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetPostProcess() const;

                    /**
                     * 设置后处理。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PostProcess 后处理。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPostProcess(const bool& _postProcess);

                    /**
                     * 判断参数 PostProcess 是否已赋值
                     * @return PostProcess 是否已赋值
                     */
                    bool PostProcessHasBeenSet() const;

                    /**
                     * 获取Cache命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallCached Cache命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetCallCached() const;

                    /**
                     * 设置Cache命中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CallCached Cache命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCallCached(const bool& _callCached);

                    /**
                     * 判断参数 CallCached 是否已赋值
                     * @return CallCached 是否已赋值
                     */
                    bool CallCachedHasBeenSet() const;

                    /**
                     * 获取标准输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Stdout 标准输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStdout() const;

                    /**
                     * 设置标准输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Stdout 标准输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStdout(const std::string& _stdout);

                    /**
                     * 判断参数 Stdout 是否已赋值
                     * @return Stdout 是否已赋值
                     */
                    bool StdoutHasBeenSet() const;

                    /**
                     * 获取错误输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Stderr 错误输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStderr() const;

                    /**
                     * 设置错误输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Stderr 错误输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStderr(const std::string& _stderr);

                    /**
                     * 判断参数 Stderr 是否已赋值
                     * @return Stderr 是否已赋值
                     */
                    bool StderrHasBeenSet() const;

                private:

                    /**
                     * 任务类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runType;
                    bool m_runTypeHasBeenSet;

                    /**
                     * 任务ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                    /**
                     * 父层ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 作业ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 作业名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callName;
                    bool m_callNameHasBeenSet;

                    /**
                     * Scatter索引。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scatterIndex;
                    bool m_scatterIndexHasBeenSet;

                    /**
                     * 输入。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * 输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 提交时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * 结束时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 命令行。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 运行时。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * 预处理。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_preprocess;
                    bool m_preprocessHasBeenSet;

                    /**
                     * 后处理。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_postProcess;
                    bool m_postProcessHasBeenSet;

                    /**
                     * Cache命中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_callCached;
                    bool m_callCachedHasBeenSet;

                    /**
                     * 标准输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stdout;
                    bool m_stdoutHasBeenSet;

                    /**
                     * 错误输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stderr;
                    bool m_stderrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_RUNMETADATA_H_
