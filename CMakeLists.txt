cmake_minimum_required(VERSION 3.18 FATAL_ERROR)
enable_language(CXX)
project(UPlatform
        VERSION 0.1.0
        LANGUAGES CXX)

set(DCMAKE_GENERATOR_PLATFORM "x64")
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)



add_executable(UPlatform UPlatform.hpp source.cpp)