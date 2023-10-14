cmake_minimum_required(VERSION 3.13)
project(basic_calc)
add_executable(${CMAKE_PROJECT_NAME} main.c)
add_subdirectory(libraries)

target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/libraries/arith
							${CMAKE_SOURCE_DIR}/libraries/exp
							${CMAKE_SOURCE_DIR}/libraries/logical
							${CMAKE_SOURCE_DIR}/libraries/note)
target_link_libraries(${CMAKE_PROJECT_NAME} arith_lib exp_lib logical_lib note_lib)
