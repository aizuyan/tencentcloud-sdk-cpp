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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_SKILLGROUPINFOITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_SKILLGROUPINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 技能组信息
                */
                class SkillGroupInfoItem : public AbstractModel
                {
                public:
                    SkillGroupInfoItem();
                    ~SkillGroupInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取技能组ID
                     * @return SkillGroupId 技能组ID
                     */
                    int64_t GetSkillGroupId() const;

                    /**
                     * 设置技能组ID
                     * @param SkillGroupId 技能组ID
                     */
                    void SetSkillGroupId(const int64_t& _skillGroupId);

                    /**
                     * 判断参数 SkillGroupId 是否已赋值
                     * @return SkillGroupId 是否已赋值
                     */
                    bool SkillGroupIdHasBeenSet() const;

                    /**
                     * 获取技能组名称
                     * @return SkillGroupName 技能组名称
                     */
                    std::string GetSkillGroupName() const;

                    /**
                     * 设置技能组名称
                     * @param SkillGroupName 技能组名称
                     */
                    void SetSkillGroupName(const std::string& _skillGroupName);

                    /**
                     * 判断参数 SkillGroupName 是否已赋值
                     * @return SkillGroupName 是否已赋值
                     */
                    bool SkillGroupNameHasBeenSet() const;

                    /**
                     * 获取（废弃）类型：IM、TEL、ALL（全媒体）
                     * @return Type （废弃）类型：IM、TEL、ALL（全媒体）
                     */
                    std::string GetType() const;

                    /**
                     * 设置（废弃）类型：IM、TEL、ALL（全媒体）
                     * @param Type （废弃）类型：IM、TEL、ALL（全媒体）
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取会话分配策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoutePolicy 会话分配策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRoutePolicy() const;

                    /**
                     * 设置会话分配策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RoutePolicy 会话分配策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRoutePolicy(const std::string& _routePolicy);

                    /**
                     * 判断参数 RoutePolicy 是否已赋值
                     * @return RoutePolicy 是否已赋值
                     */
                    bool RoutePolicyHasBeenSet() const;

                    /**
                     * 获取会话分配是否优先上次服务坐席
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsingLastSeat 会话分配是否优先上次服务坐席
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetUsingLastSeat() const;

                    /**
                     * 设置会话分配是否优先上次服务坐席
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UsingLastSeat 会话分配是否优先上次服务坐席
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUsingLastSeat(const int64_t& _usingLastSeat);

                    /**
                     * 判断参数 UsingLastSeat 是否已赋值
                     * @return UsingLastSeat 是否已赋值
                     */
                    bool UsingLastSeatHasBeenSet() const;

                    /**
                     * 获取单客服最大并发数（电话类型默认1）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxConcurrency 单客服最大并发数（电话类型默认1）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetMaxConcurrency() const;

                    /**
                     * 设置单客服最大并发数（电话类型默认1）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaxConcurrency 单客服最大并发数（电话类型默认1）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaxConcurrency(const int64_t& _maxConcurrency);

                    /**
                     * 判断参数 MaxConcurrency 是否已赋值
                     * @return MaxConcurrency 是否已赋值
                     */
                    bool MaxConcurrencyHasBeenSet() const;

                    /**
                     * 获取最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifyTimestamp 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLastModifyTimestamp() const;

                    /**
                     * 设置最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastModifyTimestamp 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastModifyTimestamp(const int64_t& _lastModifyTimestamp);

                    /**
                     * 判断参数 LastModifyTimestamp 是否已赋值
                     * @return LastModifyTimestamp 是否已赋值
                     */
                    bool LastModifyTimestampHasBeenSet() const;

                    /**
                     * 获取技能组类型0-电话，1-在线，3-音频，4-视频	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SkillGroupType 技能组类型0-电话，1-在线，3-音频，4-视频	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSkillGroupType() const;

                    /**
                     * 设置技能组类型0-电话，1-在线，3-音频，4-视频	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SkillGroupType 技能组类型0-电话，1-在线，3-音频，4-视频	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSkillGroupType(const int64_t& _skillGroupType);

                    /**
                     * 判断参数 SkillGroupType 是否已赋值
                     * @return SkillGroupType 是否已赋值
                     */
                    bool SkillGroupTypeHasBeenSet() const;

                private:

                    /**
                     * 技能组ID
                     */
                    int64_t m_skillGroupId;
                    bool m_skillGroupIdHasBeenSet;

                    /**
                     * 技能组名称
                     */
                    std::string m_skillGroupName;
                    bool m_skillGroupNameHasBeenSet;

                    /**
                     * （废弃）类型：IM、TEL、ALL（全媒体）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 会话分配策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_routePolicy;
                    bool m_routePolicyHasBeenSet;

                    /**
                     * 会话分配是否优先上次服务坐席
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_usingLastSeat;
                    bool m_usingLastSeatHasBeenSet;

                    /**
                     * 单客服最大并发数（电话类型默认1）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxConcurrency;
                    bool m_maxConcurrencyHasBeenSet;

                    /**
                     * 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lastModifyTimestamp;
                    bool m_lastModifyTimestampHasBeenSet;

                    /**
                     * 技能组类型0-电话，1-在线，3-音频，4-视频	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_skillGroupType;
                    bool m_skillGroupTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_SKILLGROUPINFOITEM_H_
