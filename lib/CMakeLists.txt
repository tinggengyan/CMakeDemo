include_directories(./inc)

# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(./src DIR_LIB_SRCS)

# 指定生成 lib 链接库
add_library (lib_demo ${DIR_LIB_SRCS})