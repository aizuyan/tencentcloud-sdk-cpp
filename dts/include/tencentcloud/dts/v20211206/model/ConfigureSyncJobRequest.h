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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/Objects.h>
#include <tencentcloud/dts/v20211206/model/Endpoint.h>
#include <tencentcloud/dts/v20211206/model/SyncDBEndpointInfos.h>
#include <tencentcloud/dts/v20211206/model/Options.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * ConfigureSyncJob请求参数结构体
                */
                class ConfigureSyncJobRequest : public AbstractModel
                {
                public:
                    ConfigureSyncJobRequest();
                    ~ConfigureSyncJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取同步实例id（即标识一个同步作业），形如sync-werwfs23
                     * @return JobId 同步实例id（即标识一个同步作业），形如sync-werwfs23
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置同步实例id（即标识一个同步作业），形如sync-werwfs23
                     * @param JobId 同步实例id（即标识一个同步作业），形如sync-werwfs23
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云),注意具体可选值依赖当前链路
                     * @return SrcAccessType 源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云),注意具体可选值依赖当前链路
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云),注意具体可选值依赖当前链路
                     * @param SrcAccessType 源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云),注意具体可选值依赖当前链路
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、ckafka(CKafka实例),注意具体可选值依赖当前链路
                     * @return DstAccessType 目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、ckafka(CKafka实例),注意具体可选值依赖当前链路
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、ckafka(CKafka实例),注意具体可选值依赖当前链路
                     * @param DstAccessType 目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、ckafka(CKafka实例),注意具体可选值依赖当前链路
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取同步库表对象信息
                     * @return Objects 同步库表对象信息
                     */
                    Objects GetObjects() const;

                    /**
                     * 设置同步库表对象信息
                     * @param Objects 同步库表对象信息
                     */
                    void SetObjects(const Objects& _objects);

                    /**
                     * 判断参数 Objects 是否已赋值
                     * @return Objects 是否已赋值
                     */
                    bool ObjectsHasBeenSet() const;

                    /**
                     * 获取同步任务名称
                     * @return JobName 同步任务名称
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置同步任务名称
                     * @param JobName 同步任务名称
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取枚举值是 liteMode 和 fullMode ，分别对应精简模式或正常模式
                     * @return JobMode 枚举值是 liteMode 和 fullMode ，分别对应精简模式或正常模式
                     */
                    std::string GetJobMode() const;

                    /**
                     * 设置枚举值是 liteMode 和 fullMode ，分别对应精简模式或正常模式
                     * @param JobMode 枚举值是 liteMode 和 fullMode ，分别对应精简模式或正常模式
                     */
                    void SetJobMode(const std::string& _jobMode);

                    /**
                     * 判断参数 JobMode 是否已赋值
                     * @return JobMode 是否已赋值
                     */
                    bool JobModeHasBeenSet() const;

                    /**
                     * 获取运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     * @return RunMode 运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     * @param RunMode 运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取期待启动时间，当RunMode取值为Timed时，此值必填，形如："2006-01-02 15:04:05"
                     * @return ExpectRunTime 期待启动时间，当RunMode取值为Timed时，此值必填，形如："2006-01-02 15:04:05"
                     */
                    std::string GetExpectRunTime() const;

                    /**
                     * 设置期待启动时间，当RunMode取值为Timed时，此值必填，形如："2006-01-02 15:04:05"
                     * @param ExpectRunTime 期待启动时间，当RunMode取值为Timed时，此值必填，形如："2006-01-02 15:04:05"
                     */
                    void SetExpectRunTime(const std::string& _expectRunTime);

                    /**
                     * 判断参数 ExpectRunTime 是否已赋值
                     * @return ExpectRunTime 是否已赋值
                     */
                    bool ExpectRunTimeHasBeenSet() const;

                    /**
                     * 获取源端信息，单节点数据库使用，且SrcNodeType传single
                     * @return SrcInfo 源端信息，单节点数据库使用，且SrcNodeType传single
                     */
                    Endpoint GetSrcInfo() const;

                    /**
                     * 设置源端信息，单节点数据库使用，且SrcNodeType传single
                     * @param SrcInfo 源端信息，单节点数据库使用，且SrcNodeType传single
                     */
                    void SetSrcInfo(const Endpoint& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取源端信息，多节点数据库使用，且SrcNodeType传cluster
                     * @return SrcInfos 源端信息，多节点数据库使用，且SrcNodeType传cluster
                     */
                    SyncDBEndpointInfos GetSrcInfos() const;

                    /**
                     * 设置源端信息，多节点数据库使用，且SrcNodeType传cluster
                     * @param SrcInfos 源端信息，多节点数据库使用，且SrcNodeType传cluster
                     */
                    void SetSrcInfos(const SyncDBEndpointInfos& _srcInfos);

                    /**
                     * 判断参数 SrcInfos 是否已赋值
                     * @return SrcInfos 是否已赋值
                     */
                    bool SrcInfosHasBeenSet() const;

                    /**
                     * 获取枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster
                     * @return SrcNodeType 枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster
                     */
                    std::string GetSrcNodeType() const;

                    /**
                     * 设置枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster
                     * @param SrcNodeType 枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster
                     */
                    void SetSrcNodeType(const std::string& _srcNodeType);

                    /**
                     * 判断参数 SrcNodeType 是否已赋值
                     * @return SrcNodeType 是否已赋值
                     */
                    bool SrcNodeTypeHasBeenSet() const;

                    /**
                     * 获取目标端信息，单节点数据库使用
                     * @return DstInfo 目标端信息，单节点数据库使用
                     */
                    Endpoint GetDstInfo() const;

                    /**
                     * 设置目标端信息，单节点数据库使用
                     * @param DstInfo 目标端信息，单节点数据库使用
                     */
                    void SetDstInfo(const Endpoint& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取目标端信息，多节点数据库使用，且DstNodeType传cluster
                     * @return DstInfos 目标端信息，多节点数据库使用，且DstNodeType传cluster
                     */
                    SyncDBEndpointInfos GetDstInfos() const;

                    /**
                     * 设置目标端信息，多节点数据库使用，且DstNodeType传cluster
                     * @param DstInfos 目标端信息，多节点数据库使用，且DstNodeType传cluster
                     */
                    void SetDstInfos(const SyncDBEndpointInfos& _dstInfos);

                    /**
                     * 判断参数 DstInfos 是否已赋值
                     * @return DstInfos 是否已赋值
                     */
                    bool DstInfosHasBeenSet() const;

                    /**
                     * 获取枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster
                     * @return DstNodeType 枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster
                     */
                    std::string GetDstNodeType() const;

                    /**
                     * 设置枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster
                     * @param DstNodeType 枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster
                     */
                    void SetDstNodeType(const std::string& _dstNodeType);

                    /**
                     * 判断参数 DstNodeType 是否已赋值
                     * @return DstNodeType 是否已赋值
                     */
                    bool DstNodeTypeHasBeenSet() const;

                    /**
                     * 获取同步任务选项
                     * @return Options 同步任务选项
                     */
                    Options GetOptions() const;

                    /**
                     * 设置同步任务选项
                     * @param Options 同步任务选项
                     */
                    void SetOptions(const Options& _options);

                    /**
                     * 判断参数 Options 是否已赋值
                     * @return Options 是否已赋值
                     */
                    bool OptionsHasBeenSet() const;

                    /**
                     * 获取自动重试的时间段、可设置5至720分钟、0表示不重试
                     * @return AutoRetryTimeRangeMinutes 自动重试的时间段、可设置5至720分钟、0表示不重试
                     */
                    int64_t GetAutoRetryTimeRangeMinutes() const;

                    /**
                     * 设置自动重试的时间段、可设置5至720分钟、0表示不重试
                     * @param AutoRetryTimeRangeMinutes 自动重试的时间段、可设置5至720分钟、0表示不重试
                     */
                    void SetAutoRetryTimeRangeMinutes(const int64_t& _autoRetryTimeRangeMinutes);

                    /**
                     * 判断参数 AutoRetryTimeRangeMinutes 是否已赋值
                     * @return AutoRetryTimeRangeMinutes 是否已赋值
                     */
                    bool AutoRetryTimeRangeMinutesHasBeenSet() const;

                private:

                    /**
                     * 同步实例id（即标识一个同步作业），形如sync-werwfs23
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 源端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云),注意具体可选值依赖当前链路
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * 目标端接入类型，cdb(云数据库)、cvm(云主机自建)、vpc(私有网络)、extranet(外网)、vpncloud(vpn接入)、dcg(专线接入)、ccn(云联网)、intranet(自研上云)、ckafka(CKafka实例),注意具体可选值依赖当前链路
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * 同步库表对象信息
                     */
                    Objects m_objects;
                    bool m_objectsHasBeenSet;

                    /**
                     * 同步任务名称
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 枚举值是 liteMode 和 fullMode ，分别对应精简模式或正常模式
                     */
                    std::string m_jobMode;
                    bool m_jobModeHasBeenSet;

                    /**
                     * 运行模式，取值如：Immediate(表示立即运行，默认为此项值)、Timed(表示定时运行)
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * 期待启动时间，当RunMode取值为Timed时，此值必填，形如："2006-01-02 15:04:05"
                     */
                    std::string m_expectRunTime;
                    bool m_expectRunTimeHasBeenSet;

                    /**
                     * 源端信息，单节点数据库使用，且SrcNodeType传single
                     */
                    Endpoint m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 源端信息，多节点数据库使用，且SrcNodeType传cluster
                     */
                    SyncDBEndpointInfos m_srcInfos;
                    bool m_srcInfosHasBeenSet;

                    /**
                     * 枚举值：cluster、single。源库为单节点数据库使用single，多节点使用cluster
                     */
                    std::string m_srcNodeType;
                    bool m_srcNodeTypeHasBeenSet;

                    /**
                     * 目标端信息，单节点数据库使用
                     */
                    Endpoint m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 目标端信息，多节点数据库使用，且DstNodeType传cluster
                     */
                    SyncDBEndpointInfos m_dstInfos;
                    bool m_dstInfosHasBeenSet;

                    /**
                     * 枚举值：cluster、single。目标库为单节点数据库使用single，多节点使用cluster
                     */
                    std::string m_dstNodeType;
                    bool m_dstNodeTypeHasBeenSet;

                    /**
                     * 同步任务选项
                     */
                    Options m_options;
                    bool m_optionsHasBeenSet;

                    /**
                     * 自动重试的时间段、可设置5至720分钟、0表示不重试
                     */
                    int64_t m_autoRetryTimeRangeMinutes;
                    bool m_autoRetryTimeRangeMinutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_CONFIGURESYNCJOBREQUEST_H_
