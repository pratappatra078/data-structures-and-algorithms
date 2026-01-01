# 🧠 DSA Problem-Solving Patterns

This file contains **core patterns** used to solve most DSA problems.
If a problem feels hard, it usually belongs to one of these patterns.

---
## Sorting 
### selection sort
- “Selection sort always does O(n²) comparisons, but with a guard condition it can reduce swaps. My implementation is try to avoids unnecessary swaps while preserving correctness.”

### bubble sort
- bubble sort -> check adjacent elements if wrong order then swap

## 1. Brute Force → Optimized
**Idea:** Start simple, then reduce time/space.

- Try all possibilities
- Improve using prefix sum, hashing, or sorting

**Examples:**
- Two Sum
- Subarray Sum
- Majority Element

---

## 2. Two Pointers
**When to use:**
- Sorted array or string
- Comparing from both ends

**Key Signs:**
- Pair problems
- Palindrome
- Remove duplicates

**Examples:**
- Two Sum (sorted)
- Valid Palindrome
- Container With Most Water

---

## 3. Sliding Window
**When to use:**
- Subarray / substring
- Contiguous elements
- Fixed or variable window size

**Types:**
- Fixed window
- Variable window

**Examples:**
- Longest Substring Without Repeating Characters
- Maximum Sum Subarray of Size K
- Minimum Window Substring

---

## 4. Hashing / Frequency Count
**When to use:**
- Count occurrences
- Fast lookup
- Anagrams / duplicates

**Examples:**
- Valid Anagram
- Group Anagrams
- Subarray Sum = K
- Longest Consecutive Sequence

---

## 5. Prefix Sum
**When to use:**
- Range sum queries
- Subarray calculations

**Examples:**
- Range Sum Query
- Subarray Sum Equals K
- Product of Array Except Self

---

## 6. Recursion
**When to use:**
- Problems breaking into smaller subproblems
- Tree / backtracking problems

**Examples:**
- Factorial
- Tree Traversals
- Fibonacci

---

## 7. Backtracking
**When to use:**
- Generate all possibilities
- Constraints-based selection

**Examples:**
- Subsets
- Permutations
- N-Queens
- Sudoku Solver

---

## 8. Stack Pattern
**When to use:**
- Next greater/smaller element
- Matching symbols
- Reversal

**Examples:**
- Valid Parentheses
- Next Greater Element
- Min Stack

---

## 9. Monotonic Stack / Queue
**When to use:**
- Nearest greater/smaller
- Sliding window max/min

**Examples:**
- Stock Span
- Largest Rectangle in Histogram
- Sliding Window Maximum

---

## 10. Linked List Fast & Slow Pointer
**When to use:**
- Cycle detection
- Middle of list

**Examples:**
- Detect Cycle
- Find Middle Node
- Remove Nth Node From End

---

## 11. Tree DFS & BFS
**DFS Use:**
- Depth-based problems
- Recursion

**BFS Use:**
- Level order
- Shortest path (unweighted)

**Examples:**
- Level Order Traversal
- Diameter of Tree
- LCA

---

## 12. Heap (Top K Pattern)
**When to use:**
- K largest / smallest
- Streaming data

**Examples:**
- Top K Frequent Elements
- Kth Largest Element
- Median of Data Stream

---

## 13. Greedy
**When to use:**
- Locally optimal → globally optimal
- Sorting + decision

**Examples:**
- Activity Selection
- Job Scheduling
- Gas Station

---

## 14. Dynamic Programming (DP)
**When to use:**
- Overlapping subproblems
- Optimal substructure

**Steps:**
1. Define state
2. Transition
3. Base case

**Examples:**
- Knapsack
- LCS
- LIS
- House Robber

---

## 15. Graph Traversal
**When to use:**
- Nodes & edges
- Dependencies

**Examples:**
- BFS / DFS
- Cycle Detection
- Topological Sort
- Shortest Path

---

## 16. Union-Find (DSU)
**When to use:**
- Dynamic connectivity
- Cycle detection in graphs

**Examples:**
- Number of Provinces
- Kruskal’s Algorithm

---

## 17. Binary Search on Answer
**When to use:**
- Answer range is sorted
- Min/max feasible value

**Examples:**
- Allocate Books
- Koko Eating Bananas
- Aggressive Cows

---

## ✅ How to Use This File
- Identify pattern first
- Then think of solution
- Code after approach is clear

---


