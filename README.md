# SQLite3 with Modern C++ 
Experiments with Modern C++

---
## CMake Essentials
### Installation & Setup of CMake and MinGW in Windows 
[Follow this link](https://perso.uclouvain.be/allan.barrea/opencv/building_tools.html)
* Install CMake via setup with path addition   
* Install MinGW and add to path 

### CMake for projects
1. create CMakeLists.txt with necessary configuration settings
   ...Basic configuration as below
   ``` 
    cmake_minimum_required(VERSION 2.8)
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
