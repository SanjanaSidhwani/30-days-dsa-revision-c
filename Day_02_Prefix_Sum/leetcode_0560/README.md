
# Subarray Sum Equals K

## Problem Statement
Given an integer array `nums` and an integer `k`, return the total number
of continuous subarrays whose sum equals `k`.

---

## Solution Overview
This solution uses a prefix sum combined with a hash map to efficiently
count subarrays with a given sum.

The key idea is:
If two prefix sums differ by `k`, then the subarray between them sums to `k`.

By storing the frequency of prefix sums encountered so far, we can count
valid subarrays in a single pass.

---

## Algorithm
1. Initialize a hash map to store prefix sum frequencies.
2. Store `0 → 1` in the map to handle subarrays starting at index 0.
3. Traverse the array while maintaining a running prefix sum.
4. At each index:
   - Check if `(prefixSum - k)` exists in the map.
   - If yes, add its frequency to the result.
5. Update the frequency of the current prefix sum in the map.
6. Return the total count.

---

## Complexity Analysis

**Time Complexity:**  
O(n) — single traversal of the array.

**Space Complexity:**  
O(n) — hash map storing prefix sum frequencies.

---

## Common Mistakes
- Forgetting to initialize `prefixSum = 0` with frequency 1
- Using sliding window (does not work with negative numbers)
- Recomputing subarray sums using nested loops

---

## Notes
This problem demonstrates how prefix sums extend naturally into
hash-based solutions and is a key stepping stone toward
dynamic programming and advanced subarray problems.
