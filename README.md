![ft_printfe](https://user-images.githubusercontent.com/63206471/159624203-0a3fb843-0d52-43a5-b2c2-538c812a13d8.png)

# Forty Two Printf

- [Introduction](#introduction)
- Notion
- [The Project](#the-project)

## Introduction
The versatility of the printf function in C represents a great exercise in programming for us. This project was moderate difficulty. It allowed me to discover variadic functions in C. The key to a successful ft_printf is a well-structured and good extensible code.

## Skills that I have improved
- Rigor
- Algorithms & AI

## The Project
This is my own printf function based on printf from Libc. Basically, printf uses variadic function. It receives a variable number of arguments and a string is processed. Every '%' is parsed to see what it represents.

### What I Have learned during this project?

- Variadic Functions
- Flags in functions
- Concept of Macro in C

### What are my thoughts about the project?

_Printf_ is really useful when one wants to debug something. Although easy, through this project I could learn how to deal with a variable number of arguments and also more about string processing.

### Workflow

![Printf](https://user-images.githubusercontent.com/63206471/164135667-851cd659-b614-4ccd-9231-7caf749d247e.png)

### How to run it?

```
# Clone the repository
https://github.com/adrianofaus/Projects_42_School.git

# Access the folder
cd Projects_42_School/3.Printf

# Run the makefile
make

# Header of printf
Add the printf.h header

# Compile your program with the library
clang main.c libftprintf.a

# Execute the binary
./a.out

# Clean binary and object file
make fclean

# Clean object files
make clean

# Re-compile
make re

```
