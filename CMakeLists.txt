cmake_minimum_required(VERSION 3.2)

project(
    llogger
    VERSION 0.0.1
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(
    ${PROJECT_SOURCE_DIR}/include
)

set(SOURCES
    src/lfour.cpp
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})