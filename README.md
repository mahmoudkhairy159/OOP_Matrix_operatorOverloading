# OOP Matrix Operator Overloading

## Overview

This project implements a **Matrix class** in C++ that allows users to create and manipulate numerical matrices. The class supports basic matrix operations such as addition, subtraction, and multiplication using operator overloading. It also includes methods for transposing a matrix and overloading input/output operators for easy interaction with the matrix.

### Features:
- **Dynamic Matrix Creation**: The class allows for the creation of a matrix of any size (e.g., `Matrix m(5, 5)` will create a 5x5 matrix).
- **Operator Overloading**: 
  - Addition (`+`)
  - Subtraction (`-`)
  - Multiplication (`*`)
  - Input (`>>`)
  - Output (`<<`)
- **Transpose Method**: The class includes a function to transpose a matrix (swap rows and columns).
- **Memory Management**: A destructor is implemented to free dynamically allocated memory when the object goes out of scope.
