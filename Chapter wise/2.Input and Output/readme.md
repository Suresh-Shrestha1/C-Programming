# 💻 Chapter 2: Input and Output in C

This folder contains simple C programs demonstrating various input and output functions. Each program shows how to read and display data using different standard and non-standard functions.

---

## 1. 📝 `printf_scanf.c`

**Purpose:**  
Demonstrates the use of `scanf()` for input and `printf()` for output.

**How it works:**  
- Reads a name (as a single word), age (integer), and percentage (float) from the user.
- Displays the entered information in a formatted way.

**Key Functions:**  
- `scanf()` for reading input.
- `printf()` for displaying output.

---

## 2. 🧾 `gets_puts.c`

**Purpose:**  
Shows how to read a string using `gets()` and display it using `puts()`.

**How it works:**  
- Prompts the user to enter their full name.
- Reads the entire line (including spaces) using `gets()`.
- Displays the name using `puts()`.

**⚠️ Note:**  
>`gets()` is unsafe and not recommended for modern C programming. Prefer using `fgets()` for safer input.

---

## 3. 🔤 `getchar_putchar.c`

**Purpose:**  
Demonstrates character input and output using `getchar()` and `putchar()`.

**How it works:**  
- Reads a single character from the user.
- Displays the entered character.

**Key Functions:**  
- `getchar()` for reading a character.
- `putchar()` for displaying a character.

---

## 4. 🕹️ `getch_putch&getche.c`

**Purpose:**  
Shows character input/output using `getch()`, `getche()`, and `putch()` from `<conio.h>`.

**How it works:**  
- Reads a character without echo using `getch()`.
- Displays it using `putch()`.
- Reads another character with echo using `getche()`.
- Displays it using `printf()`.

**⚠️ Note:**  
>These functions are specific to Windows and Turbo C environments. They are not part of the C standard library.

---


## 📋 Summary

These programs help you understand basic input and output operations in C, including both standard and some non-standard functions. For modern and portable C code, it is best to:

- Use **standard functions** such as `scanf()`, `printf()`, `getchar()`, and `putchar()` for console I/O.  
- Avoid unsafe functions like `gets()`. Instead, use `fgets()` to read strings safely.  
- Be aware that functions from `<conio.h>` (`getch()`, `getche()`, `putch()`) are platform-specific and not portable.  

Mastering these input/output functions forms the foundation for handling user interaction and data processing in C programs.