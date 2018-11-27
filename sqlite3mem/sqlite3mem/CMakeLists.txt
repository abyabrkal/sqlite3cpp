# CMakeList.txt : CMake project for sqlite3mem, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project (sqlite3mem)

# Add source to this project's executable.
add_executable (sqlite3mem "sqlite3mem.cpp" "sqlite3mem.h")

# TODO: Add tests and install targets if needed.
