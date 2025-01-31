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

set(vrs_public_header
  include/tencentcloud/vrs/v20200824/VrsClient.h
  )

set(vrs_public_header_model
  include/tencentcloud/vrs/v20200824/model/DescribeVRSTaskStatusResponse.h
  include/tencentcloud/vrs/v20200824/model/CreateVRSTaskResponse.h
  include/tencentcloud/vrs/v20200824/model/CreateVRSTaskRespData.h
  include/tencentcloud/vrs/v20200824/model/DetectionEnvAndSoundQualityRespData.h
  include/tencentcloud/vrs/v20200824/model/GetTrainingTextResponse.h
  include/tencentcloud/vrs/v20200824/model/DescribeVRSTaskStatusRequest.h
  include/tencentcloud/vrs/v20200824/model/DetectEnvAndSoundQualityRequest.h
  include/tencentcloud/vrs/v20200824/model/DescribeVRSTaskStatusRespData.h
  include/tencentcloud/vrs/v20200824/model/TrainingText.h
  include/tencentcloud/vrs/v20200824/model/Words.h
  include/tencentcloud/vrs/v20200824/model/TrainingTexts.h
  include/tencentcloud/vrs/v20200824/model/DetectEnvAndSoundQualityResponse.h
  include/tencentcloud/vrs/v20200824/model/GetTrainingTextRequest.h
  include/tencentcloud/vrs/v20200824/model/CreateVRSTaskRequest.h
  )

set(vrs_src
  src/v20200824/VrsClient.cpp
  src/v20200824/model/DescribeVRSTaskStatusResponse.cpp
  src/v20200824/model/CreateVRSTaskResponse.cpp
  src/v20200824/model/CreateVRSTaskRespData.cpp
  src/v20200824/model/DetectionEnvAndSoundQualityRespData.cpp
  src/v20200824/model/GetTrainingTextResponse.cpp
  src/v20200824/model/DescribeVRSTaskStatusRequest.cpp
  src/v20200824/model/DetectEnvAndSoundQualityRequest.cpp
  src/v20200824/model/DescribeVRSTaskStatusRespData.cpp
  src/v20200824/model/TrainingText.cpp
  src/v20200824/model/Words.cpp
  src/v20200824/model/TrainingTexts.cpp
  src/v20200824/model/DetectEnvAndSoundQualityResponse.cpp
  src/v20200824/model/GetTrainingTextRequest.cpp
  src/v20200824/model/CreateVRSTaskRequest.cpp
  )

set(vrs_include
    include/tencentcloud/vrs
  )

add_library(vrs ${LIB_TYPE}
  ${vrs_public_header}
  ${vrs_public_header_model}
  ${vrs_src})

set_target_properties(vrs
  PROPERTIES
  LINKER_LANGUAGE CXX
  ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
  RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
  OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}vrs
  )

target_include_directories(vrs
  PRIVATE include
    ${CMAKE_SOURCE_DIR}/core/include
  )
target_link_libraries(vrs
  core)

#install(FILES ${vrs_public_header}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vrs/v20200824)
#install(FILES ${vrs_public_header_model}
#  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud/vrs/v20200824/model)
install(DIRECTORY ${vrs_include}
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/tencentcloud)

install(TARGETS vrs
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
  )
