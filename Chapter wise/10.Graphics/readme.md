# 🎨 Chapter 10: Graphics Programs in C

This folder contains simple C programs demonstrating basic graphics functions using the `graphics.h` library. Each program draws different shapes or displays text using graphical output.

These examples are ideal for learning how to use graphics in C, especially in **Turbo C++**, **Borland C**, or environments that support **`graphics.h`**.

**This file must be written as a C++ file, not a C file. Therefore, its file extension should be `.cpp`.**

---

## ⚙️ Prerequisites

- ✅ Turbo C++ or Borland C with `graphics.h` support  
- 🖥️ DOSBox (for running on modern Windows systems)  
- 📁 BGI driver and EGAVGA.BGI path setup (usually auto-configured in Turbo C)

---

## 📂 List of Programs

### 1. ⚪ `Circle.cpp`
**Purpose:**  
Draws a simple circle on the screen.

**Function Used:**  
`circle(x, y, radius)`

**Example:**  
Draws a circle at coordinates `(175, 175)` with radius `70`.

---

### 2. 🌀 `Concentric_Circle.cpp`
**Purpose:**  
Draws **three concentric circles** (same center, increasing radius).

**Function Used:**  
`circle(x, y, radius)`

**Example:**  
Circles centered at `(300, 300)` with radii `70`, `110`, and `150`.

---

### 3. ➕ `cross.cpp`
**Purpose:**  
Draws a cross using two intersecting lines.

**Function Used:**  
`line(x1, y1, x2, y2)`

**Example:**  
Horizontal and vertical lines intersecting at `(160, 160)`.

---

### 4. 🥚 `Ellipse.cpp`
**Purpose:**  
Draws a single ellipse.

**Function Used:**  
`ellipse(x, y, start_angle, end_angle, x_radius, y_radius)`

**Example:**  
Centered at `(250, 250)` with horizontal radius `120` and vertical radius `70`.

---

### 5. 💬 `Ellipse_text.cpp`
**Purpose:**  
Draws an ellipse and places text inside it.

**Functions Used:**  
- `ellipse(...)`  
- `outtextxy(x, y, "text")`

**Example:**  
Ellipse at `(220, 220)`, text "Hello, World!" displayed at `(180, 180)`.

---

### 6. 📏 `Line.cpp`
**Purpose:**  
Draws a straight line.

**Function Used:**  
`line(x1, y1, x2, y2)`

**Example:**  
Line drawn from `(25, 110)` to `(220, 110)`.

---

### 7. ▭ `rectangle.cpp`
**Purpose:**  
Draws a rectangle.

**Function Used:**  
`rectangle(left, top, right, bottom)`

**Example:**  
Rectangle from `(200, 90)` to `(390, 200)`.

---

### 8. 🌈 `Shape_background_color.cpp`
**Purpose:**  
Draws multiple shapes with a colored background.

**Functions Used:**  
- `setbkcolor(color)`  
- `cleardevice()`  
- `setcolor(color)`  
- `circle(...)`, `rectangle(...)`, `ellipse(...)`

**Example:**  
Blue background with white circle, rectangle, and ellipse.

---

### 9. 🔺 `Triangle.cpp`
**Purpose:**  
Draws a triangle using a polygon.

**Function Used:**  
`drawpoly(points_count, points_array)`

**Example:**  
Triangle with vertices at `(150, 150)`, `(200, 80)`, `(250, 150)`.

---

## ▶️ How to Run the Code in Turbo C++:

1. Open any `.cpp` file in **Turbo C++** or compatible IDE.
2. Compile the code.
3. Run the program.
4. A **graphics window** will open displaying the shape(s).
5. Press any key to close the window.

---

## ▶️ How to Use `graphics.h` in Dev C++ (Using WinBGI) 🎨

### 1. **Download WinBGI** 🖥️
- Go to [WinBGI website](https://winbgim.codecutter.org/) and download the library.

### 2. **Install WinBGI** 📂
- Extract the downloaded files to a folder, e.g., `C:\WinBGI`.

### 3. **Set Up Dev C++** ⚙️
1. Open **Dev C++**.
2. Go to `Tools > Compiler Options`.
3. In the **Directories** tab, add the following:
   - **Include Directories**: `C:\WinBGI\include`
   - **Library Directories**: `C:\WinBGI\lib`
4. In the **Linker** tab, add `winbgim.lib`:
   - Path: `C:\WinBGI\lib\winbgim.lib`

### 4. **Write Your Code** 📝
Example Code:
```cpp
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\WinBGI\\BGI");  // Path to BGI folder

    // Draw graphics
    rectangle(100, 100, 400, 400);  // Rectangle
    circle(250, 250, 50);           // Circle

    getch();  // Wait for key press
    closegraph();  // Close graphics
    return 0;
}
```

### 5. Compile and Run 🚀
- Press F9 to compile.
- Press Ctrl+F10 to run and see the graphics.

---

## 📝 Notes

- You can **modify the coordinates and colors** to experiment with different shapes and designs.
- Ensure your compiler has **`graphics.h`** configured correctly.
- These programs are mostly **compatible with Turbo C++**, which uses **BGI (Borland Graphics Interface)**.

---

## 🧠 Purpose and Learning Outcomes

By practicing with these programs, you will learn:

- How to initialize the graphics mode
- How to draw basic shapes (circle, line, rectangle, triangle, ellipse)
- How to combine text and graphics
- How to work with graphical output in legacy C environments

---

**END OF DOCUMENT** 
---
