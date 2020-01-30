cmake_minimum_required(VERSION 3.15)
project(MemoryManager)

set(CMAKE_CXX_STANDARD 14)

add_executable(MemoryManager main.cpp algoNew.cpp algoNew.h Point.h SpecialPoint.h CustomMemoryManager.cpp CustomMemoryManager.h Singleton.h Allocator.cpp Allocator.h BestFit.cpp BestFit.h FirstFit.cpp FirstFit.h)