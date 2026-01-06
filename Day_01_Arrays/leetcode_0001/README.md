# Two Sum

## Problem Statement
Given an array of integers `nums` and an integer `target`, return the indices
of the two distinct elements such that their sum equals `target`.

You may assume that exactly one valid solution exists, and the same element
cannot be used twice.

---

## Solution Overview
This solution uses a brute-force approach to evaluate all possible pairs
of elements in the array.

Two nested loops are used:
- The outer loop selects the first element.
- The inner loop checks subsequent elements to find a pair whose sum equals the target.

Once such a pair is found, their indices are returned immediately.

---

## Algorithm
1. Iterate over the array using index `i`.
2. For each `i`, iterate over the remaining elements using index `j > i`.
3. Check if `nums[i] + nums[j] == target`.
4. If the condition is satisfied, return the indices `{i, j}`.
5. Since exactly one solution is guaranteed, the algorithm terminates immediately after finding the pair.

---

## Complexity Analysis

**Time Complexity:**  
O(n²) — due to checking all possible pairs in the worst case.

**Space Complexity:**  
O(1) — no extra data structures are used apart from variables for computation.

---

## Common Mistakes
- Using the same element twice (allowing `i == j`)
- Returning values instead of indices
- Forgetting to stop execution after finding the valid pair

---

## Notes
This approach prioritizes simplicity and correctness.
While more optimized solutions exist using hash maps (O(n) time),
this implementation serves as a clear and intuitive baseline solution.
