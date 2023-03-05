project(Game)

# 设定变量
# set（SRC main.cc ...)

# 添加头文件搜索路径， 等效 g++ -I
# include_directories(... ...)

# 生成共享库文件: libgame.so
# add_library(game SHARED ${SRC})

# 添加编译参数
# add_compile_options(-Wall -std=c++11 -02 ...)

# 生成可执行文件
# add_executable(main main.cc ...)

# 为target 添加共享库， 等效 g++ -l
# target_link_libraries(main game)

# 向工程中添加存放源文件的子目录
# add_subdirectory(src)

# 发现一个目录下所有源代码文件并将列表存储在一个变量中，这个指令临时被用来自动构建源文件列表
# aux_source_directory(. SRC)