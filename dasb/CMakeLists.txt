#
# Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#    http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(dasb_public_header
  include/tencentcloud/dasb/v20191018/DasbClient.h
  )

set(dasb_public_header_model
  include/tencentcloud/dasb/v20191018/model/ResetDeviceAccountPasswordResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeLoginEventRequest.h
  include/tencentcloud/dasb/v20191018/model/BindDeviceAccountPasswordRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteAclsRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteDeviceGroupsResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeDeviceGroupsResponse.h
  include/tencentcloud/dasb/v20191018/model/DeleteCmdTemplatesResponse.h
  include/tencentcloud/dasb/v20191018/model/DeleteDevicesResponse.h
  include/tencentcloud/dasb/v20191018/model/Department.h
  include/tencentcloud/dasb/v20191018/model/DeviceAccount.h
  include/tencentcloud/dasb/v20191018/model/BindDeviceAccountPasswordResponse.h
  include/tencentcloud/dasb/v20191018/model/ResetDeviceAccountPasswordRequest.h
  include/tencentcloud/dasb/v20191018/model/AddUserGroupMembersRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeDevicesResponse.h
  include/tencentcloud/dasb/v20191018/model/ResetUserResponse.h
  include/tencentcloud/dasb/v20191018/model/SessionCommand.h
  include/tencentcloud/dasb/v20191018/model/DeleteUserGroupMembersRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteAclsResponse.h
  include/tencentcloud/dasb/v20191018/model/DeleteUserGroupsResponse.h
  include/tencentcloud/dasb/v20191018/model/ModifyDeviceRequest.h
  include/tencentcloud/dasb/v20191018/model/SearchFileRequest.h
  include/tencentcloud/dasb/v20191018/model/SearchFileBySidResult.h
  include/tencentcloud/dasb/v20191018/model/SearchCommandRequest.h
  include/tencentcloud/dasb/v20191018/model/ImportExternalDeviceRequest.h
  include/tencentcloud/dasb/v20191018/model/SearchSessionRequest.h
  include/tencentcloud/dasb/v20191018/model/BindDeviceResourceResponse.h
  include/tencentcloud/dasb/v20191018/model/DeleteUserGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/CmdTemplate.h
  include/tencentcloud/dasb/v20191018/model/SearchCommandResult.h
  include/tencentcloud/dasb/v20191018/model/TagFilter.h
  include/tencentcloud/dasb/v20191018/model/CreateUserGroupRequest.h
  include/tencentcloud/dasb/v20191018/model/SearchFileTypeFilter.h
  include/tencentcloud/dasb/v20191018/model/BindDeviceAccountPrivateKeyResponse.h
  include/tencentcloud/dasb/v20191018/model/SearchCommandBySidRequest.h
  include/tencentcloud/dasb/v20191018/model/CreateDeviceGroupResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeUserGroupMembersRequest.h
  include/tencentcloud/dasb/v20191018/model/OperationEvent.h
  include/tencentcloud/dasb/v20191018/model/SessionResult.h
  include/tencentcloud/dasb/v20191018/model/CreateUserResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeAssetSyncStatusResponse.h
  include/tencentcloud/dasb/v20191018/model/CreateAclRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeLoginEventResponse.h
  include/tencentcloud/dasb/v20191018/model/DeleteDeviceGroupMembersRequest.h
  include/tencentcloud/dasb/v20191018/model/CreateDeviceGroupRequest.h
  include/tencentcloud/dasb/v20191018/model/CreateAclResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeAclsResponse.h
  include/tencentcloud/dasb/v20191018/model/CreateCmdTemplateResponse.h
  include/tencentcloud/dasb/v20191018/model/Command.h
  include/tencentcloud/dasb/v20191018/model/ModifyAclRequest.h
  include/tencentcloud/dasb/v20191018/model/SearchAuditLogRequest.h
  include/tencentcloud/dasb/v20191018/model/SearchCommandResponse.h
  include/tencentcloud/dasb/v20191018/model/DeleteUsersResponse.h
  include/tencentcloud/dasb/v20191018/model/SearchCommandBySidResponse.h
  include/tencentcloud/dasb/v20191018/model/AssetSyncStatus.h
  include/tencentcloud/dasb/v20191018/model/DescribeResourcesResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeUsersRequest.h
  include/tencentcloud/dasb/v20191018/model/DeployResourceRequest.h
  include/tencentcloud/dasb/v20191018/model/SearchSessionResponse.h
  include/tencentcloud/dasb/v20191018/model/CreateCmdTemplateRequest.h
  include/tencentcloud/dasb/v20191018/model/AuditLogResult.h
  include/tencentcloud/dasb/v20191018/model/ResetDeviceAccountPrivateKeyRequest.h
  include/tencentcloud/dasb/v20191018/model/CreateAssetSyncJobResponse.h
  include/tencentcloud/dasb/v20191018/model/BindDeviceAccountPrivateKeyRequest.h
  include/tencentcloud/dasb/v20191018/model/CreateAssetSyncJobRequest.h
  include/tencentcloud/dasb/v20191018/model/Group.h
  include/tencentcloud/dasb/v20191018/model/DescribeAssetSyncStatusRequest.h
  include/tencentcloud/dasb/v20191018/model/ResetDeviceAccountPrivateKeyResponse.h
  include/tencentcloud/dasb/v20191018/model/DeleteUsersRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteDeviceAccountsRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteDeviceGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/ModifyDeviceGroupResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeUserGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/ImportExternalDeviceResponse.h
  include/tencentcloud/dasb/v20191018/model/SearchSessionCommandResponse.h
  include/tencentcloud/dasb/v20191018/model/DeleteUserGroupsRequest.h
  include/tencentcloud/dasb/v20191018/model/User.h
  include/tencentcloud/dasb/v20191018/model/ResetUserRequest.h
  include/tencentcloud/dasb/v20191018/model/Device.h
  include/tencentcloud/dasb/v20191018/model/DescribeDasbImageIdsRequest.h
  include/tencentcloud/dasb/v20191018/model/CreateDeviceAccountResponse.h
  include/tencentcloud/dasb/v20191018/model/ModifyDeviceGroupRequest.h
  include/tencentcloud/dasb/v20191018/model/Filter.h
  include/tencentcloud/dasb/v20191018/model/DescribeUsersResponse.h
  include/tencentcloud/dasb/v20191018/model/DeployResourceResponse.h
  include/tencentcloud/dasb/v20191018/model/CreateUserRequest.h
  include/tencentcloud/dasb/v20191018/model/SearchFileBySidResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeOperationEventRequest.h
  include/tencentcloud/dasb/v20191018/model/ModifyDeviceResponse.h
  include/tencentcloud/dasb/v20191018/model/ModifyUserResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeCmdTemplatesResponse.h
  include/tencentcloud/dasb/v20191018/model/CreateDeviceAccountRequest.h
  include/tencentcloud/dasb/v20191018/model/AddDeviceGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/DeleteCmdTemplatesRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeUserGroupsResponse.h
  include/tencentcloud/dasb/v20191018/model/AddUserGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeDeviceAccountsRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeDasbImageIdsResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeCmdTemplatesRequest.h
  include/tencentcloud/dasb/v20191018/model/LoginEvent.h
  include/tencentcloud/dasb/v20191018/model/CreateUserGroupResponse.h
  include/tencentcloud/dasb/v20191018/model/DeleteDevicesRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeDeviceAccountsResponse.h
  include/tencentcloud/dasb/v20191018/model/ModifyUserRequest.h
  include/tencentcloud/dasb/v20191018/model/ModifyAclResponse.h
  include/tencentcloud/dasb/v20191018/model/DescribeResourcesRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteDeviceGroupsRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeDeviceGroupMembersResponse.h
  include/tencentcloud/dasb/v20191018/model/SearchAuditLogResponse.h
  include/tencentcloud/dasb/v20191018/model/Resource.h
  include/tencentcloud/dasb/v20191018/model/BindDeviceResourceRequest.h
  include/tencentcloud/dasb/v20191018/model/Acl.h
  include/tencentcloud/dasb/v20191018/model/DescribeDevicesRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeDeviceGroupsRequest.h
  include/tencentcloud/dasb/v20191018/model/SearchSessionCommandRequest.h
  include/tencentcloud/dasb/v20191018/model/SearchFileBySidRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeOperationEventResponse.h
  include/tencentcloud/dasb/v20191018/model/ExternalDevice.h
  include/tencentcloud/dasb/v20191018/model/SearchFileResult.h
  include/tencentcloud/dasb/v20191018/model/DescribeUserGroupsRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeDeviceGroupMembersRequest.h
  include/tencentcloud/dasb/v20191018/model/DescribeAclsRequest.h
  include/tencentcloud/dasb/v20191018/model/AddDeviceGroupMembersRequest.h
  include/tencentcloud/dasb/v20191018/model/DeleteDeviceAccountsResponse.h
  include/tencentcloud/dasb/v20191018/model/SearchFileResponse.h
  )

set(dasb_src
  src/v20191018/DasbClient.cpp
  src/v20191018/model/ResetDeviceAccountPasswordResponse.cpp
  src/v20191018/model/DescribeLoginEventRequest.cpp
  src/v20191018/model/BindDeviceAccountPasswordRequest.cpp
  src/v20191018/model/DeleteAclsRequest.cpp
  src/v20191018/model/DeleteDeviceGroupsResponse.cpp
  src/v20191018/model/DescribeDeviceGroupsResponse.cpp
  src/v20191018/model/DeleteCmdTemplatesResponse.cpp
  src/v20191018/model/DeleteDevicesResponse.cpp
  src/v20191018/model/Department.cpp
  src/v20191018/model/DeviceAccount.cpp
  src/v20191018/model/BindDeviceAccountPasswordResponse.cpp
  src/v20191018/model/ResetDeviceAccountPasswordRequest.cpp
  src/v20191018/model/AddUserGroupMembersRequest.cpp
  src/v20191018/model/DescribeDevicesResponse.cpp
  src/v20191018/model/ResetUserResponse.cpp
  src/v20191018/model/SessionCommand.cpp
  src/v20191018/model/DeleteUserGroupMembersRequest.cpp
  src/v20191018/model/DeleteAclsResponse.cpp
  src/v20191018/model/DeleteUserGroupsResponse.cpp
  src/v20191018/model/ModifyDeviceRequest.cpp
  src/v20191018/model/SearchFileRequest.cpp
  src/v20191018/model/SearchFileBySidResult.cpp
  src/v20191018/model/SearchCommandRequest.cpp
  src/v20191018/model/ImportExternalDeviceRequest.cpp
  src/v20191018/model/SearchSessionRequest.cpp
  src/v20191018/model/BindDeviceResourceResponse.cpp
  src/v20191018/model/DeleteUserGroupMembersResponse.cpp
  src/v20191018/model/CmdTemplate.cpp
  src/v20191018/model/SearchCommandResult.cpp
  src/v20191018/model/TagFilter.cpp
  src/v20191018/model/CreateUserGroupRequest.cpp
  src/v20191018/model/SearchFileTypeFilter.cpp
  src/v20191018/model/BindDeviceAccountPrivateKeyResponse.cpp
  src/v20191018/model/SearchCommandBySidRequest.cpp
  src/v20191018/model/CreateDeviceGroupResponse.cpp
  src/v20191018/model/DescribeUserGroupMembersRequest.cpp
  src/v20191018/model/OperationEvent.cpp
  src/v20191018/model/SessionResult.cpp
  src/v20191018/model/CreateUserResponse.cpp
  src/v20191018/model/DescribeAssetSyncStatusResponse.cpp
  src/v20191018/model/CreateAclRequest.cpp
  src/v20191018/model/DescribeLoginEventResponse.cpp
  src/v20191018/model/DeleteDeviceGroupMembersRequest.cpp
  src/v20191018/model/CreateDeviceGroupRequest.cpp
  src/v20191018/model/CreateAclResponse.cpp
  src/v20191018/model/DescribeAclsResponse.cpp
  src/v20191018/model/CreateCmdTemplateResponse.cpp
  src/v20191018/model/Command.cpp
  src/v20191018/model/ModifyAclRequest.cpp
  src/v20191018/model/SearchAuditLogRequest.cpp
  src/v20191018/model/SearchCommandResponse.cpp
  src/v20191018/model/DeleteUsersResponse.cpp
  src/v20191018/model/SearchCommandBySidResponse.cpp
  src/v20191018/model/AssetSyncStatus.cpp
  src/v20191018/model/DescribeResourcesResponse.cpp
  src/v20191018/model/DescribeUsersRequest.cpp
  src/v20191018/model/DeployResourceRequest.cpp
  src/v20191018/model/SearchSessionResponse.cpp
  src/v20191018/model/CreateCmdTemplateRequest.cpp
  src/v20191018/model/AuditLogResult.cpp
  src/v20191018/model/ResetDeviceAccountPrivateKeyRequest.cpp
  src/v20191018/model/CreateAssetSyncJobResponse.cpp
  src/v20191018/model/BindDeviceAccountPrivateKeyRequest.cpp
  src/v20191018/model/CreateAssetSyncJobRequest.cpp
  src/v20191018/model/Group.cpp
  src/v20191018/model/DescribeAssetSyncStatusRequest.cpp
  src/v20191018/model/ResetDeviceAccountPrivateKeyResponse.cpp
  src/v20191018/model/DeleteUsersRequest.cpp
  src/v20191018/model/DeleteDeviceAccountsRequest.cpp
  src/v20191018/model/DeleteDeviceGroupMembersResponse.cpp
  src/v20191018/model/ModifyDeviceGroupResponse.cpp
  src/v20191018/model/DescribeUserGroupMembersResponse.cpp
  src/v20191018/model/ImportExternalDeviceResponse.cpp
  src/v20191018/model/SearchSessionCommandResponse.cpp
  src/v20191018/model/DeleteUserGroupsRequest.cpp
  src/v20191018/model/User.cpp
  src/v20191018/model/ResetUserRequest.cpp
  src/v20191018/model/Device.cpp
  src/v20191018/model/DescribeDasbImageIdsRequest.cpp
  src/v20191018/model/CreateDeviceAccountResponse.cpp
  src/v20191018/model/ModifyDeviceGroupRequest.cpp
  src/v20191018/model/Filter.cpp
  src/v20191018/model/DescribeUsersResponse.cpp
  src/v20191018/model/DeployResourceResponse.cpp
  src/v20191018/model/CreateUserRequest.cpp
  src/v20191018/model/SearchFileBySidResponse.cpp
  src/v20191018/model/DescribeOperationEventRequest.cpp
  src/v20191018/model/ModifyDeviceResponse.cpp
  src/v20191018/model/ModifyUserResponse.cpp
  src/v20191018/model/DescribeCmdTemplatesResponse.cpp
  src/v20191018/model/CreateDeviceAccountRequest.cpp
  src/v20191018/model/AddDeviceGroupMembersResponse.cpp
  src/v20191018/model/DeleteCmdTemplatesRequest.cpp
  src/v20191018/model/DescribeUserGroupsResponse.cpp
  src/v20191018/model/AddUserGroupMembersResponse.cpp
  src/v20191018/model/DescribeDeviceAccountsRequest.cpp
  src/v20191018/model/DescribeDasbImageIdsResponse.cpp
  src/v20191018/model/DescribeCmdTemplatesRequest.cpp
  src/v20191018/model/LoginEvent.cpp
  src/v20191018/model/CreateUserGroupResponse.cpp
  src/v20191018/model/DeleteDevicesRequest.cpp
  src/v20191018/model/DescribeDeviceAccountsResponse.cpp
  src/v20191018/model/ModifyUserRequest.cpp
  src/v20191018/model/ModifyAclResponse.cpp
  src/v20191018/model/DescribeResourcesRequest.cpp
  src/v20191018/model/DeleteDeviceGroupsRequest.cpp
  src/v20191018/model/DescribeDeviceGroupMembersResponse.cpp
  src/v20191018/model/SearchAuditLogResponse.cpp
  src/v20191018/model/Resource.cpp
  src/v20191018/model/BindDeviceResourceRequest.cpp
  src/v20191018/model/Acl.cpp
  src/v20191018/model/DescribeDevicesRequest.cpp
  src/v20191018/model/DescribeDeviceGroupsRequest.cpp
  src/v20191018/model/SearchSessionCommandRequest.cpp
  src/v20191018/model/SearchFileBySidRequest.cpp
  src/v20191018/model/DescribeOperationEventResponse.cpp
  src/v20191018/model/ExternalDevice.cpp
  src/v20191018/model/SearchFileResult.cpp
  src/v20191018/model/DescribeUserGroupsRequest.cpp
  src/v20191018/model/DescribeDeviceGroupMembersRequest.cpp
  src/v20191018/model/DescribeAclsRequest.cpp
  src/v20191018/model/AddDeviceGroupMembersRequest.cpp
  src/v20191018/model/DeleteDeviceAccountsResponse.cpp
  src/v20191018/model/SearchFileResponse.cpp
  )

set(dasb_include
    include/tencentcloud/dasb
  )

add_library(dasb ${LIB_TYPE}
  ${dasb_public_header}
  ${dasb_public_header_model}
  ${dasb_src})

set_target_properties(dasb
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}dasb
  )

target_include_directories(dasb
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(dasb
  core)

#install(FILES ${dasb_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dasb/v20191018)
#install(FILES ${dasb_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/dasb/v20191018/model)
install(DIRECTORY ${dasb_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS dasb
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
