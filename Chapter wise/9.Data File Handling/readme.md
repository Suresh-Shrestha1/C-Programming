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

### 4. ➕ `append_text.c`
**Purpose:**  
Appends a new line to `data.txt` using append (`a`) mode.

**How It Works:**  
- Opens file in append mode  
- Adds content without overwriting  
- Writes new line at the end

**Concepts Covered:**  
- `fopen()` with `"a"`  
- Appending data safely  
- File extension handling

---

### 5. 🔄 `update_text.c`
**Purpose:**  
Updates the beginning of `data.txt` using read/update (`r+`) mode.

**How It Works:**  
- Opens the file in `"r+"` mode  
- Moves cursor to beginning  
- Overwrites initial part of the file

**Concepts Covered:**  
- File update in-place  
- Cursor positioning  
- Combined reading and writing

---

## 🔁 Combined Read/Write and Append Operations

### 6. 📝🔍 `write_read.c`
**Purpose:**  
Creates `file1.txt` using `"w+"` mode, writes to it, then reads content.

**How It Works:**  
- Writes data  
- Rewinds the file  
- Reads from beginning

**Concepts Covered:**  
- `w+` mode for full access  
- `rewind()` or `fseek()` usage  
- Writing then reading

---

### 7. 🛠️ `update_read.c`
**Purpose:**  
Opens `file1.txt` in `"r+"` mode, updates content, then reads.

**How It Works:**  
- Overwrites part of the file  
- Displays updated contents

**Concepts Covered:**  
- File cursor control  
- Overwriting content safely  
- In-place file update

---

### 8. ➕🔍 `append_read.c`
**Purpose:**  
Appends new data and reads file using `"a+"` mode.

**How It Works:**  
- Appends data  
- Moves cursor back to read  
- Displays entire file content

**Concepts Covered:**  
- `a+` file mode  
- `fseek()` to start  
- Reading after appending

---

## 💾 Binary File Operations with Structures

### 9. 📚 `write_read_structure_data.c`
**Purpose:**  
Writes a `Student` structure to a binary file and reads it back.

**How It Works:**  
- Uses `fwrite()` to write struct  
- Uses `fread()` to read back  
- Displays structure data

**Concepts Covered:**  
- Binary file access  
- Struct I/O with files  
- `fwrite()` / `fread()`

---

### 10. 🎯 `random_access.c`
**Purpose:**  
Performs random access to records in a binary file using `fseek()`.

**How It Works:**  
- Writes multiple student records  
- Jumps to second record using offset  
- Reads and displays that record

**Concepts Covered:**  
- `fseek()` for random access  
- Calculating byte offsets  
- Binary file manipulation

---

## 📁 Data Files Used

| File Name      | Purpose                                      |
|----------------|----------------------------------------------|
| `data.txt`     | Used for basic text read/write/append tests |
| `file1.txt`    | Used for read-write-append combined modes    |
| `student.dat`  | Used for storing and accessing binary records|

---

## ✅ Summary of Concepts

These programs cover:

- 📄 Text file operations: `w`, `r`, `a`, `r+`, `w+`, `a+`
- 🔁 Combined reading and writing modes
- 💾 Binary file handling with structures
- 🎯 Random access using `fseek()` and `ftell()`
- 📐 File pointer manipulation
- 🧹 File closing and error checking

---

## 🎯 Purpose and Learning Outcomes

You will learn to:

- Create, read, write, and update files in C
- Choose the correct file mode for your task
- Understand the differences between text and binary file I/O
- Manipulate file pointers for efficient file navigation
- Store and retrieve structured data in binary form

---
