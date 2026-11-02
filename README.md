# DSA Practice & Algorithmic Problem-Solving Log

[![Solutions](https://img.shields.io/badge/Solutions-34%20Verified-10B981?style=for-the-badge&logo=cplusplus&logoColor=white)](https://github.com/aryanshsharma2025-max/DSA_Questions)
[![Platforms](https://img.shields.io/badge/Platforms-LeetCode%20%7C%20GeeksforGeeks-FFA116?style=for-the-badge&logo=leetcode&logoColor=white)](https://github.com/aryanshsharma2025-max/DSA_Questions)
[![Language](https://img.shields.io/badge/Language-Modern%20C%2B%2B%20(C%2B%2B17)-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://github.com/aryanshsharma2025-max/DSA_Questions)

A structured repository documenting algorithmic problem-solving practice and modern C++ implementations from coding platforms.

Solutions are automatically committed and organized by platform and difficulty using the Syncode synchronization tool.

---

## 📊 Solved Problems Overview

- **Total Verified Solutions:** **34**
- **Platform Breakdown:** LeetCode (31 problems), GeeksforGeeks (3 problems)
- **Difficulty Distribution:**
  - **Easy:** 14 problems (41.2%)
  - **Medium:** 18 problems (52.9%)
  - **Hard:** 2 problems (5.9%)

---

## 🗺️ Problem Classification by Algorithmic Topic

### 1. Arrays, Two Pointers & Sliding Window
- **Two Sum** (LeetCode #1, Easy) — Hash map complement lookup · *O(N)* time, *O(N)* space
- **Remove Duplicates from Sorted Array** (LeetCode #26, Easy) — Two-pointer in-place deduplication · *O(N)* time, *O(1)* space
- **Remove Element** (LeetCode #27, Easy) — Two-pointer swap and shrink · *O(N)* time, *O(1)* space
- **Merge Sorted Array** (LeetCode #88, Easy) — Three-pointer backward fill · *O(M+N)* time, *O(1)* space
- **Plus One** (LeetCode #66, Easy) — Digit array addition with carry ripple · *O(N)* time, *O(1)* space
- **Minimum Right Shifts to Sort Array** (LeetCode #2855, Easy) — Inflection point rotation check · *O(N)* time, *O(1)* space
- **Longest Substring Without Repeating Characters** (LeetCode #3, Medium) — Sliding window with hash set · *O(N)* time, *O(min(N, M))* space
- **Longest Palindromic Substring** (LeetCode #5, Medium) — Expand around center · *O(N²)* time, *O(1)* space

### 2. Binary Search & Monotonic Predicates
- **Search Insert Position** (LeetCode #35, Easy) — Lower bound binary search · *O(log N)* time, *O(1)* space
- **Capacity To Ship Packages Within D Days** (LeetCode #1011, Medium) — Binary search on answer predicate · *O(N log(sum - max))* time, *O(1)* space
- **Median of Two Sorted Arrays** (LeetCode #4, Hard) — Binary search on partition cut · *O(log(min(M, N)))* time, *O(1)* space

### 3. Linked Lists
- **Merge Two Sorted Lists** (LeetCode #21, Easy) — Iterative pointer splicing · *O(N + M)* time, *O(1)* space
- **Add Two Numbers** (LeetCode #2, Medium) — Digit-by-digit list traversal with carry · *O(max(N, M))* time, *O(max(N, M))* space
- **Rotate List** (LeetCode #61, Medium) — Ring closure and modular offset detachment · *O(N)* time, *O(1)* space

### 4. Stacks & String Processing
- **Valid Parentheses** (LeetCode #20, Easy) — LIFO bracket matching · *O(N)* time, *O(N)* space
- **Remove All Adjacent Duplicates In String** (LeetCode #1047, Easy) — Monotonic character stack reduction · *O(N)* time, *O(N)* space
- **Longest Common Prefix** (LeetCode #14, Easy) — Horizontal character scanning · *O(S)* time, *O(1)* space
- **Palindrome Number** (LeetCode #9, Easy) — Half-number integer reversal · *O(log₁₀ N)* time, *O(1)* space
- **Reverse Integer** (LeetCode #7, Medium) — Overflow-guarded integer manipulation · *O(log₁₀ N)* time, *O(1)* space

### 5. Recursion, Combinatorics & Backtracking
- **Permutations** (LeetCode #46, Medium) — State-space recursive tree with swap backtracking · *O(N · N!)* time, *O(N)* space
- **Combination Sum** (LeetCode #39, Medium) — Unbounded knapsack decision tree · *O(2^T)* time, *O(T)* space
- **Beautiful Arrangement** (LeetCode #526, Medium) — Pruned recursive backtracking · *O(K)* time, *O(N)* space
- **Count Good Numbers** (LeetCode #1922, Medium) — Binary exponentiation with modular arithmetic · *O(log N)* time, *O(1)* space
- **Valid Binary Strings With Cost Limit** (LeetCode, Medium) — Dynamic recursive state validation
- **N-Queens** (LeetCode #51, Hard) — Row-by-row placement with column & diagonal bitset conflict checks · *O(N!)* time, *O(N)* space

### 6. Graph Theory & Connected Components
- **Number of Islands** (LeetCode #200, Medium) — 2D grid DFS component traversal · *O(M · N)* time, *O(M · N)* space
- **Number of Provinces** (LeetCode #547, Medium) — Adjacency matrix DFS connected components · *O(V²)* time, *O(V)* space
- **Is Graph Bipartite?** (LeetCode #785, Medium) — BFS/DFS two-color cycle validation · *O(V + E)* time, *O(V)* space
- **Directed Graph Cycle** (GeeksforGeeks, Medium) — DFS traversal with in-recursion stack tracking · *O(V + E)* time, *O(V)* space
- **Course Schedule** (LeetCode #207, Medium) — Kahn's Algorithm / In-degree topological sorting · *O(V + E)* time, *O(V + E)* space
- **Topological Sort** (GeeksforGeeks, Medium) — DAG linear ordering via Kahn's BFS · *O(V + E)* time, *O(V)* space

### 7. Dynamic Programming & Greedy
- **Assign Cookies** (LeetCode #455, Easy) — Greedy dual-pointer assignment · *O(N log N + M log M)* time, *O(1)* space
- **Climbing Stairs** (LeetCode #70, Easy) — 1D Fibonacci state transition · *O(N)* time, *O(1)* space
- **Frog Jump** (GeeksforGeeks, Medium) — 1D dynamic programming minimum energy calculation · *O(N)* time, *O(N)* space

---

## 📋 Complete Problem Index (Chronological Practice Log)

| # | Problem | Platform | Difficulty | Topic |
|---|---------|----------|------------|-------|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | LeetCode | Easy | Hash Map / Arrays |
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | LeetCode | Medium | Linked Lists |
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | LeetCode | Medium | Sliding Window |
| 4 | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | LeetCode | Hard | Binary Search |
| 5 | [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/) | LeetCode | Medium | Two Pointers |
| 6 | [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | LeetCode | Medium | Math / Simulation |
| 7 | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | LeetCode | Easy | Math / Two Pointers |
| 8 | [Minimum Right Shifts to Sort the Array](https://leetcode.com/problems/minimum-right-shifts-to-sort-the-array/) | LeetCode | Easy | Arrays |
| 9 | [Capacity To Ship Packages Within D Days](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/) | LeetCode | Medium | Binary Search on Answer |
| 10 | [Assign Cookies](https://leetcode.com/problems/assign-cookies/) | LeetCode | Easy | Greedy / Two Pointers |
| 11 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | LeetCode | Easy | Stack |
| 12 | [Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/) | LeetCode | Easy | Stack / Strings |
| 13 | [Permutations](https://leetcode.com/problems/permutations/) | LeetCode | Medium | Backtracking |
| 14 | [Combination Sum](https://leetcode.com/problems/combination-sum/) | LeetCode | Medium | Backtracking |
| 15 | [Count Good Numbers](https://leetcode.com/problems/count-good-numbers/) | LeetCode | Medium | Binary Exponentiation |
| 16 | [Valid Binary Strings With Cost Limit](https://leetcode.com/problems/valid-binary-strings-with-cost-limit/) | LeetCode | Medium | Dynamic Programming |
| 17 | [Beautiful Arrangement](https://leetcode.com/problems/beautiful-arrangement/) | LeetCode | Medium | Backtracking |
| 18 | [N-Queens](https://leetcode.com/problems/n-queens/) | LeetCode | Hard | Backtracking |
| 19 | [Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) | LeetCode | Easy | Linked Lists |
| 20 | [Rotate List](https://leetcode.com/problems/rotate-list/) | LeetCode | Medium | Linked Lists |
| 21 | [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) | LeetCode | Easy | Strings |
| 22 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | LeetCode | Easy | Two Pointers |
| 23 | [Remove Element](https://leetcode.com/problems/remove-element/) | LeetCode | Easy | Two Pointers |
| 24 | [Search Insert Position](https://leetcode.com/problems/search-insert-position/) | LeetCode | Easy | Binary Search |
| 25 | [Plus One](https://leetcode.com/problems/plus-one/) | LeetCode | Easy | Arrays / Math |
| 26 | [Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) | LeetCode | Easy | Two Pointers |
| 27 | [Number of Provinces](https://leetcode.com/problems/number-of-provinces/) | LeetCode | Medium | Graph / Disjoint Set / DFS |
| 28 | [Number of Islands](https://leetcode.com/problems/number-of-islands/) | LeetCode | Medium | Graph / 2D Grid DFS |
| 29 | [Is Graph Bipartite?](https://leetcode.com/problems/is-graph-bipartite/) | LeetCode | Medium | Graph / BFS 2-Coloring |
| 30 | [Directed Graph Cycle](https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1) | GeeksForGeeks | Medium | Graph / DFS Cycle Detection |
| 31 | [Course Schedule](https://leetcode.com/problems/course-schedule/) | LeetCode | Medium | Graph / Topological Sort |
| 32 | [Topological Sort](https://www.geeksforgeeks.org/problems/topological-sort/1) | GeeksForGeeks | Medium | Graph / Kahn's Algorithm |
| 33 | [Frog Jump](https://www.geeksforgeeks.org/problems/geek-jump/1) | GeeksForGeeks | Medium | Dynamic Programming |
| 34 | [Climbing Stairs](https://leetcode.com/problems/climbing-stairs/) | LeetCode | Easy | Dynamic Programming |

---

## 🛠️ Language & Coding Standards

All solutions are written in modern C++ (C++17) utilizing the Standard Template Library (STL):
- **Data Structures:** std::vector, std::string, std::unordered_map, std::unordered_set, std::queue, std::stack, std::priority_queue
- **Algorithms:** std::sort, std::max, std::min, std::lower_bound

---

## ⚠️ Notes & Realistic Scope

- **Learning Log:** This repository tracks ongoing problem solving and algorithmic progression. Problem counts reflect consistent study and should not be confused with full-scale systems development.
- **Standalone Implementations:** Solution files contain the core class methods submitted to online judges and do not include standalone main() test drivers.