# c-review
Review C for OMSCS

## Contents
- testDevEnv - hello world to ensure development environment is ok
- variable - review of data types in C, basic printf
- makeFiles - review of creating make file, sample login programs with reading user input
- spaceship_exercise - enums and typedef review
- bunch_of_constants - format specifiers review
- sphere calculator - Makefile linking, util files, header files review
- sigma drawing - control structures (for loops)



## Compiling 
- `gcc <options> <source filenames list>`
- options:
    - `-g` enables debugger
    - `-Wall` enables almost all warnings
    - `-o <executable name>` - generates executable file with executable name
    - `-c` suppress automatic linking, 
- example: `gcc -g -Wall program.c -o program.exe

## debugging
See debugging directory for gdb examples.

Valgrind - tool for checking memory leaks
- to install: `sudo apt install valgrind`
- to run valgrind: `valgrind <program.exe>`


Usually just use a makefile, see makefile directory for example.


https://gale.udemy.com/course/the-complete-c-programming-bootcamp/learn/lecture/26156398#overview

