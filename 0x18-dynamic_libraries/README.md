# Dynamic Library - libdynamic

## Overview

This project contains a dynamic library named `libdynamic.so` that includes various utility functions. The library is compiled with the `-std=gnu89` standard and includes functions for character manipulation, string operations, and more.

## Files and Directory Structure

- `libdynamic.so`: The compiled dynamic library.
- `main.h`: Header file containing function prototypes.
- `src/`: Directory containing the source code for the library functions.
  - `_abs.c`, `_atoi.c`, `_isalpha.c`, ...: Individual source files for each function.
- `README.md`: This file providing an overview of the project.

## Compilation

1. **Compile C source files into object files:**
    - Use wildcard (**``**) to include all C source files in the compilation.
    - Specify the output object files using the **`o`** flag.
    
    ```bash
    gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c src/*.c -I.
    ```
    This command compiles all C source files in the **`src`** directory into object files. The **`-I.`** flag includes the current directory in the search path for header files.
    
2. **Create the shared library (`libdynamic.so`):**
    - Use the **`shared`** flag to create a shared library.
    - Specify the input object files.
    - Add the **`o`** flag to specify the output file.
    
    ```bash
    gcc -shared -o libdynamic.so *.o 
    ```
    This command creates the shared library **`libdynamic.so`** from the compiled object files.