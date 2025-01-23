cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(STUDY_PROJECT_NAME study)
file(GLOB_RECURSE HEADERS include/*.hpp)
file(GLOB_RECURSE SOURCES src/*.cpp)

project(${STUDY_PROJECT_NAME})
include_directories(/usr/local/include/grpcpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})

find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)
target_link_libraries(${STUDY_PROJECT_NAME} PRIVATE gRPC::grpc++ protobuf::libprotobuf)

target_link_libraries(${STUDY_PROJECT_NAME} PRIVATE uuid)
find_package(jsoncpp REQUIRED)
target_link_libraries(${STUDY_PROJECT_NAME} PRIVATE jsoncpp_lib)
