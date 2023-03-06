cmake_minimum_required(VERSION 3.10)
project(GameExample)

set(CMAKE_CXX_STANDARD 11)

aux_source_directory(. DIR_SRCS)

add_subdirectory(./src/Engine)

add_executable(${PROJECT_NAME} main.cc)

INCLUDE(FindPkgConfig)


PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
PKG_SEARCH_MODULE(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)

# if (PKG_CONFIG_FOUND)
#     pkg_check_modules(SDL2 IMPORTED_TARGET sdl2 sdl2_image)
# endif(PKG_CONFIG_FOUND)

target_link_libraries(${PROJECT_NAME} LIB_Engine)

include_directories(${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARIES})
