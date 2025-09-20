## "For proper and well-organized documentation, a README.md file has been created inside each folder."

---

# C-Programming
Welcome to the **C Programming Practice Repository**!  
This repo contains lots of **examples, exercises, and mini-projects**, organized in two helpful ways:  

- 📖 **Chapter wise** → Learn by topics/chapters (Variables, Loops, Functions, etc.)  
- 🏫 **Class wise** → Learn by classroom sessions in sequence

**This structure helps students follow along with their coursework while also providing topic-based reference material.**

---

## 🌟 Features  

- 📑 **Organized Learning Paths** → Pick "Chapter wise" if you prefer topic discipline, or "Class wise" if you’re keeping pace with actual lectures.  
- 🖥️ **Hands-On Code Samples** → Each folder includes `.c` source files for practice.  
- 💡 **Progressive Difficulty** → Start with the basics and smoothly level up to tricky advanced programs.  
- 🤝 **Beginner-Friendly** → Code is kept clean and commented where necessary.  

---

## 📂 Repository Structure
```
🗂️ C-Programming/
├── 📘 Chapter wise/
│   ├── 📄 Chapter 1 - Operators and Expressions
│   ├── 📄 Chapter 2 - Input and Output
│   ├── 📄 Chapter 3 - Control Structures
│   ├── 📄 Chapter 4 - Arrays
│   ├── 📄 Chapter 5 - String Handling
│   ├── 📄 Chapter 6 - User Defined Function
│   ├── 📄 Chapter 7 - Pointers
│   ├── 📄 Chapter 8 - Structure
│   ├── 📄 Chapter 9 - Data File Handling
│   └── 📄 Chapter 10 - Graphics
├── 🎒 Class wise/
│   ├── 📝 Class 1
│   ├── 📝 Class 2
│   ├── 📝 Class 3
│   ├── 📝 Class 4
│   ├── 📝 Class 5
│   ├── 📝 Class 6
│   ├── 📝 Class 7
│   ├── 📝 Class 8
│   └── 📝 Class 9
└── 📋 README.md
```

---

### ✨ Folders Explained  

- **Chapter wise**  
  Structured like a textbook 📖. Each folder dives deep into concepts step by step, starting from basics and moving toward advanced topics.  

- **Class wise**  
  Reflects a classroom curriculum 🎓. Great if you are syncing your studies with lectures or prefer a more session-based approach to learning.  

---

## 🛠️ Prerequisites

<div align="center">
  
  ![Prerequisites](https://img.shields.io/badge/Prerequisites-Required%20Tools-orange?style=for-the-badge&logo=tools&logoColor=white)
  
</div>

To work with the programs in this repository, ensure you have the following tools installed:

---

### 🔧 Required Tools

#### 📦 **C Compiler**
<div align="left">
  
  ![GCC](https://img.shields.io/badge/GCC-Recommended-success?style=flat-square&logo=gnu&logoColor=white)
  ![Clang](https://img.shields.io/badge/Clang-Alternative-blue?style=flat-square&logo=llvm&logoColor=white)
  ![Compiler](https://img.shields.io/badge/Any%20C%20Compiler-Compatible-lightgray?style=flat-square)
  
</div>

Choose one of the following compilers:
- **🟢 GCC** (GNU Compiler Collection) - *Recommended*
- **🔵 Clang** - Fast and modern
- **⚪ MSVC** - For Windows users
- **🟡 TCC** - Tiny C Compiler for quick testing

---

#### 💻 **Text Editor/IDE**
<div align="left">
  
  ![VS Code](https://img.shields.io/badge/VS%20Code-007ACC?style=flat-square&logo=visual-studio-code&logoColor=white)
  ![Code::Blocks](https://img.shields.io/badge/Code::Blocks-41AD48?style=flat-square&logo=codeblocks&logoColor=white)
  ![Dev-C++](https://img.shields.io/badge/Dev--C++-00599C?style=flat-square&logo=cplusplus&logoColor=white)
  ![Vim](https://img.shields.io/badge/Vim-019733?style=flat-square&logo=vim&logoColor=white)
  ![Sublime](https://img.shields.io/badge/Sublime-FF9800?style=flat-square&logo=sublime-text&logoColor=white)
  
</div>

| Editor/IDE | Platform | Features | Difficulty |
|------------|----------|----------|------------|
| **🎨 VS Code** | Cross-platform | Extensions, IntelliSense, Debugging | ⭐ Beginner-friendly |
| **📘 Code::Blocks** | Cross-platform | Built-in compiler, Project management | ⭐ Beginner-friendly |
| **🔷 Dev-C++** | Windows | Lightweight, Simple interface | ⭐ Beginner-friendly |
| **🌿 Vim/Emacs** | Cross-platform | Powerful, Customizable | ⭐⭐⭐ Advanced |
| **🟠 CLion** | Cross-platform | Professional IDE, Advanced debugging | ⭐⭐ Intermediate |

---

#### 🖥️ **Operating System**
<div align="left">
  
  ![Windows](https://img.shields.io/badge/Windows-0078D6?style=flat-square&logo=windows&logoColor=white)
  ![Linux](https://img.shields.io/badge/Linux-FCC624?style=flat-square&logo=linux&logoColor=black)
  ![macOS](https://img.shields.io/badge/macOS-000000?style=flat-square&logo=apple&logoColor=white)
  
</div>

Compatible with all major operating systems:

| OS | Installation Method | Package Manager |
|----|-------------------|-----------------|
| **🪟 Windows** | MinGW, Cygwin, WSL | `winget`, `chocolatey` |
| **🐧 Linux** | Native GCC | `apt`, `yum`, `pacman` |
| **🍎 macOS** | Xcode Command Line Tools | `brew` |

---

#### 🔄 **Version Control**
<div align="left">
  
  ![Git](https://img.shields.io/badge/Git-F05032?style=flat-square&logo=git&logoColor=white)
  ![GitHub](https://img.shields.io/badge/GitHub-181717?style=flat-square&logo=github&logoColor=white)
  
</div>

- **Git** - For cloning, version control, and collaboration
- **GitHub Desktop** *(Optional)* - GUI alternative for Git

---

### ⚡ Quick Setup Guide

#### 🪟 **Windows Setup**
```powershell
# Install using Chocolatey
choco install mingw gcc-arm-embedded vscode git

# Or using winget
winget install GnuWin32.Make
winget install Microsoft.VisualStudioCode
winget install Git.Git
```

#### 🐧 **Linux Setup**
```bash
# Ubuntu/Debian
sudo apt update
sudo apt install build-essential gcc git

# Fedora
sudo dnf install gcc gcc-c++ make git

# Arch
sudo pacman -S base-devel gcc git
```

#### 🍎 **macOS Setup**
```bash
# Install Xcode Command Line Tools
xcode-select --install

# Using Homebrew
brew install gcc git
brew install --cask visual-studio-code
```

---

### ✅ Verification

After installation, verify your setup:

<table>
<tr>
<td>

#### 📋 Check Installations
```bash
# Check GCC version
gcc --version

# Check Git version
git --version

# Check Make (if installed)
make --version
```

</td>
<td>

#### ✨ Expected Output
```
gcc (GCC) 11.2.0
git version 2.34.1
GNU Make 4.3
```

</td>
</tr>
</table>

---

### 🎯 Recommended Setup

<div align="center">

| Component | Recommended Option | Why? |
|-----------|-------------------|------|
| **Compiler** | GCC 11+ | Wide compatibility, extensive documentation |
| **Editor** | VS Code | Free, extensible, great C/C++ support |
| **OS** | Linux/WSL | Native development environment |
| **Git** | Latest stable | Better features and security |

</div>

---

### 📚 Additional Resources

<div align="center">

### 📖 Installation Guides
[![GCC Guide](https://img.shields.io/badge/📄-GCC%20Installation%20Guide-blue?style=for-the-badge)](https://gcc.gnu.org/install/)
[![VS Code](https://img.shields.io/badge/📄-VS%20Code%20C/C++%20Setup-blue?style=for-the-badge)](https://code.visualstudio.com/docs/languages/cpp)
[![Git Basics](https://img.shields.io/badge/📄-Git%20Basics-blue?style=for-the-badge)](https://git-scm.com/book)

---

 #### 💡 **Pro Tip**
 > Start with VS Code + GCC for the smoothest experience!

🚀 **Ready to start coding?** Navigate to the [Chapter-wise](#) or [Class-wise](#) folders!

</div>

---

## 🚀 Getting Started

### 1️⃣ Clone the Repository
```bash
git clone https://github.com/Suresh-Shrestha1/C-Programming.git
cd C-Programming
```

### 2️⃣ Navigate to Your Desired Section
```bash
# For topic-based learning
cd "Chapter wise/Chapter 1"

# For class materials
cd "Class wise/Class 1"
```

### 3️⃣ Compile and Run
```bash
gcc program_name.c -o program_name
./program_name
```

---

## 📚 Topics Covered

<div align="center">

| 🌟 Fundamentals | 🔥 Intermediate | 💪 Advanced |
|:---------------:|:---------------:|:-----------:|
|  Expression | Functions & Recursion | File Handling |
| Operators | Arrays & Strings | Dynamic Memory |
| Control Flow | Pointers | Data Structures (Not covered) |
| Input/Output | Structures | Preprocessor |

</div>

---

## 💡 How to Use This Repository

### 🎓 For Students
> - Use **Class wise** folder to follow your course curriculum
> - Practice with examples after each class
> - Use the **Chapter Wise** structure to find specific topics

### 📖 For Self-Learners
> - Start with Chapter 1 and progress sequentially
> - Try modifying programs to understand concepts
> - Challenge yourself with exercises

---

## 🤝 Contributing

We love contributions! Here's how you can help:

1. 🍴 **Fork** the repository
2. 🌿 **Create** a new branch (`git checkout -b feature/NewProgram`)
3. 📝 **Add** your program with comments
4. 💾 **Commit** changes (`git commit -m 'Add: Program description'`)
5. 📤 **Push** to branch (`git push origin feature/NewProgram`)
6. 🔄 **Create** a Pull Request

### 📋 Contribution Guidelines
- ✅ Add clear comments
- ✅ Follow naming conventions
- ✅ Place in appropriate folders
- ✅ Test before submitting

---

## 💻 Code Style
- Use meaningful variable names
- Add comments for complex logic
- Follow consistent indentation (4 spaces)
- Include a header comment with program description

### 📝 Example Contribution Format
```c
/*
 * Program: program_name.c
 * Description: Brief description of what the program does
 * Author: Your Name
 * Date: YYYY-MM-DD
 */

#include <stdio.h>

int main() {
    // Your code here
    return 0;
}
```

---

## 📚 Recommended Books
- "The C Programming Language" by K&R
- "C Programming: A Modern Approach" by K.N. King
- "Head First C" by David Griffiths

---

## 📢 Stay Curious  

> "Learning C is like learning the alphabet of programming. Master it, and every other language starts looking like a cousin." 👩‍💻✨  

<div align="center">
  
  ### ⭐ Star this repository if you find it helpful!
  Happy Coding! 💻🚀  
  Made with ❤️ by [Suresh Shrestha](https://github.com/Suresh-Shrestha1)
  
</div>

---
