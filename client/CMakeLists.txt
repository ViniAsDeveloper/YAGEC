cmake_minimum_required(VERSION 3.22)
project(YAGEC CXX)

file(GLOB_RECURSE SOURCES "src/*.cpp")

if(NOT SOURCES)
    message(FATAL_ERROR "No sources found in src/")
endif()

add_executable(client ${SOURCES})

include(cmake/Dependencies.cmake)

target_link_libraries(client PRIVATE SDL3::SDL3)
