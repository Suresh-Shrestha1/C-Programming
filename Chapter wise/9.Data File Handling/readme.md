# 📂 Chapter 9: Data File Handling in C

This workspace contains various C programs that demonstrate **file handling operations** in C, including reading, writing, updating, appending, and performing random access on both **text** and **binary files**.

Perfect for learners who want to understand how to work with files in real-world C programming scenarios.

---

## 📝 Text File Operations

### 1. ✍️ `write_text.c`
**Purpose:**  
Writes a line of text to `data.txt` using write (`w`) mode.

**How It Works:**  
- Opens the file in write mode  
- Takes input from the user  
- Writes to the file  
- Overwrites any existing content

**Concepts Covered:**  
- `fopen()` with `"w"`  
- `fprintf()` or `fputs()`  
- File closing with `fclose()`

---

### 2. 📖 `read_text.c`
**Purpose:**  
Reads and displays content of `data.txt` character by character.

**How It Works:**  
- Opens the file in read mode  
- Uses `fgetc()` to read each character  
- Prints characters until EOF

**Concepts Covered:**  
- `fgetc()`  
- End-of-file detection  
- Character-level file reading

---

### 3. 📄 `read_text_line_by_line.c`
**Purpose:**  
Reads `data.txt` line by line using `fgets()`.

**How It Works:**  
- Uses a buffer to store each line  
- Reads and prints lines until EOF

**Concepts Covered:**  
- `fgets()` for line input  
- Buffer management  
- Text file processing

---
