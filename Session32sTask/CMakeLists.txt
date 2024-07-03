#Example 1
cmake_minimum_required(VERSION 3.9.1)
project(TEST_HELLO) #name of the project
 message(STATUS "Current Directory is: " ${CMAKE_BINARY_DIR}) #current directory
set(CMAKE_CXX_STANDARD 14) #setting varibales version of c/c++ 
set(CMAKE_CXX_STANDARD_REQUIRED true)
#message(STATUS "The Executable OutPut Path is: " ${EXECUTABLE_OUTPUT_PATH}) ## Show path (still can't understand it well)
add_subdirectory(${CMAKE_SOURCE_DIR}/StackLib)
message(STATUS "The Path of the StackLib is: "${CMAKE_SOURCE_DIR}/StackLib) ## Show path

message(STATUS "Adding .exe files..... ") # ==Echo

if(EXISTS ${CMAKE_SOURCE_DIR}/main.cpp)
message(STATUS "Main File Exists!!") ## WARNING, STATUS, FATAL_ERROR
else()
message(FATAL_ERROR "File doesn't Exist!!!")
endif()
set(
    SRC_FILES  
    main.cpp
    ${CMAKE_SOURCE_DIR}/StackLib/Stack.cpp 
    ) ## Creating a varibale SRC_files including all source files  to ease add_executable dependincies

add_executable(testing ${SRC_FILES}) ## exe. file with the name of the project and dependincies
target_link_libraries(test01 PRIVATE ${CMAKE_SOURCE_DIR}/Stacklib)
target_include_directories(test01 PUBLIC ${CMAKE_SOURCE_DIR}/StackLib)


# Include the Google Test library in the project
#target_link_libraries(MyProject GTest::gtest_main)

# Add the test executable
#add_executable(test_Stack ${TEST_SOURCES})
 
# Notes:
### clear must be made manual from cmd ( rm -r *) /( rm *)
### cmake -G "Unix Makefiles" .. -> is to generate makefile from build folder to the main CMake file .txt
### make is to compile and if there is any further updates after being generated once at least it will still work
### must first mkdir build and cd build to begin generating process as for lots files will be generated 
### to include or link libraries from other folders must us add_library() variable in those folder then target_link/include()






 