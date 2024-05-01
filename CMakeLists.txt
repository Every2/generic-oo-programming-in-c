cmake_minimum_required(VERSION 3.28)
project(generic_oop)

set(SOURCES
        src/generics.c
        include/generics.h
        include/inheritance.h
        include/inheritance.h
)

include_directories(include)

add_executable(generic_oop ${SOURCES})