aux_source_directory(. DIR_LIB_ENGINE)

add_library(LIB_Engine ${DIR_LIB_ENGINE})

find_package(SDL2 REQUIRED)
if (SDL2_FOUND)
    include_directories(${SDL2_INCLUDE_DIRS})
endif(SDL2_FOUND)

target_link_libraries(${LIB_Engine} ${SDL2_LIBRARIES})