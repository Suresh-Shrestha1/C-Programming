# 🧱 Chapter 8: Structures and Unions in C

This workspace contains several C programs demonstrating the use of **structures**, **unions**, **bit fields**, **pointers**, **arrays**, and **memory usage** in C programming. Each file includes a self-contained example with code and comments illustrating a specific concept.

Ideal for learners who want to understand how to organize complex data using structures and how unions manage memory efficiently.

---

## 📂 List of Programs

### 1. 📘 `structure.c`
**Purpose:**  
Defines a `Student` structure and displays roll number, name, and marks.

**How It Works:**  
- Declares a structure with multiple fields  
- Accepts user input  
- Uses a loop to print the marks

**Concepts Covered:**  
- Structure declaration  
- Accessing members  
- Basic input/output with structures

---

### 2. 🧾 `structure_array.c`
**Purpose:**  
Uses an **array of structures** to store details of multiple students.

**How It Works:**  
- Declares an array of `Student` structures  
- Takes input for each student  
- Prints student details using a loop

**Concepts Covered:**  
- Array of structures  
- Structure iteration  
- Batch input/output

---

### 3. 📚 `structure_pointer.c`
**Purpose:**  
Demonstrates how to use a **pointer to a structure**.

**How It Works:**  
- Declares a `Book` structure  
- Uses a pointer to access and display members

**Concepts Covered:**  
- Pointers and structures  
- `->` operator for member access  
- Efficient data handling

---

### 4. 🏢 `nested_structure.c`
**Purpose:**  
Illustrates how **nested structures** work.

**How It Works:**  
- Defines an `Employee` structure  
- Contains an inner `Address` structure  
- Displays complete details including address

**Concepts Covered:**  
- Structure inside another structure  
- Dot notation chaining  
- Grouping related data

---

### 5. ⚙️ `bit_field.c`
**Purpose:**  
Shows how to use **bit fields** for efficient storage.

**How It Works:**  
- Declares structure members with limited bits  
- Demonstrates compact data representation

**Concepts Covered:**  
- Bit field declaration  
- Memory optimization  
- Bit-level data storage

---

### 6. ✅ `structure_using_condition.c`
**Purpose:**  
Checks if a student has **passed or failed** based on marks using a structure.

**How It Works:**  
- Stores student marks  
- Applies condition to determine result  
- Displays pass/fail message

**Concepts Covered:**  
- Conditional logic with structures  
- Decision making  
- Data validation

---

### 7. 🧠 `structure_union_memory_use.c`
**Purpose:**  
**Compares memory usage** between a structure and a union.

**How It Works:**  
- Declares identical members in both structure and union  
- Prints `sizeof()` for both types

**Concepts Covered:**  
- Memory layout  
- Union vs structure memory  
- Resource efficiency

---
