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

include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
add_subdirectory (MathFunctions)

# should we use our own math functions?
option (USE_MYMATH
		"Use tutorial provided math implementation" ON)
add_library(MathFunctions mysq.cpp)

# add the executables 
add_executable (cmakeintro cmintro.cpp)
target_link_executables (cmakeintro MathFunctions)

