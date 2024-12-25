# c-review
Review C for OMSCS

## Contents
- testDevEnv - hello world to ensure development environment is ok
- variable - review of data types in C, basic printf
- makeFiles - review of creating make file, sample login programs with reading user input


## Compiling 
- `gcc <options> <source filenames list>`
- options:
    - `-g` enables debugger
    - `-Wall` enables almost all warnings
    - `-o <executable name>` - generates executable file with executable name
    - `-c` suppress automatic linking, 
- example: `gcc -g -Wall program.c -o program.exe

Usually just use a makefile, see makefile directory for example.


