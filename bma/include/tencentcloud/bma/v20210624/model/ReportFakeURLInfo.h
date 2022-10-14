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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_REPORTFAKEURLINFO_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_REPORTFAKEURLINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * 举报网址信息
                */
                class ReportFakeURLInfo : public AbstractModel
                {
                public:
                    ReportFakeURLInfo();
                    ~ReportFakeURLInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仿冒网址ID
                     * @return FakeURLId 仿冒网址ID
                     */
                    int64_t GetFakeURLId() const;

                    /**
                     * 设置仿冒网址ID
                     * @param FakeURLId 仿冒网址ID
                     */
                    void SetFakeURLId(const int64_t& _fakeURLId);

                    /**
                     * 判断参数 FakeURLId 是否已赋值
                     * @return FakeURLId 是否已赋值
                     */
                    bool FakeURLIdHasBeenSet() const;

                    /**
                     * 获取检测时间
                     * @return DetectTime 检测时间
                     */
                    std::string GetDetectTime() const;

                    /**
                     * 设置检测时间
                     * @param DetectTime 检测时间
                     */
                    void SetDetectTime(const std::string& _detectTime);

                    /**
                     * 判断参数 DetectTime 是否已赋值
                     * @return DetectTime 是否已赋值
                     */
                    bool DetectTimeHasBeenSet() const;

                    /**
                     * 获取保护网站
                     * @return ProtectURL 保护网站
                     */
                    std::string GetProtectURL() const;

                    /**
                     * 设置保护网站
                     * @param ProtectURL 保护网站
                     */
                    void SetProtectURL(const std::string& _protectURL);

                    /**
                     * 判断参数 ProtectURL 是否已赋值
                     * @return ProtectURL 是否已赋值
                     */
                    bool ProtectURLHasBeenSet() const;

                    /**
                     * 获取保护网站名称
                     * @return ProtectWeb 保护网站名称
                     */
                    std::string GetProtectWeb() const;

                    /**
                     * 设置保护网站名称
                     * @param ProtectWeb 保护网站名称
                     */
                    void SetProtectWeb(const std::string& _protectWeb);

                    /**
                     * 判断参数 ProtectWeb 是否已赋值
                     * @return ProtectWeb 是否已赋值
                     */
                    bool ProtectWebHasBeenSet() const;

                    /**
                     * 获取仿冒网址
                     * @return FakeURL 仿冒网址
                     */
                    std::string GetFakeURL() const;

                    /**
                     * 设置仿冒网址
                     * @param FakeURL 仿冒网址
                     */
                    void SetFakeURL(const std::string& _fakeURL);

                    /**
                     * 判断参数 FakeURL 是否已赋值
                     * @return FakeURL 是否已赋值
                     */
                    bool FakeURLHasBeenSet() const;

                    /**
                     * 获取截图
                     * @return Snapshot 截图
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 设置截图
                     * @param Snapshot 截图
                     */
                    void SetSnapshot(const std::string& _snapshot);

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     */
                    bool SnapshotHasBeenSet() const;

                    /**
                     * 获取IP地址
                     * @return IP IP地址
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP地址
                     * @param IP IP地址
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取IP地理位置
                     * @return IPLoc IP地理位置
                     */
                    std::string GetIPLoc() const;

                    /**
                     * 设置IP地理位置
                     * @param IPLoc IP地理位置
                     */
                    void SetIPLoc(const std::string& _iPLoc);

                    /**
                     * 判断参数 IPLoc 是否已赋值
                     * @return IPLoc 是否已赋值
                     */
                    bool IPLocHasBeenSet() const;

                    /**
                     * 获取热度
                     * @return Heat 热度
                     */
                    int64_t GetHeat() const;

                    /**
                     * 设置热度
                     * @param Heat 热度
                     */
                    void SetHeat(const int64_t& _heat);

                    /**
                     * 判断参数 Heat 是否已赋值
                     * @return Heat 是否已赋值
                     */
                    bool HeatHasBeenSet() const;

                    /**
                     * 获取网站状态
                     * @return Status 网站状态
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置网站状态
                     * @param Status 网站状态
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取网站不处理原因
                     * @return Note 网站不处理原因
                     */
                    std::string GetNote() const;

                    /**
                     * 设置网站不处理原因
                     * @param Note 网站不处理原因
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取仿冒网站的企业名称
                     * @return FakeURLCompany 仿冒网站的企业名称
                     */
                    std::string GetFakeURLCompany() const;

                    /**
                     * 设置仿冒网站的企业名称
                     * @param FakeURLCompany 仿冒网站的企业名称
                     */
                    void SetFakeURLCompany(const std::string& _fakeURLCompany);

                    /**
                     * 判断参数 FakeURLCompany 是否已赋值
                     * @return FakeURLCompany 是否已赋值
                     */
                    bool FakeURLCompanyHasBeenSet() const;

                    /**
                     * 获取仿冒网站的网站性质
                     * @return FakeURLAttr 仿冒网站的网站性质
                     */
                    std::string GetFakeURLAttr() const;

                    /**
                     * 设置仿冒网站的网站性质
                     * @param FakeURLAttr 仿冒网站的网站性质
                     */
                    void SetFakeURLAttr(const std::string& _fakeURLAttr);

                    /**
                     * 判断参数 FakeURLAttr 是否已赋值
                     * @return FakeURLAttr 是否已赋值
                     */
                    bool FakeURLAttrHasBeenSet() const;

                    /**
                     * 获取仿冒网站的网站名称
                     * @return FakeURLName 仿冒网站的网站名称
                     */
                    std::string GetFakeURLName() const;

                    /**
                     * 设置仿冒网站的网站名称
                     * @param FakeURLName 仿冒网站的网站名称
                     */
                    void SetFakeURLName(const std::string& _fakeURLName);

                    /**
                     * 判断参数 FakeURLName 是否已赋值
                     * @return FakeURLName 是否已赋值
                     */
                    bool FakeURLNameHasBeenSet() const;

                    /**
                     * 获取仿冒网站的备案
                     * @return FakeURLICP 仿冒网站的备案
                     */
                    std::string GetFakeURLICP() const;

                    /**
                     * 设置仿冒网站的备案
                     * @param FakeURLICP 仿冒网站的备案
                     */
                    void SetFakeURLICP(const std::string& _fakeURLICP);

                    /**
                     * 判断参数 FakeURLICP 是否已赋值
                     * @return FakeURLICP 是否已赋值
                     */
                    bool FakeURLICPHasBeenSet() const;

                    /**
                     * 获取仿冒网站创建时间
                     * @return FakeURLCreateTime 仿冒网站创建时间
                     */
                    std::string GetFakeURLCreateTime() const;

                    /**
                     * 设置仿冒网站创建时间
                     * @param FakeURLCreateTime 仿冒网站创建时间
                     */
                    void SetFakeURLCreateTime(const std::string& _fakeURLCreateTime);

                    /**
                     * 判断参数 FakeURLCreateTime 是否已赋值
                     * @return FakeURLCreateTime 是否已赋值
                     */
                    bool FakeURLCreateTimeHasBeenSet() const;

                    /**
                     * 获取仿冒网站过期时间
                     * @return FakeURLExpireTime 仿冒网站过期时间
                     */
                    std::string GetFakeURLExpireTime() const;

                    /**
                     * 设置仿冒网站过期时间
                     * @param FakeURLExpireTime 仿冒网站过期时间
                     */
                    void SetFakeURLExpireTime(const std::string& _fakeURLExpireTime);

                    /**
                     * 判断参数 FakeURLExpireTime 是否已赋值
                     * @return FakeURLExpireTime 是否已赋值
                     */
                    bool FakeURLExpireTimeHasBeenSet() const;

                    /**
                     * 获取协查处置时间
                     * @return BlockTime 协查处置时间
                     */
                    std::string GetBlockTime() const;

                    /**
                     * 设置协查处置时间
                     * @param BlockTime 协查处置时间
                     */
                    void SetBlockTime(const std::string& _blockTime);

                    /**
                     * 判断参数 BlockTime 是否已赋值
                     * @return BlockTime 是否已赋值
                     */
                    bool BlockTimeHasBeenSet() const;

                private:

                    /**
                     * 仿冒网址ID
                     */
                    int64_t m_fakeURLId;
                    bool m_fakeURLIdHasBeenSet;

                    /**
                     * 检测时间
                     */
                    std::string m_detectTime;
                    bool m_detectTimeHasBeenSet;

                    /**
                     * 保护网站
                     */
                    std::string m_protectURL;
                    bool m_protectURLHasBeenSet;

                    /**
                     * 保护网站名称
                     */
                    std::string m_protectWeb;
                    bool m_protectWebHasBeenSet;

                    /**
                     * 仿冒网址
                     */
                    std::string m_fakeURL;
                    bool m_fakeURLHasBeenSet;

                    /**
                     * 截图
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * IP地址
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * IP地理位置
                     */
                    std::string m_iPLoc;
                    bool m_iPLocHasBeenSet;

                    /**
                     * 热度
                     */
                    int64_t m_heat;
                    bool m_heatHasBeenSet;

                    /**
                     * 网站状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 网站不处理原因
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 仿冒网站的企业名称
                     */
                    std::string m_fakeURLCompany;
                    bool m_fakeURLCompanyHasBeenSet;

                    /**
                     * 仿冒网站的网站性质
                     */
                    std::string m_fakeURLAttr;
                    bool m_fakeURLAttrHasBeenSet;

                    /**
                     * 仿冒网站的网站名称
                     */
                    std::string m_fakeURLName;
                    bool m_fakeURLNameHasBeenSet;

                    /**
                     * 仿冒网站的备案
                     */
                    std::string m_fakeURLICP;
                    bool m_fakeURLICPHasBeenSet;

                    /**
                     * 仿冒网站创建时间
                     */
                    std::string m_fakeURLCreateTime;
                    bool m_fakeURLCreateTimeHasBeenSet;

                    /**
                     * 仿冒网站过期时间
                     */
                    std::string m_fakeURLExpireTime;
                    bool m_fakeURLExpireTimeHasBeenSet;

                    /**
                     * 协查处置时间
                     */
                    std::string m_blockTime;
                    bool m_blockTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_REPORTFAKEURLINFO_H_
