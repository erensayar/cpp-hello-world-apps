
# <center> What's Repository For?
<b>C and C++ environments exploration trials and notes repo.</b>

This repo include C++ projects, that projects include C++ development tools like CMAKE, CPM, Conan.io, maybe Ninja someday... I'm trying cross compiling.

## Notes
* <b>Cmake</b>: Build generator, otomation tool. Cmake need a build tool.
* <b>Ninja</b>: Build tool.
* <b>MinGw</b>: Build tool. (For windows. It has gcc, gpp compiler)
* <b>Make</b>: Build tool.
* <b>gcc</b>: Compiler.

<br>


# 1. NOTE: CMAKE Usage

## 1.1. Ninja

    mkdir build && cd build
    cmake .. -G "Ninja"
    ninja


## 1.2. MinGw

    mkdir build && cd build
    cmake .. -G "MinGW Makefiles"
    cmake --build .

## 1.3. Make (Linux)

    mkdir build && cd build
    cmake ..
    cmake --build .


Now we have executable output.


## Install Output To System
If outputs wants install to system we can use MAKE. 
(Example: We have downloaded the OpenCV source code. Then compile and built the source code. If want add to system we can use MAKE. Automatically add to system library.)  

Enter these commands in order

    make -j4 (4 : processor core number)
    sudo make install


# 2. NOTE: Compiler Notes

## GPP

* Usage 1 : Compiling and Running

   Compiling: 
 	
       g++ main.cpp
        
 
   Running:
        
       ./a.out

* Usage 2 : Compiling and Running And Specified Output Type

       g++ -o main.sh main.cpp

   or

       g++ -o main.exe main.cpp


# 3. NOTE: IDE Configurations

## VS Code

If you use windows, this config can be helpful

If libraries has warning underline, IDE can't see library than you can change include and compiler directory. 

* Mouse should be on the warning underline and select quick fix automaticly  c_cpp_properties.json file create and then change like this example:


* Add These Lines 

        {
            "configurations": [
                {
                    "name": "Win32",
                    "includePath": [
                        "${workspaceFolder}/**",
                        "C:\\mingw64\\x86_64-w64-mingw32\\include"
                    ],
                    "defines": [
                        "_DEBUG",
                        "UNICODE",
                        "_UNICODE"
                    ],
                    "windowsSdkVersion": "10.0.22000.0",
                    "compilerPath": "C:\\mingw64\\bin\\gcc.exe",
                    "cStandard": "gnu17",
                    "cppStandard": "gnu++17",
                    "intelliSenseMode": "windows-gcc-x64"
                }
            ],
            "version": 4
        }        

* You can maually create config file under this line: 

        <workspace_dir>/.vscode/c_cpp_properties.json


# 4. Sources
* /docs/C++ Syntax.md -> https://github.com/gibsjose/cpp-cheat-sheet
* /docs/CPM pdf -> https://medium.com/swlh/cpm-an-awesome-dependency-manager-for-c-with-cmake-3c53f4376766
