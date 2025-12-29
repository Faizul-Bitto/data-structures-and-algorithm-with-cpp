<div align="center">

# 🚀 Data Structures and Algorithms with C++

**A comprehensive learning repository for mastering fundamental data structures and algorithms**

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-blue?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Active-success?style=for-the-badge)

---

*A comprehensive C++ learning repository that teaches fundamental data structures and algorithms through practical, hands-on examples. This repository includes working implementations, step-by-step explanations, and side-by-side comparisons of naive approaches versus optimized solutions, helping learners understand both the theoretical foundations and practical applications of computer science concepts.*

---

</div>

## 📋 Table of Contents

- [✨ Features](#-features)
- [📁 Repository Structure](#-repository-structure)
- [📚 Topics Covered](#-topics-covered)
  - [⏱️ Time Complexity](#️-001-time-complexity)
  - [📚 Standard Template Library](#-002-standard-template-library-stl)
  - [🔧 Data Structures Techniques](#-003-data-structures-techniques)
- [🎯 Algorithms](#-02-algorithms)
- [🔧 Prerequisites](#-prerequisites)
- [🚀 How to Use](#-how-to-use)
- [📖 Learning Path](#-learning-path)
- [💡 Tips for Learning](#-tips-for-learning)
- [🤝 Contributing](#-contributing)
- [📝 Notes](#-notes)
- [🎯 Goals](#-goals)

## ✨ Features

| Feature | Description |
|---------|-------------|
| 📝 **Complete Code Examples** | Fully functional C++ implementations for every topic |
| 📊 **Input/Output Files** | Test cases with corresponding input and output files for verification |
| 🎓 **Educational Focus** | Code structured for learning with clear, descriptive naming conventions |
| ⚡ **Optimization Comparisons** | Examples demonstrate both naive (TLE-prone) and optimized approaches |
| ⏱️ **Time Complexity Analysis** | Detailed documentation of time complexities for all operations |
| 📈 **Progressive Learning** | Content organized from basic concepts to advanced techniques |
| ▶️ **Ready to Run** | Pre-compiled executables (`.exe`) included for quick testing |

## 📁 Repository Structure

```
📦 data-structures-and-algorithm-with-cpp/
│
├── 📂 01-Data-Structures/
│   ├── ⏱️ 001-Time-Complexity/
│   │   ├── O(1) - Constant
│   │   ├── O(log N) - Logarithmic
│   │   ├── O(√N) - Square Root
│   │   ├── O(N) - Linear
│   │   ├── O(N log N) - Linearithmic
│   │   └── O(N²) - Quadratic
│   │
│   ├── 📚 002-Standard-Template-Library/
│   │   └── 📦 Vector/
│   │       ├── Initialization
│   │       ├── Capacity Functions
│   │       ├── Modifier Functions
│   │       ├── Element Access
│   │       └── Iterators
│   │
│   └── 🔧 003-Data-Structures-Techniques/
│       ├── 📊 Range Sum Query
│       └── 🔗 Singly Linked List
│
└── 📂 02-Algorithms/
    └── 🔍 001-Binary-Search/
        ├── Binary Search Algorithm
        └── Binary Search Problems
```

---

## 📚 Topics Covered

### 📂 01-Data-Structures

#### ⏱️ 001-Time-Complexity

Learn about algorithm efficiency with practical examples of different complexity classes:

| Complexity | Notation | Description | Example |
|------------|----------|-------------|---------|
| **Constant** | `O(1)` | Instant operations | Array access, arithmetic operations |
| **Logarithmic** | `O(log N)` | Efficient search algorithms | Binary search |
| **Square Root** | `O(√N)` | Moderate efficiency | Divisor finding, primality testing |
| **Linear** | `O(N)` | Single-pass algorithms | Linear search, array traversal |
| **Linearithmic** | `O(N log N)` | Efficient sorting | Merge sort, heap sort |
| **Quadratic** | `O(N²)` | Nested loop algorithms | Bubble sort, matrix multiplication |

**Square Root Complexity Topics:**
- 🔢 Basic square root complexity examples
- 🔍 Divisor finding problems
- ⚡ Optimized approaches using square root
- 🔄 Multiple variations of optimized solutions

**Each complexity class includes:**
- ✅ Practical C++ implementations
- 📥📤 Input/output test cases
- 📚 Reference document (`best-to-worst-complexity.txt`) comparing all complexity classes with numerical examples

#### 📚 002-Standard-Template-Library (STL)

##### 📦 Vector Container

Comprehensive coverage of the `std::vector` container:

<details>
<summary><b>1️⃣ Vector Initialization</b> (Click to expand)</summary>

- ✅ Empty vector creation
- ✅ Size-based initialization
- ✅ Value-based initialization
- ✅ Size and value initialization
- ✅ Copy from array
- ✅ Copy from another vector

</details>

<details>
<summary><b>2️⃣ Capacity Functions</b> (Click to expand)</summary>

| Function | Purpose | Time Complexity |
|----------|---------|-----------------|
| `size()` | Get current element count | `O(1)` |
| `max_size()` | Maximum possible size | `O(1)` |
| `capacity()` | Allocated memory capacity | `O(1)` |
| `clear()` | Remove all elements (keeps memory) | `O(N)` |
| `empty()` | Check if vector is empty | `O(1)` |
| `resize()` | Change vector size | `O(K)` |

</details>

<details>
<summary><b>3️⃣ Modifier Functions</b> (Click to expand)</summary>

| Function | Purpose | Time Complexity |
|----------|---------|-----------------|
| `assign()` | Assign vector to another vector | `O(N)` |
| `push_back()` | Add element at the end | `O(1)*` |
| `pop_back()` | Remove last element | `O(1)` |
| `insert()` | Insert at any position | `O(N+K)` |
| `erase()` | Delete from position | `O(N+K)` |
| `replace()` | Replace values using iterators | `O(N)` |
| `find()` | Search for values | `O(N)` |

\* Amortized constant time

</details>

<details>
<summary><b>4️⃣ Element Access</b> (Click to expand)</summary>

| Method | Purpose | Time Complexity |
|--------|---------|-----------------|
| `[]` | Access by index | `O(1)` |
| `at()` | Bounds-checked access | `O(1)` |
| `front()` | First element | `O(1)` |
| `back()` | Last element | `O(1)` |

</details>

<details>
<summary><b>5️⃣ Iterators</b> (Click to expand)</summary>

| Iterator | Points To | Time Complexity |
|----------|-----------|-----------------|
| `begin()` | First element | `O(1)` |
| `end()` | After last element | `O(1)` |

</details>

<details>
<summary><b>6️⃣ Input Handling</b> (Click to expand)</summary>

- ✅ Input with known size
- ✅ Input without size (dynamic)
- ✅ String input handling

</details>

> 📝 **Note:** Each topic includes documentation files (`.txt`) explaining function purposes, parameters, and time complexities.

#### 🔧 003-Data-Structures-Techniques

##### 📊 Range Sum Query

Demonstrates optimization techniques with side-by-side comparisons:

| Approach | Complexity | Result |
|----------|------------|--------|
| ❌ **Unoptimized** | `O(N*Q)` | Time Limit Exceeded (TLE) |
| ✅ **Optimized (Prefix Sum)** | `O(N+Q)` | Efficient solution |

**Topics Covered:**
- 🔴 Brute force solution (causing TLE)
- 🟢 Prefix sum technique for efficient range queries
- 📈 Performance comparison

##### 🔗 Singly Linked List

Complete implementation of a singly linked list with all fundamental operations:

<details>
<summary><b>Basic Operations</b></summary>

- ✅ Linked list creation and node definition
- ✅ Traversal and printing

</details>

<details>
<summary><b>Insertion Operations</b></summary>

- ✅ Insert at head
- ✅ Insert at tail (multiple variations)
- ✅ Insert at tail with null list handling
- ✅ Optimized tail insertion
- ✅ Insert at any position

</details>

<details>
<summary><b>Deletion Operations</b></summary>

- ✅ Delete from head
- ✅ Delete from tail
- ✅ Delete from any position

</details>

<details>
<summary><b>Advanced Operations</b></summary>

- ✅ Reverse printing
- ✅ Sorting using selection sort algorithm
- ✅ Dynamic input handling

</details>

> 💡 **Implementation:** All implementations use object-oriented approach with proper memory management.

### 🎯 02-Algorithms

#### 🔍 001-Binary-Search

##### Binary Search Algorithm

Complete implementation of the binary search algorithm with:
- ✅ Sorted array handling
- ✅ Search value implementation
- ✅ Found/not found logic

**Time Complexity:** `O(log N)`

##### Binary Search Problems

Problem-solving examples comparing approaches:

| Approach | Complexity | Performance |
|----------|------------|-------------|
| ❌ **Brute Force** | `O(N)` | Causes TLE |
| ✅ **Binary Search** | `O(log N)` | Efficient solution |

**Learning Points:**
- 📉 Why naive approaches fail
- 📈 Optimization techniques
- 🎯 Proper implementation methods

## 🔧 Prerequisites

| Requirement | Options |
|-------------|---------|
| **C++ Compiler** | GCC, Clang, or MSVC |
| **Text Editor/IDE** | VS Code, Code::Blocks, Dev C++, or any preferred editor |
| **Terminal/Command Prompt** | For compiling and running programs |

**Basic C++ Knowledge Required:**
- ✅ Variables and data types
- ✅ Control structures (loops, conditionals)
- ✅ Functions
- ✅ Basic understanding of pointers (for linked lists)

## 🚀 How to Use

### 📝 Compiling and Running Programs

#### Step 1: Navigate to Example Folder
```bash
cd 01-Data-Structures/001-Time-Complexity/01-Linear-Complexity-O-of-N
```

#### Step 2: Compile the C++ File

**Linux/Mac:**
```bash
g++ -o program linear-complexity-O-of-N.cpp
```

**Windows:**
```bash
g++ -o program.exe linear-complexity-O-of-N.cpp
```

#### Step 3: Run the Program

**Linux/Mac:**
```bash
./program < input.txt
```

**Windows:**
```bash
program.exe < input.txt
```

#### Step 4: Verify Output
Compare your output with the provided `output.txt` file

---

### ⚡ Using Pre-compiled Executables

Some examples include pre-compiled `.exe` files. You can run them directly:

```bash
./program.exe < input.txt
```

> 💡 **Tip:** Pre-compiled executables save compilation time for quick testing!

## 📖 Learning Path

Recommended study order for optimal learning:

```
┌─────────────────────────────────────────────────────────────┐
│                     🎓 LEARNING JOURNEY                      │
└─────────────────────────────────────────────────────────────┘
                              │
                              ▼
        ┌─────────────────────────────────────┐
        │  1️⃣ Time Complexity                │
        │  ⏱️ Understand algorithm efficiency │
        │  📊 Learn Big-O notation            │
        └──────────────┬──────────────────────┘
                       │
                       ▼
        ┌─────────────────────────────────────┐
        │  2️⃣ STL Vector                     │
        │  📦 Learn container basics          │
        │  🔧 Practice common operations      │
        └──────────────┬──────────────────────┘
                       │
                       ▼
        ┌─────────────────────────────────────┐
        │  3️⃣ Optimization Techniques        │
        │  ⚡ Prefix sum                      │
        │  📈 Compare approaches              │
        └──────────────┬──────────────────────┘
                       │
                       ▼
        ┌─────────────────────────────────────┐
        │  4️⃣ Singly Linked List             │
        │  🔗 Pointer manipulation            │
        │  💾 Memory management               │
        └──────────────┬──────────────────────┘
                       │
                       ▼
        ┌─────────────────────────────────────┐
        │  5️⃣ Binary Search                  │
        │  🔍 Divide-and-conquer              │
        │  ✅ Problem solving                 │
        └─────────────────────────────────────┘
```

### 📚 Detailed Steps

<details>
<summary><b>Step 1: Time Complexity</b> (`01-Time-Complexity`)</summary>

- ✅ Understand algorithm efficiency
- ✅ Learn to analyze code performance
- ✅ Get familiar with Big-O notation

</details>

<details>
<summary><b>Step 2: STL Vector</b> (`02-Standard-Template-Library/Vector`)</summary>

- ✅ Learn container basics
- ✅ Understand memory management
- ✅ Practice common operations
- ✅ Study iterator usage

</details>

<details>
<summary><b>Step 3: Optimization Techniques</b> (`03-Data-Structures-Techniques`)</summary>

- ✅ Prefix sum for range queries
- ✅ Compare naive vs optimized solutions

</details>

<details>
<summary><b>Step 4: Singly Linked List</b> (`03-Data-Structures-Techniques/Singly-Linked-List`)</summary>

- ✅ Understand pointer manipulation
- ✅ Learn dynamic memory allocation
- ✅ Practice insertion and deletion operations
- ✅ Master linked list algorithms

</details>

<details>
<summary><b>Step 5: Binary Search</b> (`02-Algorithms/Binary-Search`)</summary>

- ✅ Learn divide-and-conquer approach
- ✅ Practice binary search implementation
- ✅ Solve problems efficiently

</details>

## 💡 Tips for Learning

| 💡 Tip | 📝 Description |
|--------|---------------|
| 📚 **Read Documentation** | Check `.txt` files in each section for detailed explanations |
| 🔄 **Compare Approaches** | Pay special attention to examples showing both naive and optimized solutions |
| 🧪 **Experiment** | Modify the code, change inputs, and observe the results |
| ✏️ **Practice** | Try solving similar problems on your own |
| ⏱️ **Understand Complexity** | Always consider the efficiency of your solutions |
| 💻 **Code Along** | Type the code yourself instead of just reading |
| 🐛 **Debug** | Understand error messages and learn from mistakes |

## 🤝 Contributing

Contributions are welcome! If you'd like to:
- ➕ Add more examples
- 🔧 Improve existing code
- 🐛 Fix issues
- 📝 Improve documentation

Please feel free to submit a pull request!

---

## 📝 Notes

> ℹ️ **Important Information:**

- 📚 This repository is designed for **educational purposes**
- ✅ All code examples follow **standard C++ practices**
- 📥📤 **Input/output files** are provided for testing
- 🔄 Examples include both **naive and optimized** solutions to demonstrate the importance of algorithm efficiency
- ⏱️ **Time complexity notations** are provided for each operation where applicable

---

## 🎯 Goals

| Goal | Description |
|------|-------------|
| 🎓 **Education** | Provide clear, understandable implementations |
| 🔬 **Application** | Show practical applications of theoretical concepts |
| ⚡ **Optimization** | Demonstrate optimization techniques |
| 🧩 **Problem Solving** | Help learners build strong problem-solving skills |
| 💼 **Preparation** | Prepare for competitive programming and technical interviews |

---

<div align="center">

### 🌟 Star this repository if you find it helpful! ⭐

**Happy Learning! 🚀**

Made with ❤️ for learners

</div>

