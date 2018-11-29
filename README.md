# SQLite3 with Modern C++ 
Experiments with Modern C++ 
-- *Todo*

---
## CMake Essentials [Nov 2018]
### Installation & Setup of CMake and MinGW in Windows 
[Follow this link](https://perso.uclouvain.be/allan.barrea/opencv/building_tools.html)
* Install CMake via setup with path addition   
* Install MinGW and add to path 

### CMake for projects
1. create CMakeLists.txt with necessary configuration settings
    CMake Windows uses Visual Studio Compiler by default. You need to explicitly set gcc compiler if required.
   ...Basic configuration as below
   ``` 
    cmake_minimum_required(VERSION 3.13)
    set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++")
    project(program)
    add_executable(program main.cpp)
   ```
2. run **_cmake ._** generate a makefile from current working directory
   ...```$ cmake .```
3. run **_make_** to create the executable file
   ...```$ make ```
4. run your program
   ...```$ ./program ```
---
