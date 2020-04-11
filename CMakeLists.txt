cmake_minimum_required(VERSION 3.10)

project(cs1103-integer-jorgecollazos)

file(GLOB SOURCES "src/*")

add_executable(cs1103-integer-jorgecollazos ${SOURCES})