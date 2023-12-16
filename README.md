# Monty Project

## Overview

This project is the implementation of an interpreter for Monty ByteCodes files. Monty is a scripting language that is first compiled into Monty byte codes. The interpreter relies on a unique stack with specific instructions to manipulate it.

## Table of Contents

1. [Project Structure](#project-structure)
2. [Compilation and Execution](#compilation-and-execution)
3. [Opcodes](#opcodes)
4. [Testing](#testing)
5. [Additional Features](#additional-features)
6. [Brainf*ck Scripts](#brainfck-scripts)
7. [Tasks Completion](#tasks-completion)
8. [License](#license)

## Project Structure

The project follows a specific structure:

- **Source Code Files:** All C source code files are stored in the main directory.
- **Header File:** The header file `monty.h` contains function prototypes.
- **Test Files:** Test files (e.g., `test-0.m`, `test-1.m`) are used to test different opcodes.
- **Brainf*ck Scripts:** Brainf*ck scripts are stored in the `bf` directory.

## Compilation and Execution

To compile the Monty interpreter, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty

Opcodes
The interpreter supports the following opcodes:

push
pall
pint
pop
swap
add
nop
sub (advanced
sub (advanced)
div (advanced)
mul (advanced)
mod (advanced)
comments (advanced)
pchar (advanced)
pstr (advanced)
rotl (advanced)
rotr (advanced)
stack (advanced)
queue (advanced)
Refer to the project guidelines for details on each opcode.
