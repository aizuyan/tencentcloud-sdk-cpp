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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMINSTANCEREQUEST_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apm/v20210622/model/ApmTag.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * ModifyApmInstance请求参数结构体
                */
                class ModifyApmInstanceRequest : public AbstractModel
                {
                public:
                    ModifyApmInstanceRequest();
                    ~ModifyApmInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例名
                     * @return Name 实例名
                     */
                    std::string GetName() const;

                    /**
                     * 设置实例名
                     * @param Name 实例名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取标签列表
                     * @return Tags 标签列表
                     */
                    std::vector<ApmTag> GetTags() const;

                    /**
                     * 设置标签列表
                     * @param Tags 标签列表
                     */
                    void SetTags(const std::vector<ApmTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例详情
                     * @return Description 实例详情
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置实例详情
                     * @param Description 实例详情
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Trace数据保存时长
                     * @return TraceDuration Trace数据保存时长
                     */
                    int64_t GetTraceDuration() const;

                    /**
                     * 设置Trace数据保存时长
                     * @param TraceDuration Trace数据保存时长
                     */
                    void SetTraceDuration(const int64_t& _traceDuration);

                    /**
                     * 判断参数 TraceDuration 是否已赋值
                     * @return TraceDuration 是否已赋值
                     */
                    bool TraceDurationHasBeenSet() const;

                    /**
                     * 获取是否开启计费
                     * @return OpenBilling 是否开启计费
                     */
                    bool GetOpenBilling() const;

                    /**
                     * 设置是否开启计费
                     * @param OpenBilling 是否开启计费
                     */
                    void SetOpenBilling(const bool& _openBilling);

                    /**
                     * 判断参数 OpenBilling 是否已赋值
                     * @return OpenBilling 是否已赋值
                     */
                    bool OpenBillingHasBeenSet() const;

                    /**
                     * 获取实例上报额度
                     * @return SpanDailyCounters 实例上报额度
                     */
                    uint64_t GetSpanDailyCounters() const;

                    /**
                     * 设置实例上报额度
                     * @param SpanDailyCounters 实例上报额度
                     */
                    void SetSpanDailyCounters(const uint64_t& _spanDailyCounters);

                    /**
                     * 判断参数 SpanDailyCounters 是否已赋值
                     * @return SpanDailyCounters 是否已赋值
                     */
                    bool SpanDailyCountersHasBeenSet() const;

                    /**
                     * 获取错误率阈值
                     * @return ErrRateThreshold 错误率阈值
                     */
                    int64_t GetErrRateThreshold() const;

                    /**
                     * 设置错误率阈值
                     * @param ErrRateThreshold 错误率阈值
                     */
                    void SetErrRateThreshold(const int64_t& _errRateThreshold);

                    /**
                     * 判断参数 ErrRateThreshold 是否已赋值
                     * @return ErrRateThreshold 是否已赋值
                     */
                    bool ErrRateThresholdHasBeenSet() const;

                    /**
                     * 获取采样率
                     * @return SampleRate 采样率
                     */
                    int64_t GetSampleRate() const;

                    /**
                     * 设置采样率
                     * @param SampleRate 采样率
                     */
                    void SetSampleRate(const int64_t& _sampleRate);

                    /**
                     * 判断参数 SampleRate 是否已赋值
                     * @return SampleRate 是否已赋值
                     */
                    bool SampleRateHasBeenSet() const;

                    /**
                     * 获取是否开启错误采样 0 关 1 开
                     * @return ErrorSample 是否开启错误采样 0 关 1 开
                     */
                    int64_t GetErrorSample() const;

                    /**
                     * 设置是否开启错误采样 0 关 1 开
                     * @param ErrorSample 是否开启错误采样 0 关 1 开
                     */
                    void SetErrorSample(const int64_t& _errorSample);

                    /**
                     * 判断参数 ErrorSample 是否已赋值
                     * @return ErrorSample 是否已赋值
                     */
                    bool ErrorSampleHasBeenSet() const;

                    /**
                     * 获取慢请求阈值
                     * @return SlowRequestSavedThreshold 慢请求阈值
                     */
                    int64_t GetSlowRequestSavedThreshold() const;

                    /**
                     * 设置慢请求阈值
                     * @param SlowRequestSavedThreshold 慢请求阈值
                     */
                    void SetSlowRequestSavedThreshold(const int64_t& _slowRequestSavedThreshold);

                    /**
                     * 判断参数 SlowRequestSavedThreshold 是否已赋值
                     * @return SlowRequestSavedThreshold 是否已赋值
                     */
                    bool SlowRequestSavedThresholdHasBeenSet() const;

                    /**
                     * 获取是否开启日志功能 0 关 1 开
                     * @return IsRelatedLog 是否开启日志功能 0 关 1 开
                     */
                    int64_t GetIsRelatedLog() const;

                    /**
                     * 设置是否开启日志功能 0 关 1 开
                     * @param IsRelatedLog 是否开启日志功能 0 关 1 开
                     */
                    void SetIsRelatedLog(const int64_t& _isRelatedLog);

                    /**
                     * 判断参数 IsRelatedLog 是否已赋值
                     * @return IsRelatedLog 是否已赋值
                     */
                    bool IsRelatedLogHasBeenSet() const;

                    /**
                     * 获取日志地域
                     * @return LogRegion 日志地域
                     */
                    std::string GetLogRegion() const;

                    /**
                     * 设置日志地域
                     * @param LogRegion 日志地域
                     */
                    void SetLogRegion(const std::string& _logRegion);

                    /**
                     * 判断参数 LogRegion 是否已赋值
                     * @return LogRegion 是否已赋值
                     */
                    bool LogRegionHasBeenSet() const;

                    /**
                     * 获取CLS日志主题ID | ES 索引名
                     * @return LogTopicID CLS日志主题ID | ES 索引名
                     */
                    std::string GetLogTopicID() const;

                    /**
                     * 设置CLS日志主题ID | ES 索引名
                     * @param LogTopicID CLS日志主题ID | ES 索引名
                     */
                    void SetLogTopicID(const std::string& _logTopicID);

                    /**
                     * 判断参数 LogTopicID 是否已赋值
                     * @return LogTopicID 是否已赋值
                     */
                    bool LogTopicIDHasBeenSet() const;

                    /**
                     * 获取CLS日志集 | ES集群ID
                     * @return LogSet CLS日志集 | ES集群ID
                     */
                    std::string GetLogSet() const;

                    /**
                     * 设置CLS日志集 | ES集群ID
                     * @param LogSet CLS日志集 | ES集群ID
                     */
                    void SetLogSet(const std::string& _logSet);

                    /**
                     * 判断参数 LogSet 是否已赋值
                     * @return LogSet 是否已赋值
                     */
                    bool LogSetHasBeenSet() const;

                    /**
                     * 获取CLS | ES
                     * @return LogSource CLS | ES
                     */
                    std::string GetLogSource() const;

                    /**
                     * 设置CLS | ES
                     * @param LogSource CLS | ES
                     */
                    void SetLogSource(const std::string& _logSource);

                    /**
                     * 判断参数 LogSource 是否已赋值
                     * @return LogSource 是否已赋值
                     */
                    bool LogSourceHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<ApmTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例详情
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Trace数据保存时长
                     */
                    int64_t m_traceDuration;
                    bool m_traceDurationHasBeenSet;

                    /**
                     * 是否开启计费
                     */
                    bool m_openBilling;
                    bool m_openBillingHasBeenSet;

                    /**
                     * 实例上报额度
                     */
                    uint64_t m_spanDailyCounters;
                    bool m_spanDailyCountersHasBeenSet;

                    /**
                     * 错误率阈值
                     */
                    int64_t m_errRateThreshold;
                    bool m_errRateThresholdHasBeenSet;

                    /**
                     * 采样率
                     */
                    int64_t m_sampleRate;
                    bool m_sampleRateHasBeenSet;

                    /**
                     * 是否开启错误采样 0 关 1 开
                     */
                    int64_t m_errorSample;
                    bool m_errorSampleHasBeenSet;

                    /**
                     * 慢请求阈值
                     */
                    int64_t m_slowRequestSavedThreshold;
                    bool m_slowRequestSavedThresholdHasBeenSet;

                    /**
                     * 是否开启日志功能 0 关 1 开
                     */
                    int64_t m_isRelatedLog;
                    bool m_isRelatedLogHasBeenSet;

                    /**
                     * 日志地域
                     */
                    std::string m_logRegion;
                    bool m_logRegionHasBeenSet;

                    /**
                     * CLS日志主题ID | ES 索引名
                     */
                    std::string m_logTopicID;
                    bool m_logTopicIDHasBeenSet;

                    /**
                     * CLS日志集 | ES集群ID
                     */
                    std::string m_logSet;
                    bool m_logSetHasBeenSet;

                    /**
                     * CLS | ES
                     */
                    std::string m_logSource;
                    bool m_logSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_MODIFYAPMINSTANCEREQUEST_H_
