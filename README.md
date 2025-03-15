# Fixed Point Arithmetic & Operator Overloading in C++

## Overview  
This project is an exploration of **Ad-hoc polymorphism**, **operator overloading**, and **canonical classes** in C++. To illustrate these concepts, I have implemented a **fixed-point arithmetic library**, which provides a more performance-efficient alternative to floating-point numbers.

Additionally, I have implemented an **expression evaluator** that can parse and compute mathematical expressions using fixed-point arithmetic.

## Key Features  
✅ **Fixed-Point Number Representation** – A custom implementation of fixed-point numbers, allowing precise arithmetic operations with controlled precision.  
✅ **Operator Overloading** – Implemented overloaded operators (`+`, `-`, `*`, `/`, etc.) to enable intuitive arithmetic operations on fixed-point numbers.  
✅ **Expression Evaluator** – Parses and evaluates mathematical expressions, including functions like `max()` and `min()`.  
✅ **Performance-Oriented Design** – Fixed-point representation is widely used in **high-performance computing**, **data science**, and **gaming**, where precision and efficiency are critical.  

## Expression Evaluator  
The expression evaluator supports basic arithmetic operations and built-in functions such as:  
- `max(a, b)`: Returns the maximum of two numbers.  
- `min(a, b)`: Returns the minimum of two numbers.  

### Example Usage  
```sh
./eval_expr "3 + 5 * 2 / (4 - 1)"
./eval_expr "max(7.5, 2.5)"
./eval_expr "min(-5, 5)"
