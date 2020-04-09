cmake_minimum_required(VERSION 3.9.1)

project(Shapes)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

SET(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

include_directories(./include)

file(GLOB SOURCES "src/*.cpp" "src/*/*.cpp")
add_executable(shapes.exe ${SOURCES})

