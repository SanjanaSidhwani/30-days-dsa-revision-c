# Product of Array Except Self

## Problem Statement
Given an integer array `nums`, return an array `answer` such that
`answer[i]` is equal to the product of all the elements of `nums`
except `nums[i]`.

The solution must run in O(n) time and must not use the division operation.

---

## Solution Overview
This solution uses prefix and suffix products to compute the result
efficiently without division.

The idea is to:
- Store the product of all elements to the left of each index.
- Multiply it with the product of all elements to the right of that index.

This allows the result to be computed in two passes over the array.

---

## Algorithm
1. Initialize an output array `answer` with all elements set to 1.
2. Traverse the array from left to right:
   - Store the product of all elements before index `i` in `answer[i]`.
3. Traverse the array from right to left:
   - Multiply `answer[i]` with the product of all elements after index `i`.
4. Return the `answer` array.

---

## Complexity Analysis

**Time Complexity:**  
O(n) — two linear passes through the array.

**Space Complexity:**  
O(1) extra space — excluding the output array.

---

## Common Mistakes
- Using division (not allowed)
- Forgetting to reset the suffix product
- Mishandling arrays containing zero values

---

## Notes
This problem is a classic application of prefix and suffix preprocessing.
It reinforces how cumulative products can replace division while
maintaining optimal performance.
