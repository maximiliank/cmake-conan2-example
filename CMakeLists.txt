cmake_minimum_required(VERSION 3.24)

project(CmakeConan2Example LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(fmt REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main PRIVATE fmt::fmt)
install(TARGETS main DESTINATION .)
