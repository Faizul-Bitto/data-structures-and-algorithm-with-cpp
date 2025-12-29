# Data Structures and Algorithms with C++

A comprehensive C++ learning repository that teaches fundamental data structures and algorithms through practical, hands-on examples. This repository includes working implementations, step-by-step explanations, and side-by-side comparisons of naive approaches versus optimized solutions, helping learners understand both the theoretical foundations and practical applications of computer science concepts.

## 📋 Table of Contents

- [Features](#features)
- [Repository Structure](#repository-structure)
- [Topics Covered](#topics-covered)
- [Prerequisites](#prerequisites)
- [How to Use](#how-to-use)
- [Learning Path](#learning-path)
- [Contributing](#contributing)

## ✨ Features

- **Complete Code Examples**: Each topic includes fully functional C++ implementations
- **Input/Output Files**: Test cases with corresponding input and output files for verification
- **Educational Focus**: Code is structured for learning with clear, descriptive naming conventions
- **Optimization Comparisons**: Many examples demonstrate both naive (TLE-prone) and optimized approaches
- **Time Complexity Analysis**: Detailed documentation of time complexities for all operations
- **Progressive Learning**: Content organized from basic concepts to advanced techniques
- **Ready to Run**: Pre-compiled executables (`.exe`) included for quick testing

## 📁 Repository Structure

```
data-structures-and-algorithm-with-cpp/
│
├── 01-Data-Structures/
│   ├── 001-Time-Complexity/
│   ├── 002-Standard-Template-Library/
│   └── 003-Data-Structures-Techniques/
│
└── 02-Algorithms/
    └── 001-Binary-Search/
```

## 📚 Topics Covered

### 01-Data-Structures

#### 001-Time-Complexity

Learn about algorithm efficiency with practical examples of different complexity classes:

- **O(1) - Constant Time**: Instant operations
- **O(log N) - Logarithmic Time**: Efficient search algorithms
- **O(√N) - Square Root Time**: 
  - Basic square root complexity examples
  - Divisor finding problems
  - Optimized approaches using square root
  - Multiple variations of optimized solutions
- **O(N) - Linear Time**: Single-pass algorithms
- **O(N log N) - Linearithmic Time**: Efficient sorting algorithms
- **O(N²) - Quadratic Time**: Nested loop algorithms

Each complexity class includes:
- Practical C++ implementations
- Input/output test cases
- A reference document (`best-to-worst-complexity.txt`) comparing all complexity classes with numerical examples

#### 002-Standard-Template-Library (STL)

##### Vector Container

Comprehensive coverage of the `std::vector` container:

1. **Vector Initialization** (6 types):
   - Empty vector creation
   - Size-based initialization
   - Value-based initialization
   - Size and value initialization
   - Copy from array
   - Copy from another vector

2. **Capacity Functions**:
   - `size()` - Get current element count
   - `max_size()` - Maximum possible size
   - `capacity()` - Allocated memory capacity
   - `clear()` - Remove all elements (keeps memory)
   - `empty()` - Check if vector is empty
   - `resize()` - Change vector size (with examples for increasing and decreasing size)

3. **Modifier Functions**:
   - `assign()` - Assign vector to another vector
   - `push_back()` - Add element at the end
   - `pop_back()` - Remove last element
   - `insert()` - Insert at any position (single and multiple values)
   - `erase()` - Delete from position (single and multiple elements)
   - `replace()` - Replace values using iterators
   - `find()` - Search for values

4. **Element Access**:
   - `[]` operator - Access by index
   - `at()` - Bounds-checked access
   - `front()` - First element
   - `back()` - Last element

5. **Iterators**:
   - `begin()` - Iterator to first element
   - `end()` - Iterator to after last element

6. **Input Handling**:
   - Input with known size
   - Input without size (dynamic)
   - String input handling

Each topic includes documentation files (`.txt`) explaining function purposes, parameters, and time complexities.

#### 003-Data-Structures-Techniques

##### Range Sum Query

Demonstrates optimization techniques:
- **Unoptimized Approach**: Brute force solution causing Time Limit Exceeded (TLE)
- **Optimized Approach**: Using prefix sum technique for efficient range queries

##### Singly Linked List

Complete implementation of a singly linked list with all fundamental operations:

1. **Basic Operations**:
   - Linked list creation and node definition
   - Traversal and printing

2. **Insertion Operations**:
   - Insert at head
   - Insert at tail (multiple variations)
   - Insert at tail with null list handling
   - Optimized tail insertion
   - Insert at any position

3. **Deletion Operations**:
   - Delete from head
   - Delete from tail
   - Delete from any position

4. **Advanced Operations**:
   - Reverse printing
   - Sorting using selection sort algorithm
   - Dynamic input handling

All implementations use object-oriented approach with proper memory management.

### 02-Algorithms

#### 001-Binary-Search

##### Binary Search Algorithm

Complete implementation of the binary search algorithm with:
- Sorted array handling
- Search value implementation
- Found/not found logic

##### Binary Search Problems

Problem-solving examples comparing approaches:

1. **Brute Force Approach**:
   - Naive solution causing TLE
   - Demonstrates why optimization is needed

2. **Optimized Binary Search**:
   - Efficient O(log N) solution
   - Proper implementation techniques

## 🔧 Prerequisites

- **C++ Compiler**: GCC, Clang, or MSVC
- **Basic C++ Knowledge**: 
  - Variables and data types
  - Control structures (loops, conditionals)
  - Functions
  - Basic understanding of pointers (for linked lists)
- **Text Editor or IDE**: VS Code, Code::Blocks, Dev C++, or any preferred editor
- **Terminal/Command Prompt**: For compiling and running programs

## 🚀 How to Use

### Compiling and Running Programs

1. **Navigate to a specific example folder**:
   ```bash
   cd 01-Data-Structures/001-Time-Complexity/01-Linear-Complexity-O-of-N
   ```

2. **Compile the C++ file**:
   ```bash
   g++ -o program linear-complexity-O-of-N.cpp
   ```
   Or on Windows:
   ```bash
   g++ -o program.exe linear-complexity-O-of-N.cpp
   ```

3. **Run the program**:
   ```bash
   ./program < input.txt
   ```
   Or on Windows:
   ```bash
   program.exe < input.txt
   ```

4. **Verify output**:
   Compare your output with the provided `output.txt` file

### Using Pre-compiled Executables

Some examples include pre-compiled `.exe` files. You can run them directly:
```bash
./program.exe < input.txt
```

## 📖 Learning Path

Recommended study order for optimal learning:

1. **Start with Time Complexity** (`01-Time-Complexity`)
   - Understand algorithm efficiency
   - Learn to analyze code performance
   - Get familiar with Big-O notation

2. **Master STL Vector** (`02-Standard-Template-Library/Vector`)
   - Learn container basics
   - Understand memory management
   - Practice common operations
   - Study iterator usage

3. **Learn Optimization Techniques** (`03-Data-Structures-Techniques`)
   - Prefix sum for range queries
   - Compare naive vs optimized solutions

4. **Implement Data Structures** (`03-Data-Structures-Techniques/Singly-Linked-List`)
   - Understand pointer manipulation
   - Learn dynamic memory allocation
   - Practice insertion and deletion operations
   - Master linked list algorithms

5. **Apply Algorithms** (`02-Algorithms/Binary-Search`)
   - Learn divide-and-conquer approach
   - Practice binary search implementation
   - Solve problems efficiently

## 💡 Tips for Learning

- **Read the Documentation**: Check `.txt` files in each section for detailed explanations
- **Compare Approaches**: Pay special attention to examples showing both naive and optimized solutions
- **Experiment**: Modify the code, change inputs, and observe the results
- **Practice**: Try solving similar problems on your own
- **Understand Time Complexity**: Always consider the efficiency of your solutions

## 🤝 Contributing

Contributions are welcome! If you'd like to add more examples, improve existing code, or fix issues, please feel free to submit a pull request.

## 📝 Notes

- This repository is designed for educational purposes
- All code examples follow standard C++ practices
- Input/output files are provided for testing
- Some examples include both naive and optimized solutions to demonstrate the importance of algorithm efficiency
- Time complexity notations are provided for each operation where applicable

## 🎯 Goals

- Provide clear, understandable implementations
- Show practical applications of theoretical concepts
- Demonstrate optimization techniques
- Help learners build strong problem-solving skills
- Prepare for competitive programming and technical interviews

---

**Happy Learning! 🚀**

