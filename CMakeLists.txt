cmake_minimum_required(VERSION 3.10)
project(GameExample)

set(CMAKE_CXX_STANDARD 11)

aux_source_directory(. DIR_SRCS)

add_subdirectory(./src/Engine)

add_executable(${PROJECT_NAME} main.cc)

find_package(SDL2 REQUIRED)

if (SDL2_FOUND)
    include_directories(${SDL2_INCLUDE_DIRS})
endif(SDL2_FOUND)

target_link_libraries(${PROJECT_NAME} LIB_Engine)
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
