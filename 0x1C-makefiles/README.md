# C - Makefiles

This repository contains a series of tasks focused on learning and implementing Makefiles in C programming.

A Makefile is a script used to automate the compilation and building process of software projects. It consists of rules and commands that specify how to compile source code files, create executable programs, and manage dependencies. Makefiles are particularly useful for large projects with multiple source files, libraries, and complex build configurations.

Each rule in a Makefile defines a target (such as an executable file) and the dependencies required to build it. If any of the dependencies have been modified since the last build, the target is rebuilt using the associated commands. This dependency tracking mechanism ensures that only the necessary files are rebuilt, saving time and resources during development.

Variables can be used in Makefiles to store compiler options, file names, and other configuration settings, making it easy to customize the build process. Additionally, Makefiles support phony targets, which are actions like cleaning up generated files or rebuilding the entire project.

## Requirements

- **Operating System:** Ubuntu 20.04 LTS
- **Compiler:** GCC 9.3.0
- **Make Version:** GNU Make 4.2.1

## Tasks

1. **Task 0 - Basic Makefile**: Introduction to creating a simple Makefile to build an executable named "school".
2. **Task 1 - Makefile with Variables**: Introduction to using variables in Makefiles for compiler and source file specifications.
3. **Task 2 - Enhanced Makefile**: Creating a Makefile with more advanced features, including separate variables for compiler, source files, object files, and the executable name.
4. **Task 3 - Complete Makefile**: Development of a comprehensive Makefile with rules for building, cleaning, and managing project files.
5. **Task 4 - Advanced Makefile**: Implementation of a complex Makefile with additional constraints and optimizations.