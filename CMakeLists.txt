cmake_minimum_required(VERSION 3.15)
project(PA01-MemoryManager)

set(CMAKE_CXX_STANDARD 14)

add_executable(MemoryManager main.cpp algoNew.cpp algoNew.h Point.h SpecialPoint.h CustomMemoryManager.cpp CustomMemoryManager.h Singleton.h Allocator.cpp Allocator.h BestFit.cpp BestFit.h FirstFit.cpp FirstFit.h)

cmake_minimum_required(VERSION 3.10)
project(20S-3353-PA01)
set (EXE_NAME PA01-MemoryManager)

##########################################
# Students, edit the items below.  In the quotes,
# put the names of the input files as they should appear
# in the argv param to main.
# Example:
#   set (input01 "train_data.csv")
#   set (input02 "train_target.csv")
# etc....

set (input01 "")
set (input02 "")
set (input03 "")
set (input04 "")

#
##########################################

# Copy data files to build dir
foreach(file IN LISTS input01 input02 input03 input04)
    configure_file(${file} ${file} COPYONLY)
endforeach()

set(CMAKE_CXX_STANDARD 14)
add_executable(${EXE_NAME} main.cpp)

