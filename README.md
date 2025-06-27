# 🚀 Problem Solving with C++ (Multi-Executable Project)

This repository contains a growing collection of C++ solutions to algorithmic problems (such as LeetCode, Codeforces, etc.), each organized in its own folder with a dedicated `main.cpp`.

The project is fully automated with **CMake** to compile each problem folder as a separate executable.

---

## 📁 Project Structure

  ```plaintext
      .
      
      ├── CMakeLists.txt

      ├── problems
      
      | ├── p-2016_maximum_difference_between_increasing_elements/
        
      | │ ├── main.cpp
        
      | │ ├── solution.cpp
        
      | │ └── solution.h
        
      | ├── p-XXXX_another_problem/
        
      | │ ├── main.cpp
        
      | │ └── ...
  
  ```
---

## 💡 Features

  - ✅ Uses CMake to automatically detect and build all problems  
  - ✅ One executable per problem folder  
  - ✅ Works with **Visual Studio**, **VS Code**, or any CMake-supported toolchain  

---

## 🔧 How to Build & Run

  You have several options depending on your environment:

---

### 🪟 Option 1: Visual Studio 2022+

1. **Clone the repository:**

   ```bash
   git clone https://github.com/AbdelrahmanNoaman/PS.git
   cd PS

2. **Open the project:**

    - Open the generated `ProblemSolving.sln` file in Visual Studio.

3. **Set the startup project:**

    **In Solution Explorer:**

    - Right-click the project you want to run (e.g., `p-2016_maximum_difference_between_increasing_elements_exec`)

    - Click **“Set as Startup Project”**

4. **Run the program:**

    - Press `Ctrl + F5` or click the green "Start" button.

---

### 🪟 Option 2: Visual Studio Code

#### **Prerequisutes:**

  - CMake Tools extension
  - A compiler (like GCC or MSVC)
  - Ninja or Make (optional)

#### **Steps:**  

  1. **Clone the repository:**
  
     ```bash
     git clone https://github.com/AbdelrahmanNoaman/PS.git
     cd PS
     code .
  
  2. **Configure the project:**
  
      - Click on `CMake: [Debug]` in the blue status bar → Select a kit (your compiler).
  
  3. **Build a specific executable:**
  
      - From the CMake extension panel, pick and build the target you want to run.
  
  4. **Run the executable:**
  
      - You can run it from the **CMake extension**, **Terminal**, or configure a launch task in `.vscode/launch.json.`

---

### 🧑‍💻 Option 3: CMake via Command Line (Linux, Mac, or Windows)

**Prerequisites:**

- CMake ≥ 3.10  
- A C++ compiler (`g++`, `clang++`, or MSVC)

**Steps:**

  ```bash
    git clone https://github.com/AbdelrahmanNoaman/PS.git
    cd PS
    
    # Create a build directory
    mkdir build && cd build
    
    # Generate the build system
    cmake ..
    
    # Build all executables
    cmake --build .
    
    # Run a specific executable
    ./p-2016_maximum_difference_between_increasing_elements_exec
  ```
  🪟 **On Windows**, the executable will be located in:
  
  - `build/Debug`
  
  - or `build/x64/Debug`
    
---

## 🧩 Adding New Problems

To add a new problem to the project, follow these steps:

1. **Create a new folder** at the root of the project, following a consistent naming pattern like: `p-2025_problem_name/` ,where 2025 here represents the number of problem in LeetCode.

2. **Inside the folder, create the following files:**
   
     ```plaintext
         p-2025_problem_name/
     
         ├── main.cpp # MUST contain a main() function

         ├── solution.cpp # Your class or implementation logic

         ├── solution.h # Header for your class
      ```
   
4. **Include the header and use your class in `main.cpp`:**

      ```cpp
      #include <iostream>
      #include "solution.h"
      
      int main() {
          Solution s;
          std::cout << s.test() << std::endl;
          return 0;
      }
      ```
4. **Build the project:**
     If you're using CMake, all folders with .cpp files containing a main() function will be compiled automatically into separate executables.
   
     Just re-run CMake:
     ```bash
      cd build
      cmake ..
      cmake --build .

5. **Run your new problem's executable**

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).

---

## ⭐️ Support

If you found this repo helpful, feel free to star it ⭐ and share it with others!

---

## 👤 Author

<table>
  <td align="center"><a href="https://github.com/AbdelrahmanNoaman"><img src="https://github.com/AbdelrahmanNoaman.png" width="180;" alt=""/></a>
    <br />
      <a href="https://github.com/AbdelrahmanNoaman">
        <b>Abdelrahman Noaman</b>
      </a>
    <br />
  </td>
</table>

---

Made with ❤️ for learning and solving problems in C++



