cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(STUDY_PROJECT_NAME study)

project(${STUDY_PROJECT_NAME})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(${STUDY_PROJECT_NAME} src/main.cpp
        src/Product.cpp
        include/Product.hpp
        src/ProductPersistence.cpp
        include/ProductPersistence.hpp
        src/ProductService.cpp
        include/ProductService.hpp
)