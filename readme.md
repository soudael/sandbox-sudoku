# 🧩 Sudoku (Terminal Game)

## 📝 About the Project

This is a classic **Sudoku** game designed to run directly in the terminal.  
Written in **C++17**, using only standard libraries.  
Currently supported only on **Windows**.

> 🔧 **Project Status:** Incomplete — no further development planned  
> ✅ Functional board gameplay  
> ✅ Menu options working fine

---

## 📦 Features

- ✅ Keyboard menu navigation
- ✅ Random board generation following classic Sudoku rules
- ✅ Visual gameplay feedback

---

## 🛠️ Installation

You can run this project in two ways:

---

### 📦 Option 1: Download Executable

Simply download the precompiled `.exe` included in the repository and run it directly.  
No need to build anything yourself — just double-click and play!

> ⚠️ **Warning:**  
> When running the `.exe`, Windows might show a security alert saying "this file might put your PC at risk".  
> Click **'More info'** and then **'Run anyway'**.

---

### 🔧 Option 2: Build from Source

Download the source code and compile it manually using the following command inside the `Sudoku` directory:

```bash
g++ src\stringlibrary.cpp src\lobbyrendering.cpp src\generatenumbers.cpp src\gameinterface.cpp src\main.cpp src\globalfunctions.cpp src\specialselections.cpp -I include -o sudoku.exe
```
<sub>If you prefer another method to compile, feel free to use your own 😉</sub>

---

## 🎮 Gameplay Guide

### 📋 Menu *(under development)*

- Use `W`/`S` or **arrow keys (↑/↓)** to navigate
- Press **`ENTER`** or **`SPACEBAR`** to select an option

### 🔢 Gameplay *(under development)*

- Use `WASD` or **arrow keys** to move the cursor
- Choose a number from **1 to 9** to fill in the selected square
- Press `P` to open the notes list for the currently selected cell *(visible but not functional)*

---

## 🗂️ Project Structure

```
│--.vscode              // Ignore this folder
│--build                // Build files (CMake 4.0.0-rc2)
│--include              // Header files
│   ├── GameInterface.h
│   ├── GenerateNumbers.h
│   ├── GlobalFunctions.h
│   ├── LobbyRendering.h
│   ├── SourceLibraryGroup.h
│   ├── SourceLibraryGroup.h
│   └── StringLibrary.Group.h
│--src                  // Source code
│   ├── gameinterface.cpp
│   ├── generatenumbers.cpp
│   ├── globalfunctions.cpp
│   ├── lobbyrendering.cpp
│   ├── main.cpp
│   ├── specialselections
│   └── stringlibrary.cpp
│--CMakeLists.txt       // CMake configuration file
│--README.md
└--sudoku.exe           // Executable file
```

---

## 📌 Final Notes

> ℹ️ This project will only be developed to deliver a *(incomplete)* standard classic Sudoku experience.  
> Once the core gameplay is complete, development will be finished.

> 🎯 **Next project:**  
> A full website using **HTML**, **CSS**, and **JavaScript**, featuring multiple board games such as:
> - Chess ♟️  
> - Sudoku 🧠  
> - Tic-Tac-Toe ❌⭕  
> - Solitaire 🃏  
> - Go ⚫⚪  
> and more!

---

## 📬 Contact

- 📸 Instagram: [@solynael](https://instagram.com/solynael)
- 💼 LinkedIn: [Carlos Daniel](https://www.linkedin.com/in/carlos-daniel-costa-da-silva-746399353/)
- 📧 Email: [carlosdaelcds@gmail.com](mailto:carlosdaelcds@gmail.com)
