## C++ Game Development For 3D Learning Note
- cmake
- vscode


## build installer

### Windows
CMake + CPack + NSIS(msbuild)


## cmake build procedure
- 源代码在什么位置？
- 头文件在哪里？
- 怎么生成静态或者动态库？
- 程序链接的静态库在哪里？
- 如果工程的代码存放在很多地方，那又该怎么找到它们呢？


1. required cmake version
cmake_minimum_required(VERSION 3.10)

2. name Project
project(Example)

3. specified source files
file(name files)

4. add compile optional
add_definitions("-Wall -std=c++11)

5. define exec name
add_executable(example ${name})