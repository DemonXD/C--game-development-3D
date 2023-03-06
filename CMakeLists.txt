cmake_minimum_required(VERSION 3.10)
project(GameExample)

find_package(SDL2 REQUIRED)

set(CMAKE_CXX_STANDARD 11)

aux_source_directory(. DIR_SRCS)

add_subdirectory(./src/Engine)

add_executable(Game main.cc)

target_link_libraries(Game LIB_Engine)

target_link_libraries(Game ${SDL2_LIBRARIES})
