cmake_minimum_required (VERSION 2.6)
project (cmakeintro)


# The version number
set (cmakeintro_VERSION_MAJOR 1)
set (cmakeintro_VERSION_MINOR 0)


# should we use our own math functions?
option (USE_MYMATH "Use tutorial provided math implementation" ON)


# configure a header file to pass some of the cmakeintro# settings to code
configure_file (
  "${PROJECT_SOURCE_DIR}/cmintroconfig.h.in"
  "${PROJECT_BINARY_DIR}/cmintroconfig.h"
  )



# add the binary tree to the search path for include files
# so that we will find cmintroconfig.h
include_directories("${PROJECT_BINARY_DIR}")


# add the MathFunctions library?
if (USE_MYMATH)
  include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
  add_subdirectory (MathFunctions)
  set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
endif ()


# add the executables 
add_executable (cmakeintro cmintro.cpp)
target_link_libraries (cmakeintro ${EXTRA_LIBS})

