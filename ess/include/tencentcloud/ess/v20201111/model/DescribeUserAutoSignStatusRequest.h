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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEUSERAUTOSIGNSTATUSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEUSERAUTOSIGNSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>
#include <tencentcloud/ess/v20201111/model/UserThreeFactor.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeUserAutoSignStatus请求参数结构体
                */
                class DescribeUserAutoSignStatusRequest : public AbstractModel
                {
                public:
                    DescribeUserAutoSignStatusRequest();
                    ~DescribeUserAutoSignStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作人信息
                     * @return Operator 操作人信息
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置操作人信息
                     * @param Operator 操作人信息
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取自动签场景:
E_PRESCRIPTION_AUTO_SIGN 电子处方
                     * @return SceneKey 自动签场景:
E_PRESCRIPTION_AUTO_SIGN 电子处方
                     */
                    std::string GetSceneKey() const;

                    /**
                     * 设置自动签场景:
E_PRESCRIPTION_AUTO_SIGN 电子处方
                     * @param SceneKey 自动签场景:
E_PRESCRIPTION_AUTO_SIGN 电子处方
                     */
                    void SetSceneKey(const std::string& _sceneKey);

                    /**
                     * 判断参数 SceneKey 是否已赋值
                     * @return SceneKey 是否已赋值
                     */
                    bool SceneKeyHasBeenSet() const;

                    /**
                     * 获取查询开启状态的用户信息
                     * @return UserInfo 查询开启状态的用户信息
                     */
                    UserThreeFactor GetUserInfo() const;

                    /**
                     * 设置查询开启状态的用户信息
                     * @param UserInfo 查询开启状态的用户信息
                     */
                    void SetUserInfo(const UserThreeFactor& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     */
                    bool UserInfoHasBeenSet() const;

                private:

                    /**
                     * 操作人信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 自动签场景:
E_PRESCRIPTION_AUTO_SIGN 电子处方
                     */
                    std::string m_sceneKey;
                    bool m_sceneKeyHasBeenSet;

                    /**
                     * 查询开启状态的用户信息
                     */
                    UserThreeFactor m_userInfo;
                    bool m_userInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEUSERAUTOSIGNSTATUSREQUEST_H_
