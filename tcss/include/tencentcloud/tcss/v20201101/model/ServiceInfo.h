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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SERVICEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SERVICEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 容器安全服务信息列表
                */
                class ServiceInfo : public AbstractModel
                {
                public:
                    ServiceInfo();
                    ~ServiceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务id
                     * @return ServiceID 服务id
                     */
                    std::string GetServiceID() const;

                    /**
                     * 设置服务id
                     * @param ServiceID 服务id
                     */
                    void SetServiceID(const std::string& _serviceID);

                    /**
                     * 判断参数 ServiceID 是否已赋值
                     * @return ServiceID 是否已赋值
                     */
                    bool ServiceIDHasBeenSet() const;

                    /**
                     * 获取主机id
                     * @return HostID 主机id
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置主机id
                     * @param HostID 主机id
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取主机ip
                     * @return HostIP 主机ip
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置主机ip
                     * @param HostIP 主机ip
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取容器名
                     * @return ContainerName 容器名
                     */
                    std::string GetContainerName() const;

                    /**
                     * 设置容器名
                     * @param ContainerName 容器名
                     */
                    void SetContainerName(const std::string& _containerName);

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取服务名 例如nginx/redis
                     * @return Type 服务名 例如nginx/redis
                     */
                    std::string GetType() const;

                    /**
                     * 设置服务名 例如nginx/redis
                     * @param Type 服务名 例如nginx/redis
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取版本
                     * @return Version 版本
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本
                     * @param Version 版本
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取账号
                     * @return RunAs 账号
                     */
                    std::string GetRunAs() const;

                    /**
                     * 设置账号
                     * @param RunAs 账号
                     */
                    void SetRunAs(const std::string& _runAs);

                    /**
                     * 判断参数 RunAs 是否已赋值
                     * @return RunAs 是否已赋值
                     */
                    bool RunAsHasBeenSet() const;

                    /**
                     * 获取监听端口
                     * @return Listen 监听端口
                     */
                    std::vector<std::string> GetListen() const;

                    /**
                     * 设置监听端口
                     * @param Listen 监听端口
                     */
                    void SetListen(const std::vector<std::string>& _listen);

                    /**
                     * 判断参数 Listen 是否已赋值
                     * @return Listen 是否已赋值
                     */
                    bool ListenHasBeenSet() const;

                    /**
                     * 获取配置
                     * @return Config 配置
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置配置
                     * @param Config 配置
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取关联进程数
                     * @return ProcessCnt 关联进程数
                     */
                    uint64_t GetProcessCnt() const;

                    /**
                     * 设置关联进程数
                     * @param ProcessCnt 关联进程数
                     */
                    void SetProcessCnt(const uint64_t& _processCnt);

                    /**
                     * 判断参数 ProcessCnt 是否已赋值
                     * @return ProcessCnt 是否已赋值
                     */
                    bool ProcessCntHasBeenSet() const;

                    /**
                     * 获取访问日志
                     * @return AccessLog 访问日志
                     */
                    std::string GetAccessLog() const;

                    /**
                     * 设置访问日志
                     * @param AccessLog 访问日志
                     */
                    void SetAccessLog(const std::string& _accessLog);

                    /**
                     * 判断参数 AccessLog 是否已赋值
                     * @return AccessLog 是否已赋值
                     */
                    bool AccessLogHasBeenSet() const;

                    /**
                     * 获取错误日志
                     * @return ErrorLog 错误日志
                     */
                    std::string GetErrorLog() const;

                    /**
                     * 设置错误日志
                     * @param ErrorLog 错误日志
                     */
                    void SetErrorLog(const std::string& _errorLog);

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     */
                    bool ErrorLogHasBeenSet() const;

                    /**
                     * 获取数据目录
                     * @return DataPath 数据目录
                     */
                    std::string GetDataPath() const;

                    /**
                     * 设置数据目录
                     * @param DataPath 数据目录
                     */
                    void SetDataPath(const std::string& _dataPath);

                    /**
                     * 判断参数 DataPath 是否已赋值
                     * @return DataPath 是否已赋值
                     */
                    bool DataPathHasBeenSet() const;

                    /**
                     * 获取web目录
                     * @return WebRoot web目录
                     */
                    std::string GetWebRoot() const;

                    /**
                     * 设置web目录
                     * @param WebRoot web目录
                     */
                    void SetWebRoot(const std::string& _webRoot);

                    /**
                     * 判断参数 WebRoot 是否已赋值
                     * @return WebRoot 是否已赋值
                     */
                    bool WebRootHasBeenSet() const;

                    /**
                     * 获取关联的进程id
                     * @return Pids 关联的进程id
                     */
                    std::vector<uint64_t> GetPids() const;

                    /**
                     * 设置关联的进程id
                     * @param Pids 关联的进程id
                     */
                    void SetPids(const std::vector<uint64_t>& _pids);

                    /**
                     * 判断参数 Pids 是否已赋值
                     * @return Pids 是否已赋值
                     */
                    bool PidsHasBeenSet() const;

                    /**
                     * 获取服务类型 app,web,db
                     * @return MainType 服务类型 app,web,db
                     */
                    std::string GetMainType() const;

                    /**
                     * 设置服务类型 app,web,db
                     * @param MainType 服务类型 app,web,db
                     */
                    void SetMainType(const std::string& _mainType);

                    /**
                     * 判断参数 MainType 是否已赋值
                     * @return MainType 是否已赋值
                     */
                    bool MainTypeHasBeenSet() const;

                    /**
                     * 获取执行文件
                     * @return Exe 执行文件
                     */
                    std::string GetExe() const;

                    /**
                     * 设置执行文件
                     * @param Exe 执行文件
                     */
                    void SetExe(const std::string& _exe);

                    /**
                     * 判断参数 Exe 是否已赋值
                     * @return Exe 是否已赋值
                     */
                    bool ExeHasBeenSet() const;

                    /**
                     * 获取服务命令行参数
                     * @return Parameter 服务命令行参数
                     */
                    std::string GetParameter() const;

                    /**
                     * 设置服务命令行参数
                     * @param Parameter 服务命令行参数
                     */
                    void SetParameter(const std::string& _parameter);

                    /**
                     * 判断参数 Parameter 是否已赋值
                     * @return Parameter 是否已赋值
                     */
                    bool ParameterHasBeenSet() const;

                    /**
                     * 获取容器id
                     * @return ContainerId 容器id
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置容器id
                     * @param ContainerId 容器id
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取主机名称
                     * @return HostName 主机名称
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
                     * @param HostName 主机名称
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return PublicIp 外网ip
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置外网ip
                     * @param PublicIp 外网ip
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     */
                    bool PublicIpHasBeenSet() const;

                private:

                    /**
                     * 服务id
                     */
                    std::string m_serviceID;
                    bool m_serviceIDHasBeenSet;

                    /**
                     * 主机id
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * 主机ip
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 容器名
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 服务名 例如nginx/redis
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 账号
                     */
                    std::string m_runAs;
                    bool m_runAsHasBeenSet;

                    /**
                     * 监听端口
                     */
                    std::vector<std::string> m_listen;
                    bool m_listenHasBeenSet;

                    /**
                     * 配置
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 关联进程数
                     */
                    uint64_t m_processCnt;
                    bool m_processCntHasBeenSet;

                    /**
                     * 访问日志
                     */
                    std::string m_accessLog;
                    bool m_accessLogHasBeenSet;

                    /**
                     * 错误日志
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * 数据目录
                     */
                    std::string m_dataPath;
                    bool m_dataPathHasBeenSet;

                    /**
                     * web目录
                     */
                    std::string m_webRoot;
                    bool m_webRootHasBeenSet;

                    /**
                     * 关联的进程id
                     */
                    std::vector<uint64_t> m_pids;
                    bool m_pidsHasBeenSet;

                    /**
                     * 服务类型 app,web,db
                     */
                    std::string m_mainType;
                    bool m_mainTypeHasBeenSet;

                    /**
                     * 执行文件
                     */
                    std::string m_exe;
                    bool m_exeHasBeenSet;

                    /**
                     * 服务命令行参数
                     */
                    std::string m_parameter;
                    bool m_parameterHasBeenSet;

                    /**
                     * 容器id
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * 主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SERVICEINFO_H_
