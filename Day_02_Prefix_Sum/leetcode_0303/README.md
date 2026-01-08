# Range Sum Query – Immutable

## Problem Statement
Given an integer array `nums`, handle multiple queries where each query
requires finding the sum of elements between indices `left` and `right`
(inclusive).

The array does not change after initialization.

---

## Solution Overview
This solution uses a prefix sum array to preprocess cumulative sums.
After preprocessing, each range sum query can be answered in constant time
by subtracting prefix values.

---

## Algorithm
1. Construct a prefix sum array where `prefix[i]` stores the sum of elements
   from index `0` to `i`.
2. For a query range `[left, right]`:
   - If `left == 0`, return `prefix[right]`.
   - Otherwise, return `prefix[right] - prefix[left - 1]`.
3. Repeat for all queries.

---

## Complexity Analysis

**Time Complexity:**  
- O(n) for preprocessing  
- O(1) per query

**Space Complexity:**  
O(n) — for the prefix sum array.

---

## Common Mistakes
- Forgetting to handle the case when `left = 0`
- Recomputing the sum for each query
- Incorrect prefix array initialization

---

## Notes
This problem demonstrates the core use case of prefix sums:
optimizing repeated range sum queries on an immutable array.
