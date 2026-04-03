# ⚙️ C Data Structures & Algorithms

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![License](https://img.shields.io/badge/license-MIT-blue.svg?style=for-the-badge)

A clean, optimized, and highly organized collection of core data structures implemented entirely in C. 

This repository serves as a practical implementation guide for fundamental computer science concepts, focusing on memory management, pointers, and efficient algorithm design.

---

## 📂 What's Inside

The codebase is categorized by data structure to make navigation simple. Here is the layout of the repository:

~~~text
📦 c-data-structures-algorithms
 ┣ 📂 arrays
 ┃ ┣ 📜 array-operations.c
 ┃ ┗ 📜 array-queries.c
 ┣ 📂 linked-lists
 ┃ ┣ 📜 insert-beginning.c
 ┃ ┣ 📜 insert-end.c
 ┃ ┣ 📜 delete-beginning.c
 ┃ ┣ 📜 delete-end.c
 ┃ ┣ 📜 circular-linked-list.c
 ┃ ┗ 📜 basic-node-struct.c
 ┣ 📂 stacks
 ┃ ┣ 📜 stack-using-array.c
 ┃ ┣ 📜 stack-using-sll.c
 ┃ ┗ 📜 stack-using-dll.c
 ┣ 📂 queues
 ┃ ┣ 📜 queue-using-sll.c
 ┃ ┗ 📜 queue-using-dll.c
 ┗ 📂 basics
   ┗ 📜 c-structures.c
~~~

---

## 🚀 Getting Started

If you want to run these programs locally on your machine, you will need a C compiler (like `GCC`) installed.

**1. Clone the repository**
~~~bash
git clone https://github.com/mohd-ayan-dev/c-data-structures-algorithms.git
cd c-data-structures-algorithms
~~~

**2. Compile a specific file**
Navigate to the folder containing the file you want to run and compile it. For example, to run an array operation:
~~~bash
cd arrays
gcc array-operations.c -o array-operations
~~~

**3. Run the executable**
~~~bash
./array-operations
~~~

*(Note: This repository uses a `.gitignore` to keep out compiled `.exe` and `.o` files, ensuring only raw, readable source code is version controlled.)*

---

## 🛠️ Tech Stack
* **Language:** C
* **Concepts Covered:** Pointers, Dynamic Memory Allocation (`malloc`, `free`), Structs, Time Complexity optimization.

---

## 👨‍💻 About the Developer
Built by **Mohammed Ayan** *Engineer. Problem Solver. Data enthusiast.*

🔗 [Connect with me on LinkedIn](https://linkedin.com/in/mohammed-ayan-94ab6a1b6)
