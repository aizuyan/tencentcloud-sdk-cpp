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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_ECGDESCRIPTION_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_ECGDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/EcgItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 心电图详情
                */
                class EcgDescription : public AbstractModel
                {
                public:
                    EcgDescription();
                    ~EcgDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取心率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeartRate 心率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetHeartRate() const;

                    /**
                     * 设置心率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HeartRate 心率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHeartRate(const EcgItem& _heartRate);

                    /**
                     * 判断参数 HeartRate 是否已赋值
                     * @return HeartRate 是否已赋值
                     */
                    bool HeartRateHasBeenSet() const;

                    /**
                     * 获取心房率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuricularRate 心房率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetAuricularRate() const;

                    /**
                     * 设置心房率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AuricularRate 心房率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAuricularRate(const EcgItem& _auricularRate);

                    /**
                     * 判断参数 AuricularRate 是否已赋值
                     * @return AuricularRate 是否已赋值
                     */
                    bool AuricularRateHasBeenSet() const;

                    /**
                     * 获取心室率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VentricularRate 心室率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetVentricularRate() const;

                    /**
                     * 设置心室率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VentricularRate 心室率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVentricularRate(const EcgItem& _ventricularRate);

                    /**
                     * 判断参数 VentricularRate 是否已赋值
                     * @return VentricularRate 是否已赋值
                     */
                    bool VentricularRateHasBeenSet() const;

                    /**
                     * 获取节律
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rhythm 节律
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetRhythm() const;

                    /**
                     * 设置节律
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Rhythm 节律
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRhythm(const EcgItem& _rhythm);

                    /**
                     * 判断参数 Rhythm 是否已赋值
                     * @return Rhythm 是否已赋值
                     */
                    bool RhythmHasBeenSet() const;

                    /**
                     * 获取P波时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PDuration P波时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetPDuration() const;

                    /**
                     * 设置P波时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PDuration P波时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPDuration(const EcgItem& _pDuration);

                    /**
                     * 判断参数 PDuration 是否已赋值
                     * @return PDuration 是否已赋值
                     */
                    bool PDurationHasBeenSet() const;

                    /**
                     * 获取QRS时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QrsDuration QRS时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetQrsDuration() const;

                    /**
                     * 设置QRS时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QrsDuration QRS时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQrsDuration(const EcgItem& _qrsDuration);

                    /**
                     * 判断参数 QrsDuration 是否已赋值
                     * @return QrsDuration 是否已赋值
                     */
                    bool QrsDurationHasBeenSet() const;

                    /**
                     * 获取QRS电轴
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QrsAxis QRS电轴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetQrsAxis() const;

                    /**
                     * 设置QRS电轴
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QrsAxis QRS电轴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQrsAxis(const EcgItem& _qrsAxis);

                    /**
                     * 判断参数 QrsAxis 是否已赋值
                     * @return QrsAxis 是否已赋值
                     */
                    bool QrsAxisHasBeenSet() const;

                    /**
                     * 获取P-R间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PRInterval P-R间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetPRInterval() const;

                    /**
                     * 设置P-R间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PRInterval P-R间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPRInterval(const EcgItem& _pRInterval);

                    /**
                     * 判断参数 PRInterval 是否已赋值
                     * @return PRInterval 是否已赋值
                     */
                    bool PRIntervalHasBeenSet() const;

                    /**
                     * 获取P-P间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PPInterval P-P间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetPPInterval() const;

                    /**
                     * 设置P-P间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PPInterval P-P间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPPInterval(const EcgItem& _pPInterval);

                    /**
                     * 判断参数 PPInterval 是否已赋值
                     * @return PPInterval 是否已赋值
                     */
                    bool PPIntervalHasBeenSet() const;

                    /**
                     * 获取R-R间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RRInterval R-R间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetRRInterval() const;

                    /**
                     * 设置R-R间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RRInterval R-R间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRRInterval(const EcgItem& _rRInterval);

                    /**
                     * 判断参数 RRInterval 是否已赋值
                     * @return RRInterval 是否已赋值
                     */
                    bool RRIntervalHasBeenSet() const;

                    /**
                     * 获取P-J间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PJInterval P-J间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetPJInterval() const;

                    /**
                     * 设置P-J间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PJInterval P-J间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPJInterval(const EcgItem& _pJInterval);

                    /**
                     * 判断参数 PJInterval 是否已赋值
                     * @return PJInterval 是否已赋值
                     */
                    bool PJIntervalHasBeenSet() const;

                    /**
                     * 获取Q-T间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QTInterval Q-T间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetQTInterval() const;

                    /**
                     * 设置Q-T间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QTInterval Q-T间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQTInterval(const EcgItem& _qTInterval);

                    /**
                     * 判断参数 QTInterval 是否已赋值
                     * @return QTInterval 是否已赋值
                     */
                    bool QTIntervalHasBeenSet() const;

                    /**
                     * 获取qt/qtc间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QTCInterval qt/qtc间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetQTCInterval() const;

                    /**
                     * 设置qt/qtc间期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param QTCInterval qt/qtc间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQTCInterval(const EcgItem& _qTCInterval);

                    /**
                     * 判断参数 QTCInterval 是否已赋值
                     * @return QTCInterval 是否已赋值
                     */
                    bool QTCIntervalHasBeenSet() const;

                    /**
                     * 获取RV5/SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rv5SV1Amplitude RV5/SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetRv5SV1Amplitude() const;

                    /**
                     * 设置RV5/SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Rv5SV1Amplitude RV5/SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRv5SV1Amplitude(const EcgItem& _rv5SV1Amplitude);

                    /**
                     * 判断参数 Rv5SV1Amplitude 是否已赋值
                     * @return Rv5SV1Amplitude 是否已赋值
                     */
                    bool Rv5SV1AmplitudeHasBeenSet() const;

                    /**
                     * 获取RV5+SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rv5AddSV1Amplitude RV5+SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetRv5AddSV1Amplitude() const;

                    /**
                     * 设置RV5+SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Rv5AddSV1Amplitude RV5+SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRv5AddSV1Amplitude(const EcgItem& _rv5AddSV1Amplitude);

                    /**
                     * 判断参数 Rv5AddSV1Amplitude 是否已赋值
                     * @return Rv5AddSV1Amplitude 是否已赋值
                     */
                    bool Rv5AddSV1AmplitudeHasBeenSet() const;

                    /**
                     * 获取PRT电轴
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PRTAxis PRT电轴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetPRTAxis() const;

                    /**
                     * 设置PRT电轴
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PRTAxis PRT电轴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPRTAxis(const EcgItem& _pRTAxis);

                    /**
                     * 判断参数 PRTAxis 是否已赋值
                     * @return PRTAxis 是否已赋值
                     */
                    bool PRTAxisHasBeenSet() const;

                    /**
                     * 获取RV5振幅
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rv5Amplitude RV5振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetRv5Amplitude() const;

                    /**
                     * 设置RV5振幅
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Rv5Amplitude RV5振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRv5Amplitude(const EcgItem& _rv5Amplitude);

                    /**
                     * 判断参数 Rv5Amplitude 是否已赋值
                     * @return Rv5Amplitude 是否已赋值
                     */
                    bool Rv5AmplitudeHasBeenSet() const;

                    /**
                     * 获取SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SV1Amplitude SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetSV1Amplitude() const;

                    /**
                     * 设置SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SV1Amplitude SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSV1Amplitude(const EcgItem& _sV1Amplitude);

                    /**
                     * 判断参数 SV1Amplitude 是否已赋值
                     * @return SV1Amplitude 是否已赋值
                     */
                    bool SV1AmplitudeHasBeenSet() const;

                    /**
                     * 获取RV6/SV2
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RV6SV2 RV6/SV2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetRV6SV2() const;

                    /**
                     * 设置RV6/SV2
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RV6SV2 RV6/SV2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRV6SV2(const EcgItem& _rV6SV2);

                    /**
                     * 判断参数 RV6SV2 是否已赋值
                     * @return RV6SV2 是否已赋值
                     */
                    bool RV6SV2HasBeenSet() const;

                    /**
                     * 获取P/QRS/T电轴
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PQRSTAxis P/QRS/T电轴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem GetPQRSTAxis() const;

                    /**
                     * 设置P/QRS/T电轴
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PQRSTAxis P/QRS/T电轴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPQRSTAxis(const EcgItem& _pQRSTAxis);

                    /**
                     * 判断参数 PQRSTAxis 是否已赋值
                     * @return PQRSTAxis 是否已赋值
                     */
                    bool PQRSTAxisHasBeenSet() const;

                private:

                    /**
                     * 心率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_heartRate;
                    bool m_heartRateHasBeenSet;

                    /**
                     * 心房率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_auricularRate;
                    bool m_auricularRateHasBeenSet;

                    /**
                     * 心室率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_ventricularRate;
                    bool m_ventricularRateHasBeenSet;

                    /**
                     * 节律
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_rhythm;
                    bool m_rhythmHasBeenSet;

                    /**
                     * P波时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_pDuration;
                    bool m_pDurationHasBeenSet;

                    /**
                     * QRS时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_qrsDuration;
                    bool m_qrsDurationHasBeenSet;

                    /**
                     * QRS电轴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_qrsAxis;
                    bool m_qrsAxisHasBeenSet;

                    /**
                     * P-R间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_pRInterval;
                    bool m_pRIntervalHasBeenSet;

                    /**
                     * P-P间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_pPInterval;
                    bool m_pPIntervalHasBeenSet;

                    /**
                     * R-R间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_rRInterval;
                    bool m_rRIntervalHasBeenSet;

                    /**
                     * P-J间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_pJInterval;
                    bool m_pJIntervalHasBeenSet;

                    /**
                     * Q-T间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_qTInterval;
                    bool m_qTIntervalHasBeenSet;

                    /**
                     * qt/qtc间期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_qTCInterval;
                    bool m_qTCIntervalHasBeenSet;

                    /**
                     * RV5/SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_rv5SV1Amplitude;
                    bool m_rv5SV1AmplitudeHasBeenSet;

                    /**
                     * RV5+SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_rv5AddSV1Amplitude;
                    bool m_rv5AddSV1AmplitudeHasBeenSet;

                    /**
                     * PRT电轴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_pRTAxis;
                    bool m_pRTAxisHasBeenSet;

                    /**
                     * RV5振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_rv5Amplitude;
                    bool m_rv5AmplitudeHasBeenSet;

                    /**
                     * SV1振幅
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_sV1Amplitude;
                    bool m_sV1AmplitudeHasBeenSet;

                    /**
                     * RV6/SV2
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_rV6SV2;
                    bool m_rV6SV2HasBeenSet;

                    /**
                     * P/QRS/T电轴
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EcgItem m_pQRSTAxis;
                    bool m_pQRSTAxisHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_ECGDESCRIPTION_H_
