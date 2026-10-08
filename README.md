# C++ Module 02: Fixed-Point Numbers

Solutions for **42's C++ Module 02**, an introduction to fixed-point arithmetic,
operator overloading, and Orthodox Canonical Form in C++98.

## Overview

This module builds a `Fixed` class step by step. The class stores values as an
integer with **8 fractional bits**, then grows from raw-bit access into a usable
numeric type with conversions, comparisons, arithmetic, increment/decrement
operators, and `min`/`max` helpers.

## Exercises

| Directory | Focus | Main features |
| --- | --- | --- |
| `ex00` | Raw fixed-point storage | Constructors, copy assignment, `getRawBits`, `setRawBits` |
| `ex01` | Numeric conversions | `int` and `float` constructors, `toInt`, `toFloat`, stream output |
| `ex02` | Operator overloading | Comparisons, arithmetic, increment/decrement, `min`, and `max` |

## Requirements

- A C++ compiler with C++98 support
- `make`
- Unix-like environment

The exercises are compiled with warnings treated as errors:

```text
-Wall -Wextra -Werror -std=c++98
```

## Build and Run

Each exercise is independent and produces a program named `fixed`.

### Exercise 00

```bash
cd ex00
make
./fixed
```

This exercise demonstrates construction, copying, assignment, and raw internal
value access.

### Exercise 01

```bash
cd ex01
make
./fixed
```

This version adds conversion from integers and floating-point values, conversion
back to `int` and `float`, and output through `operator<<`.

### Exercise 02

```bash
cd ex02
make
./fixed
```

This version completes the fixed-point type with arithmetic and comparison
operators, prefix and postfix increment/decrement, and static `min`/`max`
functions.

## Project Structure

```text
.
├── ex00/
│   ├── Fixed.cpp
│   ├── Fixed.hpp
│   ├── Makefile
│   └── main.cpp
├── ex01/
│   ├── Fixed.cpp
│   ├── Fixed.hpp
│   ├── Makefile
│   └── main.cpp
├── ex02/
│   ├── Fixed.cpp
│   ├── Fixed.hpp
│   ├── Makefile
│   └── main.cpp
└── README.md
```

## Makefile Commands

Run these commands from an exercise directory:

```bash
make          # Build fixed
make clean    # Remove object files
make fclean   # Remove object files and the executable
make re       # Rebuild from scratch
```

To clean every exercise from the repository root:

```bash
for directory in ex00 ex01 ex02; do make -C "$directory" fclean; done
```

## C++98 Constraints

The implementation uses only C++98 features and the standard library. Each
exercise follows the module's required class design, including the Orthodox
Canonical Form: default constructor, copy constructor, copy-assignment
operator, and destructor.