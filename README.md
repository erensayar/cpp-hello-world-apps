
# <center> What's Repository For?
My C++ and C++ environments exploration trials and notes repo.
This repo include C++ project that projects include C++ development environment and tools like CMAKE, CPM, Conan.io, maybe Ninja someday.. Also i will try that projects will be developing as a Cross Platform Applications.

---

<br><br>

# <center> MY PERSONAL NOTES

<br>
<br>

# BUILD NOTES

<br>
<br>
<br>

# CMAKE With Ninja

    mkdir build && cd build

    cmake .. -G "Ninja"

    ninja
       
---

<br>
<br>
<br>

# CMAKE


1. Create build file and enter in directory then enter this command.

* 1.A. Option1: Build With MAKE
      
      cmake ..     
	
* 1.B. Option2: Build With MinGW

      cmake .. -G "MinGW Makefiles"

    


2. Then enter this command

       cmake --build .


Now we have executable output.

## Install Output To System
If outputs wants install to system we can use MAKE. (Example: We have downloaded the OpenCV source code. Then compile and built the source code. If want to add system the use make.)  

Enter these commands in order

    make -j4 (4 : processor core number)

    sudo make install


---

<br>
<br>
<br>

# GPP

## Usage 1 : Compiling and Running

   Compiling: 
 	
       g++ main.cpp
        
 
   Running:
        
       ./a.out

## Usage 2 : Compiling and Running And Specified Output Type

       g++ -o main.sh main.cpp

   or

       g++ -o main.exe main.cpp


---

<br>
<br>

## Sources
* /docs/C++ Syntax.md -> https://github.com/gibsjose/cpp-cheat-sheet
* /docs/CPM pdf -> https://medium.com/swlh/cpm-an-awesome-dependency-manager-for-c-with-cmake-3c53f4376766