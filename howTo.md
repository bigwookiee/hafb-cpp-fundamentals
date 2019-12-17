# How To C++
With some windows notes.

## C++ enviromet
```cpp
/*
*   using git
*   CMake
*   g++ (MinGW)
*
*   modify path as need.  Use env from the search bar.
*/
```

## Git Hub for cloud services.
```cpp
/*
*   http::/github.com
*/
```

## Plugins
- c/c++ Intellisense
- Code spell extension
- CMake
- CMake Tools
- Add doxygen documentation Generator
- Add epitech c/c++ Headers
- Add Markdown All in One

## Termal commands.
Note : ($ means term prompt):
```bash
$ ls            # List folder conent
$ cd <dest>     # Chang dir
$ cd ..         # Move to parent dir
$ pwd           # Working Dir
```

## File System
```bash
.               # Current Directory
..              # Carent Directory
```

## g++
```bash
# To compile
$ g++ <source name>.cpp
# -o for output name.
$ g++ <Source name>.cpp - o <output name>
$ .\<output name>.exe
```

## C++ Template
```cpp
// Standared starting template
#include <iostream>

using namespace std;

int main(){
    return 0;
}
```

## Doxygen doc.
```cpp
/*
*   /** <Enter Key>
*   
*   Fill out auto-generated stuff to doc.
*
*/
```

## CMake
```bash
make and move into a build dir.
refer to 'CMakeLists.txt'

$ cmake .. -G "MinGW Makefiles" #-G option only need in windows.
$ cmake --build .
```
