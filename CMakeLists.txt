cmake_minimum_required(VERSION 3.22)
set(STUDY_PROJECT_NAME study)

project(${STUDY_PROJECT_NAME})

set(CMAKE_CXX_STANDARD 17)

find_package(Boost REQUIRED COMPONENTS system)

add_executable(${STUDY_PROJECT_NAME} src/main.cpp
        src/Product.cpp
        src/Product.h
)

target_link_libraries(${STUDY_PROJECT_NAME} PRIVATE Boost::system)