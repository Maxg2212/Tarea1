cmake_minimum_required(VERSION 3.20)
project(Tarea1)

set(CMAKE_CXX_STANDARD 14 main.cpp)

add_executable(Tarea1 main.cpp QuickSort.cpp TextFileManager.cpp TextFileManager.h PagedArray.cpp PagedArray.h PageAlg.cpp PageAlg.h)
