# 🧭 Chapter 7: Pointers in C

This folder contains various C programs that demonstrate key **pointer concepts** and **dynamic memory allocation** techniques. These examples cover how pointers interact with variables, arrays, strings, and memory, offering a solid foundation for mastering pointers in C.

Ideal for beginners and intermediate learners who want to gain hands-on experience with pointers, memory addresses, and dynamic allocation in C.

---

## 📂 List of Programs

### 1. 🧾 `delare_initialize_pointer.c`  
**Purpose:**  
Declares a pointer, initializes it with the address of a variable, and accesses data using the pointer.

**How It Works:**  
- Uses a simple integer variable  
- A pointer holds its address  
- Prints value and address using the pointer

**Concepts Covered:**  
- Pointer declaration  
- Dereferencing  
- Address-of operator (`&`)

---

### 2. 🔁 `swap_diigits.c`  
**Purpose:**  
Swaps two integers using a function that takes pointers as parameters.

**How It Works:**  
- Passes variable addresses to a function  
- Swaps their values via pointer dereferencing

**Concepts Covered:**  
- Function with pointer arguments  
- Data manipulation through addresses

---

### 3. 🧩 `pointer_to_pointer.c`  
**Purpose:**  
Explores **pointer to pointer** (double pointer) usage.

**How It Works:**  
- Uses a basic variable, a pointer, and a double pointer  
- Shows how to access data via multiple levels of indirection

**Concepts Covered:**  
- Pointer to pointer (`**`)  
- Multi-level dereferencing

---

### 4. 🧵 `arrays_pointer.c`  
**Purpose:**  
Demonstrates an **array of pointers to strings**.

**How It Works:**  
- Stores multiple strings using pointers  
- Iterates and prints them using pointer indexing

**Concepts Covered:**  
- String arrays using pointers  
- Traversing arrays of string literals

---

### 5. 🔢 `pointer_arrays.c`  
**Purpose:**  
Uses pointer arithmetic to access array elements.

**How It Works:**  
- Declares an integer array  
- Accesses elements using both array indexing and pointer arithmetic

**Concepts Covered:**  
- Pointer and array relationship  
- Arithmetic operations on pointers

---

### 6. 🔡 `print_character.c`  
**Purpose:**  
Prints each character of a string using a pointer.

**How It Works:**  
- Assigns pointer to string  
- Uses loop and pointer increment to access each character

**Concepts Covered:**  
- String traversal using pointers  
- Character-by-character output

---

## 🧠 Dynamic Memory Allocation (DMA)

### 7. 🗃️ `malloc_DMA.c`  
**Purpose:**  
Allocates memory for an integer array using `malloc()`.

**How It Works:**  
- Allocates space based on user input  
- Reads and displays values  
- Frees the memory

**Concepts Covered:**  
- `malloc()`  
- Dynamic arrays  
- Memory management

---

### 8. 🧮 `calloc_DMA.c`  
**Purpose:**  
Uses `calloc()` to allocate zero-initialized memory for a float array.

**How It Works:**  
- Allocates and initializes memory  
- Accepts and displays values  
- Frees memory after use

**Concepts Covered:**  
- `calloc()`  
- Memory initialization  
- Type-specific dynamic arrays

---

### 9. ➕ `realloc_DMA.c`  
**Purpose:**  
Resizes a dynamically allocated array using `realloc()`.

**How It Works:**  
- Starts with small dynamic array  
- Resizes it to accommodate more elements  
- Displays full list after expansion

**Concepts Covered:**  
- `realloc()`  
- Resizing arrays dynamically  
- Combining multiple DMA techniques

---

## ⚠️ Notes
- ✅ Always `free()` dynamically allocated memory to avoid memory leaks.
- ❗ Avoid using uninitialized or dangling pointers.
- 🧼 Use pointer checks (`if (ptr != NULL)`) after allocation.

---

## 🎯 Purpose and Learning Outcomes

These programs will help you:

- Understand how pointers work in C — referencing, dereferencing, and multi-level pointers
- Practice manipulating variables and arrays using pointers
- Grasp how strings and character arrays relate to pointers
- Use `malloc()`, `calloc()`, and `realloc()` to manage memory at runtime
- Write memory-efficient, pointer-based C programs

---
