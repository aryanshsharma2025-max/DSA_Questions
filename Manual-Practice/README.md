# Manual DSA Practice & Problem Archive

This directory is dedicated to **manually solved Data Structures & Algorithms (DSA) problems** from college coursework, placement preparation, lecture assignments, competitive programming, and offline practice.

> [!NOTE]
> Automated submissions from **LeetCode** and **GeeksforGeeks** are managed independently by the **Syncode** extension at the repository root (`/LeetCode` and `/GeeksForGeeks`). This directory (`Manual-Practice/`) is strictly for independent, self-curated, and offline practice solutions.

---

## 📁 Topic-Wise Directory Structure

The manual practice repository is organized by foundational and advanced DSA topics:

```text
Manual-Practice/
├── README.md                     # Main manual practice documentation (this file)
├── 01-Basics/                    # Time complexity, basic math, patterns, STL overview
├── 02-Arrays/                    # Subarrays, prefix sums, two pointers, sliding window
├── 03-Strings/                   # String manipulation, anagrams, palindromes, KMP/Rabin-Karp
├── 04-Searching/                 # Linear search, binary search, ternary search, search on answers
├── 05-Sorting/                   # Bubble, selection, insertion, merge, quick, heap sort
├── 06-Pointers/                  # Memory addresses, pointer arithmetic, double pointers, references
├── 07-Recursion/                 # Base cases, recursion trees, backtracking, subsets, permutations
├── 08-Linked-Lists/              # Singly, doubly, circular linked lists, slow/fast pointer tricks
├── 09-Stacks/                    # LIFO operations, monotonic stack, parenthesis validation, infix/postfix
├── 10-Queues/                    # FIFO operations, circular queue, deque, priority queue, monotonic queue
├── 11-Trees/                     # Binary trees, BST, traversals, LCA, height/diameter, view problems
├── 12-Graphs/                    # BFS, DFS, Dijkstra, Bellman-Ford, Floyd-Warshall, Topological Sort, Disjoint Set
└── 13-Dynamic-Programming/      # 1D/2D DP, memoization, tabulation, knapsack, LCS, LIS, grid DP
```

---

## 🏷️ Problem Naming Conventions

All manually added solution files must follow this naming convention:

```text
Problem-Name.cpp
```

### Examples:
- `Manual-Practice/02-Arrays/Find-Largest-Element.cpp`
- `Manual-Practice/02-Arrays/Second-Largest-Element.cpp`
- `Manual-Practice/02-Arrays/Remove-Duplicates.cpp`
- `Manual-Practice/08-Linked-Lists/Reverse-Linked-List.cpp`
- `Manual-Practice/13-Dynamic-Programming/01-Knapsack.cpp`

---

## 💻 Language Standard & Compilation

- **Standard:** Modern C++ (C++17 default)
- **Compiler:** `g++` (MinGW / GCC)
- **Recommended Compilation Command:**
  ```powershell
  g++ -std=c++17 -Wall -Wextra -O2 Problem-Name.cpp -o Problem-Name.exe
  .\Problem-Name.exe
  ```

---

## 📝 Solution Template & Standards

For every manually added problem, maintain high code quality and clear documentation within the file:

```cpp
/**
 * ============================================================================
 * Problem: [Problem Title]
 * Source / Platform: [e.g., College Sheet / Placement Drive / Striver SDE / NeetCode]
 * Difficulty: [Easy / Medium / Hard]
 * ============================================================================
 * 
 * Problem Statement:
 * [Brief description of the problem, constraints, and expected output]
 * 
 * Approach / Intuition:
 * [Explanation of the algorithmic approach, key observations, and data structures used]
 * 
 * Complexities:
 * - Time Complexity:  O(...)
 * - Space Complexity: O(...)
 * 
 * ============================================================================
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// Solution implementation
class Solution {
public:
    // Core function
};

int main() {
    // Demonstration test cases
    Solution solver;
    
    // Test Case 1:
    // ...
    
    return 0;
}
```

---

## 🚀 How to Add a New Problem

1. **Locate the Topic:** Choose the appropriate topic directory (e.g., `02-Arrays/`).
2. **Create the File:** Name the file `Problem-Name.cpp` according to the convention.
3. **Implement the Solution:** Follow the standard template with problem statement, approach, complexity, and test cases.
4. **Compile & Run:** Test locally using `g++ -std=c++17`.
5. **Update Index:** Optionally record the problem in the topic's local `README.md`.

---

## 🔄 Git Workflow: Safe Integration with Syncode

Because the **Syncode** extension regularly pushes automated commits for LeetCode and GeeksForGeeks to `origin/main`, follow this safe Git workflow for manual solutions:

### Step 1: Pull the latest changes from remote
```powershell
git pull --rebase origin main
```

### Step 2: Stage ONLY the manual practice directory
> [!IMPORTANT]
> Never run `git add .` indiscriminately. Staging only `Manual-Practice` ensures Syncode logs (`stats.json`, root `README.md`) are never accidentally staged or conflicted.

```powershell
git add Manual-Practice
```

### Step 3: Commit your solution
```powershell
git commit -m "Add manual DSA practice solutions"
```

### Step 4: Push to GitHub
```powershell
git push origin main
```

### If Push is Rejected (Syncode pushed new problems):
Syncode may have pushed a new automated solution while you were working. Rebase cleanly and push:
```powershell
git pull --rebase origin main
git push origin main
```

> [!WARNING]
> Never use `git push --force` or `--force-with-lease` as that can overwrite automated commits made by Syncode. Always resolve rebases cleanly.
