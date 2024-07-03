cmake_minimum_required(VERSION 3.9.1)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

message(STATUS "Stack Library is being Activated....")
message(STATUS "Path to Stack Library: " ${CMAKE_SOURCE_DIR})

add_library(
    StackLibrary
    Stack.cpp 
    Stack.hpp    
    )
#if(EXISTS ${CMAKE_SOURCE_DIR}/StackLibrary)
#    message(STATUS "Stack Library has been Created Successfully..")
#else()
#    message(WARNING "Stack Library isn't Created, please check for any ERRORS!")
#endif()
### this line to make sure if StackLibrary is being Created usually or not.