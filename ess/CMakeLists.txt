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

set(ess_public_header
  include/tencentcloud/ess/v20201111/EssClient.h
  )

set(ess_public_header_model
  include/tencentcloud/ess/v20201111/model/CancelFlowResponse.h
  include/tencentcloud/ess/v20201111/model/DescribeFlowEvidenceReportRequest.h
  include/tencentcloud/ess/v20201111/model/UpdateIntegrationEmployeesResponse.h
  include/tencentcloud/ess/v20201111/model/Department.h
  include/tencentcloud/ess/v20201111/model/CreatePreparedPersonalEsignRequest.h
  include/tencentcloud/ess/v20201111/model/FileInfo.h
  include/tencentcloud/ess/v20201111/model/CreateFlowApproversResponse.h
  include/tencentcloud/ess/v20201111/model/DescribeIntegrationMainOrganizationUserRequest.h
  include/tencentcloud/ess/v20201111/model/ModifyApplicationCallbackInfoResponse.h
  include/tencentcloud/ess/v20201111/model/CreateMultiFlowSignQRCodeResponse.h
  include/tencentcloud/ess/v20201111/model/FlowCreateApprover.h
  include/tencentcloud/ess/v20201111/model/DescribeThirdPartyAuthCodeResponse.h
  include/tencentcloud/ess/v20201111/model/DisableUserAutoSignResponse.h
  include/tencentcloud/ess/v20201111/model/BindEmployeeUserIdWithClientOpenIdResponse.h
  include/tencentcloud/ess/v20201111/model/CreateIntegrationEmployeesRequest.h
  include/tencentcloud/ess/v20201111/model/CreateConvertTaskApiRequest.h
  include/tencentcloud/ess/v20201111/model/CreateFlowEvidenceReportRequest.h
  include/tencentcloud/ess/v20201111/model/StartFlowResponse.h
  include/tencentcloud/ess/v20201111/model/StaffRole.h
  include/tencentcloud/ess/v20201111/model/FlowApproverUrlInfo.h
  include/tencentcloud/ess/v20201111/model/AuthorizedUser.h
  include/tencentcloud/ess/v20201111/model/DescribeIntegrationRolesRequest.h
  include/tencentcloud/ess/v20201111/model/CreateFlowRemindsResponse.h
  include/tencentcloud/ess/v20201111/model/DescribeOrganizationGroupOrganizationsRequest.h
  include/tencentcloud/ess/v20201111/model/Agent.h
  include/tencentcloud/ess/v20201111/model/FlowApproverDetail.h
  include/tencentcloud/ess/v20201111/model/DescribeFlowTemplatesRequest.h
  include/tencentcloud/ess/v20201111/model/DescribeFlowEvidenceReportResponse.h
  include/tencentcloud/ess/v20201111/model/CallbackInfo.h
  include/tencentcloud/ess/v20201111/model/TemplateInfo.h
  include/tencentcloud/ess/v20201111/model/CreateDocumentResponse.h
  include/tencentcloud/ess/v20201111/model/DescribeIntegrationEmployeesRequest.h
  include/tencentcloud/ess/v20201111/model/CreateIntegrationUserRolesResponse.h
  include/tencentcloud/ess/v20201111/model/CreateFlowRequest.h
  include/tencentcloud/ess/v20201111/model/CreateSchemeUrlRequest.h
  include/tencentcloud/ess/v20201111/model/AutoSignConfig.h
  include/tencentcloud/ess/v20201111/model/DescribeThirdPartyAuthCodeRequest.h
  include/tencentcloud/ess/v20201111/model/UnbindEmployeeUserIdWithClientOpenIdResponse.h
  include/tencentcloud/ess/v20201111/model/CreateReleaseFlowResponse.h
  include/tencentcloud/ess/v20201111/model/BindEmployeeUserIdWithClientOpenIdRequest.h
  include/tencentcloud/ess/v20201111/model/DeleteSealPoliciesResponse.h
  include/tencentcloud/ess/v20201111/model/OrganizationInfo.h
  include/tencentcloud/ess/v20201111/model/DescribeUserAutoSignStatusResponse.h
  include/tencentcloud/ess/v20201111/model/FillApproverInfo.h
  include/tencentcloud/ess/v20201111/model/OccupiedSeal.h
  include/tencentcloud/ess/v20201111/model/FailedDeleteStaffData.h
  include/tencentcloud/ess/v20201111/model/PdfVerifyResult.h
  include/tencentcloud/ess/v20201111/model/CreateBatchCancelFlowUrlResponse.h
  include/tencentcloud/ess/v20201111/model/UserThreeFactor.h
  include/tencentcloud/ess/v20201111/model/SignQrCode.h
  include/tencentcloud/ess/v20201111/model/CreateSealPolicyResponse.h
  include/tencentcloud/ess/v20201111/model/DisableUserAutoSignRequest.h
  include/tencentcloud/ess/v20201111/model/DescribeIntegrationEmployeesResponse.h
  include/tencentcloud/ess/v20201111/model/SuccessDeleteStaffData.h
  include/tencentcloud/ess/v20201111/model/CreateConvertTaskApiResponse.h
  include/tencentcloud/ess/v20201111/model/CreateFlowSignReviewRequest.h
  include/tencentcloud/ess/v20201111/model/UnbindEmployeeUserIdWithClientOpenIdRequest.h
  include/tencentcloud/ess/v20201111/model/CreateSchemeUrlResponse.h
  include/tencentcloud/ess/v20201111/model/CreateUserAutoSignEnableUrlResponse.h
  include/tencentcloud/ess/v20201111/model/CreateFlowSignUrlResponse.h
  include/tencentcloud/ess/v20201111/model/DescribeFileUrlsRequest.h
  include/tencentcloud/ess/v20201111/model/FormField.h
  include/tencentcloud/ess/v20201111/model/CreateChannelSubOrganizationModifyQrCodeRequest.h
  include/tencentcloud/ess/v20201111/model/UserInfo.h
  include/tencentcloud/ess/v20201111/model/CreateFlowApproversRequest.h
  include/tencentcloud/ess/v20201111/model/Staff.h
  include/tencentcloud/ess/v20201111/model/CreateFlowEvidenceReportResponse.h
  include/tencentcloud/ess/v20201111/model/DescribeFileUrlsResponse.h
  include/tencentcloud/ess/v20201111/model/GroupOrganization.h
  include/tencentcloud/ess/v20201111/model/DeleteIntegrationRoleUsersResponse.h
  include/tencentcloud/ess/v20201111/model/CreateDocumentRequest.h
  include/tencentcloud/ess/v20201111/model/FlowDetailInfo.h
  include/tencentcloud/ess/v20201111/model/CreatePreparedPersonalEsignResponse.h
  include/tencentcloud/ess/v20201111/model/DescribeOrganizationSealsResponse.h
  include/tencentcloud/ess/v20201111/model/DeleteIntegrationEmployeesRequest.h
  include/tencentcloud/ess/v20201111/model/FailedUpdateStaffData.h
  include/tencentcloud/ess/v20201111/model/GetTaskResultApiRequest.h
  include/tencentcloud/ess/v20201111/model/RegisterInfo.h
  include/tencentcloud/ess/v20201111/model/CreateIntegrationEmployeesResponse.h
  include/tencentcloud/ess/v20201111/model/DeleteIntegrationRoleUsersRequest.h
  include/tencentcloud/ess/v20201111/model/CreateFlowSignUrlRequest.h
  include/tencentcloud/ess/v20201111/model/CreateReleaseFlowRequest.h
  include/tencentcloud/ess/v20201111/model/CreateIntegrationUserRolesRequest.h
  include/tencentcloud/ess/v20201111/model/CreateChannelSubOrganizationModifyQrCodeResponse.h
  include/tencentcloud/ess/v20201111/model/SuccessUpdateStaffData.h
  include/tencentcloud/ess/v20201111/model/CreateFlowByFilesResponse.h
  include/tencentcloud/ess/v20201111/model/UploadFilesResponse.h
  include/tencentcloud/ess/v20201111/model/SuccessCreateStaffData.h
  include/tencentcloud/ess/v20201111/model/Recipient.h
  include/tencentcloud/ess/v20201111/model/VerifyPdfRequest.h
  include/tencentcloud/ess/v20201111/model/FailedCreateRoleData.h
  include/tencentcloud/ess/v20201111/model/ApproverInfo.h
  include/tencentcloud/ess/v20201111/model/CreateFlowSignReviewResponse.h
  include/tencentcloud/ess/v20201111/model/Filter.h
  include/tencentcloud/ess/v20201111/model/CreateStaffResult.h
  include/tencentcloud/ess/v20201111/model/CreateUserAutoSignEnableUrlRequest.h
  include/tencentcloud/ess/v20201111/model/DescribeIntegrationMainOrganizationUserResponse.h
  include/tencentcloud/ess/v20201111/model/RemindFlowRecords.h
  include/tencentcloud/ess/v20201111/model/FailedCreateStaffData.h
  include/tencentcloud/ess/v20201111/model/ApproverRestriction.h
  include/tencentcloud/ess/v20201111/model/DeleteSealPoliciesRequest.h
  include/tencentcloud/ess/v20201111/model/CreateFlowByFilesRequest.h
  include/tencentcloud/ess/v20201111/model/IntegrateRole.h
  include/tencentcloud/ess/v20201111/model/CreatePrepareFlowResponse.h
  include/tencentcloud/ess/v20201111/model/GetTaskResultApiResponse.h
  include/tencentcloud/ess/v20201111/model/CancelMultiFlowSignQRCodeRequest.h
  include/tencentcloud/ess/v20201111/model/ModifyApplicationCallbackInfoRequest.h
  include/tencentcloud/ess/v20201111/model/IntegrationMainOrganizationUser.h
  include/tencentcloud/ess/v20201111/model/StartFlowRequest.h
  include/tencentcloud/ess/v20201111/model/CreatePrepareFlowRequest.h
  include/tencentcloud/ess/v20201111/model/ApproverOption.h
  include/tencentcloud/ess/v20201111/model/FileUrl.h
  include/tencentcloud/ess/v20201111/model/CreateSealPolicyRequest.h
  include/tencentcloud/ess/v20201111/model/DescribeOrganizationSealsRequest.h
  include/tencentcloud/ess/v20201111/model/CancelFlowRequest.h
  include/tencentcloud/ess/v20201111/model/UploadFile.h
  include/tencentcloud/ess/v20201111/model/Component.h
  include/tencentcloud/ess/v20201111/model/DescribeIntegrationRolesResponse.h
  include/tencentcloud/ess/v20201111/model/CreateFlowRemindsRequest.h
  include/tencentcloud/ess/v20201111/model/UpdateIntegrationEmployeesRequest.h
  include/tencentcloud/ess/v20201111/model/DescribeFlowBriefsRequest.h
  include/tencentcloud/ess/v20201111/model/DeleteIntegrationEmployeesResponse.h
  include/tencentcloud/ess/v20201111/model/SignUrl.h
  include/tencentcloud/ess/v20201111/model/VerifyPdfResponse.h
  include/tencentcloud/ess/v20201111/model/DeleteStaffsResult.h
  include/tencentcloud/ess/v20201111/model/DescribeFlowBriefsResponse.h
  include/tencentcloud/ess/v20201111/model/Admin.h
  include/tencentcloud/ess/v20201111/model/Caller.h
  include/tencentcloud/ess/v20201111/model/DescribeFlowTemplatesResponse.h
  include/tencentcloud/ess/v20201111/model/UploadFilesRequest.h
  include/tencentcloud/ess/v20201111/model/RelieveInfo.h
  include/tencentcloud/ess/v20201111/model/CreateBatchCancelFlowUrlRequest.h
  include/tencentcloud/ess/v20201111/model/CreateMultiFlowSignQRCodeRequest.h
  include/tencentcloud/ess/v20201111/model/DescribeFlowInfoRequest.h
  include/tencentcloud/ess/v20201111/model/DescribeFlowInfoResponse.h
  include/tencentcloud/ess/v20201111/model/CcInfo.h
  include/tencentcloud/ess/v20201111/model/CreateFlowResponse.h
  include/tencentcloud/ess/v20201111/model/DescribeUserAutoSignStatusRequest.h
  include/tencentcloud/ess/v20201111/model/ReleasedApprover.h
  include/tencentcloud/ess/v20201111/model/FlowBrief.h
  include/tencentcloud/ess/v20201111/model/DescribeOrganizationGroupOrganizationsResponse.h
  include/tencentcloud/ess/v20201111/model/CancelMultiFlowSignQRCodeResponse.h
  )

set(ess_src
  src/v20201111/EssClient.cpp
  src/v20201111/model/CancelFlowResponse.cpp
  src/v20201111/model/DescribeFlowEvidenceReportRequest.cpp
  src/v20201111/model/UpdateIntegrationEmployeesResponse.cpp
  src/v20201111/model/Department.cpp
  src/v20201111/model/CreatePreparedPersonalEsignRequest.cpp
  src/v20201111/model/FileInfo.cpp
  src/v20201111/model/CreateFlowApproversResponse.cpp
  src/v20201111/model/DescribeIntegrationMainOrganizationUserRequest.cpp
  src/v20201111/model/ModifyApplicationCallbackInfoResponse.cpp
  src/v20201111/model/CreateMultiFlowSignQRCodeResponse.cpp
  src/v20201111/model/FlowCreateApprover.cpp
  src/v20201111/model/DescribeThirdPartyAuthCodeResponse.cpp
  src/v20201111/model/DisableUserAutoSignResponse.cpp
  src/v20201111/model/BindEmployeeUserIdWithClientOpenIdResponse.cpp
  src/v20201111/model/CreateIntegrationEmployeesRequest.cpp
  src/v20201111/model/CreateConvertTaskApiRequest.cpp
  src/v20201111/model/CreateFlowEvidenceReportRequest.cpp
  src/v20201111/model/StartFlowResponse.cpp
  src/v20201111/model/StaffRole.cpp
  src/v20201111/model/FlowApproverUrlInfo.cpp
  src/v20201111/model/AuthorizedUser.cpp
  src/v20201111/model/DescribeIntegrationRolesRequest.cpp
  src/v20201111/model/CreateFlowRemindsResponse.cpp
  src/v20201111/model/DescribeOrganizationGroupOrganizationsRequest.cpp
  src/v20201111/model/Agent.cpp
  src/v20201111/model/FlowApproverDetail.cpp
  src/v20201111/model/DescribeFlowTemplatesRequest.cpp
  src/v20201111/model/DescribeFlowEvidenceReportResponse.cpp
  src/v20201111/model/CallbackInfo.cpp
  src/v20201111/model/TemplateInfo.cpp
  src/v20201111/model/CreateDocumentResponse.cpp
  src/v20201111/model/DescribeIntegrationEmployeesRequest.cpp
  src/v20201111/model/CreateIntegrationUserRolesResponse.cpp
  src/v20201111/model/CreateFlowRequest.cpp
  src/v20201111/model/CreateSchemeUrlRequest.cpp
  src/v20201111/model/AutoSignConfig.cpp
  src/v20201111/model/DescribeThirdPartyAuthCodeRequest.cpp
  src/v20201111/model/UnbindEmployeeUserIdWithClientOpenIdResponse.cpp
  src/v20201111/model/CreateReleaseFlowResponse.cpp
  src/v20201111/model/BindEmployeeUserIdWithClientOpenIdRequest.cpp
  src/v20201111/model/DeleteSealPoliciesResponse.cpp
  src/v20201111/model/OrganizationInfo.cpp
  src/v20201111/model/DescribeUserAutoSignStatusResponse.cpp
  src/v20201111/model/FillApproverInfo.cpp
  src/v20201111/model/OccupiedSeal.cpp
  src/v20201111/model/FailedDeleteStaffData.cpp
  src/v20201111/model/PdfVerifyResult.cpp
  src/v20201111/model/CreateBatchCancelFlowUrlResponse.cpp
  src/v20201111/model/UserThreeFactor.cpp
  src/v20201111/model/SignQrCode.cpp
  src/v20201111/model/CreateSealPolicyResponse.cpp
  src/v20201111/model/DisableUserAutoSignRequest.cpp
  src/v20201111/model/DescribeIntegrationEmployeesResponse.cpp
  src/v20201111/model/SuccessDeleteStaffData.cpp
  src/v20201111/model/CreateConvertTaskApiResponse.cpp
  src/v20201111/model/CreateFlowSignReviewRequest.cpp
  src/v20201111/model/UnbindEmployeeUserIdWithClientOpenIdRequest.cpp
  src/v20201111/model/CreateSchemeUrlResponse.cpp
  src/v20201111/model/CreateUserAutoSignEnableUrlResponse.cpp
  src/v20201111/model/CreateFlowSignUrlResponse.cpp
  src/v20201111/model/DescribeFileUrlsRequest.cpp
  src/v20201111/model/FormField.cpp
  src/v20201111/model/CreateChannelSubOrganizationModifyQrCodeRequest.cpp
  src/v20201111/model/UserInfo.cpp
  src/v20201111/model/CreateFlowApproversRequest.cpp
  src/v20201111/model/Staff.cpp
  src/v20201111/model/CreateFlowEvidenceReportResponse.cpp
  src/v20201111/model/DescribeFileUrlsResponse.cpp
  src/v20201111/model/GroupOrganization.cpp
  src/v20201111/model/DeleteIntegrationRoleUsersResponse.cpp
  src/v20201111/model/CreateDocumentRequest.cpp
  src/v20201111/model/FlowDetailInfo.cpp
  src/v20201111/model/CreatePreparedPersonalEsignResponse.cpp
  src/v20201111/model/DescribeOrganizationSealsResponse.cpp
  src/v20201111/model/DeleteIntegrationEmployeesRequest.cpp
  src/v20201111/model/FailedUpdateStaffData.cpp
  src/v20201111/model/GetTaskResultApiRequest.cpp
  src/v20201111/model/RegisterInfo.cpp
  src/v20201111/model/CreateIntegrationEmployeesResponse.cpp
  src/v20201111/model/DeleteIntegrationRoleUsersRequest.cpp
  src/v20201111/model/CreateFlowSignUrlRequest.cpp
  src/v20201111/model/CreateReleaseFlowRequest.cpp
  src/v20201111/model/CreateIntegrationUserRolesRequest.cpp
  src/v20201111/model/CreateChannelSubOrganizationModifyQrCodeResponse.cpp
  src/v20201111/model/SuccessUpdateStaffData.cpp
  src/v20201111/model/CreateFlowByFilesResponse.cpp
  src/v20201111/model/UploadFilesResponse.cpp
  src/v20201111/model/SuccessCreateStaffData.cpp
  src/v20201111/model/Recipient.cpp
  src/v20201111/model/VerifyPdfRequest.cpp
  src/v20201111/model/FailedCreateRoleData.cpp
  src/v20201111/model/ApproverInfo.cpp
  src/v20201111/model/CreateFlowSignReviewResponse.cpp
  src/v20201111/model/Filter.cpp
  src/v20201111/model/CreateStaffResult.cpp
  src/v20201111/model/CreateUserAutoSignEnableUrlRequest.cpp
  src/v20201111/model/DescribeIntegrationMainOrganizationUserResponse.cpp
  src/v20201111/model/RemindFlowRecords.cpp
  src/v20201111/model/FailedCreateStaffData.cpp
  src/v20201111/model/ApproverRestriction.cpp
  src/v20201111/model/DeleteSealPoliciesRequest.cpp
  src/v20201111/model/CreateFlowByFilesRequest.cpp
  src/v20201111/model/IntegrateRole.cpp
  src/v20201111/model/CreatePrepareFlowResponse.cpp
  src/v20201111/model/GetTaskResultApiResponse.cpp
  src/v20201111/model/CancelMultiFlowSignQRCodeRequest.cpp
  src/v20201111/model/ModifyApplicationCallbackInfoRequest.cpp
  src/v20201111/model/IntegrationMainOrganizationUser.cpp
  src/v20201111/model/StartFlowRequest.cpp
  src/v20201111/model/CreatePrepareFlowRequest.cpp
  src/v20201111/model/ApproverOption.cpp
  src/v20201111/model/FileUrl.cpp
  src/v20201111/model/CreateSealPolicyRequest.cpp
  src/v20201111/model/DescribeOrganizationSealsRequest.cpp
  src/v20201111/model/CancelFlowRequest.cpp
  src/v20201111/model/UploadFile.cpp
  src/v20201111/model/Component.cpp
  src/v20201111/model/DescribeIntegrationRolesResponse.cpp
  src/v20201111/model/CreateFlowRemindsRequest.cpp
  src/v20201111/model/UpdateIntegrationEmployeesRequest.cpp
  src/v20201111/model/DescribeFlowBriefsRequest.cpp
  src/v20201111/model/DeleteIntegrationEmployeesResponse.cpp
  src/v20201111/model/SignUrl.cpp
  src/v20201111/model/VerifyPdfResponse.cpp
  src/v20201111/model/DeleteStaffsResult.cpp
  src/v20201111/model/DescribeFlowBriefsResponse.cpp
  src/v20201111/model/Admin.cpp
  src/v20201111/model/Caller.cpp
  src/v20201111/model/DescribeFlowTemplatesResponse.cpp
  src/v20201111/model/UploadFilesRequest.cpp
  src/v20201111/model/RelieveInfo.cpp
  src/v20201111/model/CreateBatchCancelFlowUrlRequest.cpp
  src/v20201111/model/CreateMultiFlowSignQRCodeRequest.cpp
  src/v20201111/model/DescribeFlowInfoRequest.cpp
  src/v20201111/model/DescribeFlowInfoResponse.cpp
  src/v20201111/model/CcInfo.cpp
  src/v20201111/model/CreateFlowResponse.cpp
  src/v20201111/model/DescribeUserAutoSignStatusRequest.cpp
  src/v20201111/model/ReleasedApprover.cpp
  src/v20201111/model/FlowBrief.cpp
  src/v20201111/model/DescribeOrganizationGroupOrganizationsResponse.cpp
  src/v20201111/model/CancelMultiFlowSignQRCodeResponse.cpp
  )

set(ess_include
    include/tencentcloud/ess
  )

add_library(ess ${LIB_TYPE}
  ${ess_public_header}
  ${ess_public_header_model}
  ${ess_src})

set_target_properties(ess
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}ess
  )

target_include_directories(ess
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(ess
  core)

#install(FILES ${ess_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ess/v20201111)
#install(FILES ${ess_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/ess/v20201111/model)
install(DIRECTORY ${ess_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS ess
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
