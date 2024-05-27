cmake_minimum_required(VERSION 3.25.1)

project(FinalExam)

add_executable(main
    src/main.cpp
    src/matrix.cpp
)

target_include_directories(main PRIVATE
    src
)