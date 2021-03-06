# ~~~
# Copyright 2020 Google LLC
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# ~~~

cmake_minimum_required(VERSION 3.10)

set(PACKAGE_BUGREPORT
    "http://github.com/GoogleCloudPlatform/functions-framework-cpp")
project(functions-framework-cpp CXX)

set(FUNCTIONS_FRAMEWORK_CPP_VERSION_MAJOR 0)
set(FUNCTIONS_FRAMEWORK_CPP_VERSION_MINOR 0)
set(FUNCTIONS_FRAMEWORK_CPP_VERSION_PATCH 1)
string(
    CONCAT FUNCTIONS_FRAMEWORK_CPP_VERSION
           "${FUNCTIONS_FRAMEWORK_CPP_VERSION_MAJOR}"
           ".${FUNCTIONS_FRAMEWORK_CPP_VERSION_MINOR}"
           ".${FUNCTIONS_FRAMEWORK_CPP_VERSION_PATCH}")

# Configure the compiler options, we will be using C++17 features.
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)

include(CTest)
add_subdirectory(google/cloud/functions)
