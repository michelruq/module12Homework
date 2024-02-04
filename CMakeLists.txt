cmake_minimum_required(VERSION 3.5)

project(module12homework)

set (SOURCE_LIST 
                   main.cpp
				   checkingstringmultiples/checkingstringmultiples.cpp
				   )
				   
set (HEADER_LIST   
                   checkingstringmultiples/checkingstringmultiples.h	
                   )				   

include_directories(
                   checkingstringmultiples
				   )

add_executable(homework ${SOURCE_LIST})

set(CXX_FLAGS "${CXX_FLAGS} -std=c++11 - Wall")