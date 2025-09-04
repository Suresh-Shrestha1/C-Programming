# 🔤 Chapter 5: String Handling Programs in C

This folder contains various C programs that demonstrate common **string handling operations**. These programs focus on tasks like reading strings, copying, comparing, reversing, checking palindromes, and more.

Ideal for beginners and intermediate learners aiming to understand how strings work in C using standard library functions and manual operations.

---

## 📂 List of Programs

### 1. 📝 `string.c`
**Purpose:**  
Reads a complete line of text (including spaces) and displays it.

**How It Works:**  
Uses `scanf(" %[^\n]", str)` or `fgets()` to read input until a newline is encountered.

**Concepts Covered:**  
- String input  
- Proper input handling for sentences

---

### 2. 📋 `copy.c`
**Purpose:**  
Copies one string into another using the `strcpy()` function.

**How It Works:**  
Takes a source string from the user and copies it into a destination variable.

**Concepts Covered:**  
- String manipulation  
- `strcpy()` from `<string.h>`

---

### 3. 🤝 `compare.c`
**Purpose:**  
Compares two strings using `strcmp()`.

**How It Works:**  
- Takes two strings as input  
- Uses `strcmp()` to check for equality  
- Displays the result based on comparison

**Concepts Covered:**  
- String comparison  
- ASCII-based evaluation

---

### 4. ➕ `concatenate_two_string.c`
**Purpose:**  
Concatenates (joins) two strings using `strcat()`.

**How It Works:**  
- Takes two strings  
- Joins the second to the first  
- Displays the combined string

**Concepts Covered:**  
- String concatenation  
- Proper string termination

---

### 5. 📏 `length.c`
**Purpose:**  
Finds the length of a string using `strlen()`.

**How It Works:**  
- Accepts a string input  
- Uses `strlen()` to determine its length  
- Displays the number of characters

**Concepts Covered:**  
- String length  
- Null-terminator awareness

---

### 6. 🔁 `reverse.c`
**Purpose:**  
Reverses a string manually using a loop.

**How It Works:**  
- Calculates the string length  
- Iterates from the end to the start  
- Prints characters in reverse order

**Concepts Covered:**  
- Manual string traversal  
- Looping logic

---

### 7. 🔄 `palindrome.c`
**Purpose:**  
Checks whether a string is a **palindrome**.

**How It Works:**  
- Reverses the string  
- Compares it to the original  
- Declares whether it is a palindrome

**Concepts Covered:**  
- String comparison  
- Logic building with conditionals

---
