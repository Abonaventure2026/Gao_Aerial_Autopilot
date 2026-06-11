cmake_minimum_required(VERSION 3.16)
project(Gao_Aerial_Autopilot)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 引入基座静态库
add_subdirectory(../Gao_4A_Autopilot ${CMAKE_BINARY_DIR}/gao_base)

file(GLOB_RECURSE BRANCH_SRCS edge/*.cpp)

add_executable(gao_autopilot ${BRANCH_SRCS})
target_include_directories(gao_autopilot PRIVATE edge)
target_link_libraries(gao_autopilot gao_base)
