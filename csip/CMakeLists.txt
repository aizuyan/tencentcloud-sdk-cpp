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

set(csip_public_header
  include/tencentcloud/csip/v20221121/CsipClient.h
  )

set(csip_public_header_model
  include/tencentcloud/csip/v20221121/model/DescribeDbAssetInfoResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeDbAssetsRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeScanReportListRequest.h
  include/tencentcloud/csip/v20221121/model/ScanTaskInfo.h
  include/tencentcloud/csip/v20221121/model/FilterDataObject.h
  include/tencentcloud/csip/v20221121/model/CVMAssetVO.h
  include/tencentcloud/csip/v20221121/model/DescribeScanReportListResponse.h
  include/tencentcloud/csip/v20221121/model/AddNewBindRoleUserRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeVpcAssetsResponse.h
  include/tencentcloud/csip/v20221121/model/Vpc.h
  include/tencentcloud/csip/v20221121/model/DescribeCVMAssetsRequest.h
  include/tencentcloud/csip/v20221121/model/DBAssetVO.h
  include/tencentcloud/csip/v20221121/model/SubnetAsset.h
  include/tencentcloud/csip/v20221121/model/Tag.h
  include/tencentcloud/csip/v20221121/model/DescribeSubnetAssetsResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeDbAssetInfoRequest.h
  include/tencentcloud/csip/v20221121/model/DescribeVpcAssetsRequest.h
  include/tencentcloud/csip/v20221121/model/Filter.h
  include/tencentcloud/csip/v20221121/model/DbAssetInfo.h
  include/tencentcloud/csip/v20221121/model/DescribeSubnetAssetsRequest.h
  include/tencentcloud/csip/v20221121/model/AssetBaseInfoResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeCVMAssetsResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeDbAssetsResponse.h
  include/tencentcloud/csip/v20221121/model/AddNewBindRoleUserResponse.h
  include/tencentcloud/csip/v20221121/model/DescribeCVMAssetInfoRequest.h
  include/tencentcloud/csip/v20221121/model/WhereFilter.h
  )

set(csip_src
  src/v20221121/CsipClient.cpp
  src/v20221121/model/DescribeDbAssetInfoResponse.cpp
  src/v20221121/model/DescribeDbAssetsRequest.cpp
  src/v20221121/model/DescribeScanReportListRequest.cpp
  src/v20221121/model/ScanTaskInfo.cpp
  src/v20221121/model/FilterDataObject.cpp
  src/v20221121/model/CVMAssetVO.cpp
  src/v20221121/model/DescribeScanReportListResponse.cpp
  src/v20221121/model/AddNewBindRoleUserRequest.cpp
  src/v20221121/model/DescribeCVMAssetInfoResponse.cpp
  src/v20221121/model/DescribeVpcAssetsResponse.cpp
  src/v20221121/model/Vpc.cpp
  src/v20221121/model/DescribeCVMAssetsRequest.cpp
  src/v20221121/model/DBAssetVO.cpp
  src/v20221121/model/SubnetAsset.cpp
  src/v20221121/model/Tag.cpp
  src/v20221121/model/DescribeSubnetAssetsResponse.cpp
  src/v20221121/model/DescribeDbAssetInfoRequest.cpp
  src/v20221121/model/DescribeVpcAssetsRequest.cpp
  src/v20221121/model/Filter.cpp
  src/v20221121/model/DbAssetInfo.cpp
  src/v20221121/model/DescribeSubnetAssetsRequest.cpp
  src/v20221121/model/AssetBaseInfoResponse.cpp
  src/v20221121/model/DescribeCVMAssetsResponse.cpp
  src/v20221121/model/DescribeDbAssetsResponse.cpp
  src/v20221121/model/AddNewBindRoleUserResponse.cpp
  src/v20221121/model/DescribeCVMAssetInfoRequest.cpp
  src/v20221121/model/WhereFilter.cpp
  )

set(csip_include
    include/tencentcloud/csip
  )

add_library(csip ${LIB_TYPE}
  ${csip_public_header}
  ${csip_public_header_model}
  ${csip_src})

set_target_properties(csip
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}csip
  )

target_include_directories(csip
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(csip
  core)

#install(FILES ${csip_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/csip/v20221121)
#install(FILES ${csip_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/csip/v20221121/model)
install(DIRECTORY ${csip_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS csip
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
