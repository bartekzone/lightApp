## Table of Contents
1. [Project Overview](#project-overview)
2. [Project Structure](#project-structure)
3. [Requirements](#requirements)
4. [Build Instructions](#build-instructions)
5. [Cleaning the Project](#cleaning-the-project)
6. [Credits](#credits)

---

## 1. Project Overview

The project implements a example of layered embedded application inspired by the AUTOSAR architecture.  
The codebase is organized into layers: **MCAL**, **BSW**, **RTE**, **APP**, and **ProjectConfig**, to maintain a structured architecture and allow for future expansion, testing and launching on board (Nucleo).

---

## 2. Project Structure
<pre lang="markdown"> <code> ``` 
## Project Structure
/LightApp
│
├── main.c
├── CMakeList.txt
│
├── APP/
│ └── Swc_LightsControl.c
│
├── BSW/
│ ├── GPIO/
│ │ ├── Gpio.c
│ │ └── Gpio_Cfg.c
│ └── DET/
│ └── ErrorHandler.c
│
├── MCAL/
│ └── Dio.c
│
├── RTE/
│ └── Rte_LightsControl.c
│
└── ProjectConfig/
``` </code> </pre>

---

## 3. Requirements

Before you start, make sure you have installed:

- **GCC (MinGW-w64)** → the compiler  
- **CMake** → the build system generator  
- **Ninja** (optional but recommended) → fast build tool  

### Check installed tools and versions
Open your terminal (MSYS2 / cmd) and run. If the commands return version numbers, the tools are installed correctly
   gcc --version
   cmake --version
   ninja --version
If no please run MSYS2 MINGW64 terminal and run:
   pacman -Syu
   pacman -S mingw-w64-x86_64-gcc mingw-w64-x86_64-cmake
   pacman -S mingw-w64-x86_64-make
To install Ninja fast build tool please run:
   pacman -S mingw-w64-x86_64-ninja

---

## 4. Build Instructions

Option A: Configure and Build with Ninja tool
   cmake -G Ninja -S . -B build -DCMAKE_BUILD_TYPE=Release
   cmake --build build

Explanation:
cmake -G Ninja → select Ninja as the build generator
-S . → source directory = current folder
-B build → build output in the build/ folder
-DCMAKE_BUILD_TYPE=Release → optimize for release (faster binary)
cmake --build build → compile and link the program

Option B: Configure and Build with MinGW Makefiles
   cmake -G "MinGW Makefiles" -S . -B build -DCMAKE_BUILD_TYPE=Release
   cmake --build build

Explanation:
Same as above, but instead of Ninja, CMake generates a Makefile
The build will be executed using mingw32-make under the hood

After successful compilation, the program will be located in the build/ folder. Type command:
   ./build/app_lightApp.exe

---

## 5. Cleaning the Project
To remove the executable:
    rm -rf build

---

## 6. Credits
UCEGOSU – "C for Advanced Users" course
https://cdlazaawansowanych.pl/

msalamon – STM32 register-level configuration examples
https://www.youtube.com/@msalamon/playlists

Yogin Savani – AUTOSAR architecture overview
https://yoginsavani.com/understanding-autosar-architecture-a-guide-to-automotive-software-integration/