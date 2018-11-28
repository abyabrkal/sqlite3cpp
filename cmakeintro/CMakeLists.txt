cmake_minimum_required (VERSION 2.6)
project (cmakeintro)

# The version number
set (cmakeintro_VERSION_MAJOR 1)
set (cmakeintro_VERSION_MINOR 0)

# configure a header file to pass some of the cmakeintro# settings to code
configure file (
	"${PROJECT_SOURCE_DIR}/cmintroconfig.h.in"
	"${PROJECT_BINARY_DIR}/cmintroconfig.h"
	)

# add the binary tree to the search path for include files
# so that we will find cmintroconfig.h
include_directories("${PROJECT_BINARY_DIR}")

# add the excutables 
add_executable (cmakeintro cmintro.cpp)