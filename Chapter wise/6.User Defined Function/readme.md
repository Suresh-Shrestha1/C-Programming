# 🧩 Chapter 6: User Defined Function Examples in C

This folder contains a collection of C programs demonstrating how to create and use user-defined functions. It includes examples on:

- Functions with and without arguments
- Return values
- Recursion
- Parameter passing (by value and by reference)
- Macros and array/string handling with functions

Perfect for learners looking to master modular programming in C and understand how to break code into reusable components.

---

## 📂 List of Programs

### 1. ⚖️ `arguments_return.c`
**Purpose:**  
Defines a function that takes two arguments and returns the maximum of the two.

**Concepts Covered:**  
- Function with arguments and return value  
- Conditional logic using `if`

---

### 2. ➕ `argumentss_no_return.c`
**Purpose:**  
Adds two numbers using a function that takes arguments but returns nothing.

**Concepts Covered:**  
- `void` return type  
- Functions with parameters  
- Printing inside a function

---

### 3. 🔁 `call_by_reference.c`
**Purpose:**  
Demonstrates **call by reference** by modifying a variable using pointers.

**Concepts Covered:**  
- Pointer usage  
- Address passing to functions  
- Value modification in-place

---

### 4. 🚫 `call_by_value.c`
**Purpose:**  
Illustrates **call by value** where changes inside the function do not affect the original variable.

**Concepts Covered:**  
- Parameter passing by value  
- Scope and variable independence

---

### 5. 🔢 `factorial.c`
**Purpose:**  
Calculates the factorial of a number using recursion.

**Concepts Covered:**  
- Recursive function calls  
- Base and recursive cases  
- Integer return values

---

### 6. 🐚 `fibonacci.c`
**Purpose:**  
Prints the Fibonacci sequence up to `n` terms using a recursive function.

**Concepts Covered:**  
- Recursive logic  
- Series generation  
- Function nesting

---

### 7. 📐 `macros_header.c`
**Purpose:**  
Uses a macro to define `PI` and calculates the area of a circle.

**Concepts Covered:**  
- `#define` preprocessor directive  
- Macros and constants in C

---

### 8. 👋 `no_arguments_no_return.c`
**Purpose:**  
Prints a welcome message using a function that has no arguments and no return.

**Concepts Covered:**  
- Simplest form of a function  
- `void` functions  
- Function calling

---

### 9. 🔄 `no_arguments_return.c`
**Purpose:**  
Returns a value (like the current year) from a function without taking any input.

**Concepts Covered:**  
- Functions with return but no input  
- Local computation and return

---

### 10. 📦 `passing_array_function.c`
**Purpose:**  
Demonstrates how to pass an array to a function and print its elements.

**Concepts Covered:**  
- Array as a function argument  
- Iterating inside a function

---

### 11. 🧵 `passing_string_function.c`
**Purpose:**  
Passes a string to a function and displays it.

**Concepts Covered:**  
- String handling in functions  
- Input/output using character arrays

**⚠️ Note:** Avoid using `gets()` — it's unsafe. Use `fgets()` for secure input.

---

### 12. 🔼 `power.c`
**Purpose:**  
Computes `a^b` (a raised to the power b) using recursion.

**Concepts Covered:**  
- Mathematical recursion  
- Function with two parameters and return

---

### 13. 🔁 `reverse.c`
**Purpose:**  
Reverses a number using recursive logic.

**Concepts Covered:**  
- Digit extraction  
- Recursion and modular arithmetic

---

### 14. ➕ `sum_of_digits.c`
**Purpose:**  
Calculates the sum of digits of a number using recursion.

**Concepts Covered:**  
- Recursive digit processing  
- Integer input and recursive return

---

## 🎯 Purpose and Learning Outcomes
These programs will help you:
- Understand how to declare and use functions in different forms
- Apply recursion to solve mathematical problems
- Differentiate between call by value and call by reference
- Pass and manipulate arrays and strings through functions
- Use macros to define constants and simplify calculations
- Write modular, clean, and maintainable C programs
---
