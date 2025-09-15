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
