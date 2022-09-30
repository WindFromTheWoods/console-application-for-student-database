cmake_minimum_required(VERSION 3.10)

# set the project name
project(Student_database)

set (SOURSE_EXE main.cpp)

set (SOURSE_LIB data_base.cpp students.cpp)

add_library(foo STATIC ${SOURSE_LIB})

# add the executable
add_executable(main ${SOURSE_EXE})

target_link_libraries(main foo)