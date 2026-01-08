# Prefix Sum Basics

## Problem
Given an integer array, preprocess it to efficiently compute the sum of
elements within any given range `[L, R]`.

## Approach
Construct a prefix sum array where each index stores the cumulative sum
of elements from the start of the array up to that index.
Using this preprocessed array, range sum queries can be answered in
constant time by subtracting prefix values.

## Pattern Used
Prefix Sum / Preprocessing

## Common Mistakes
- Forgetting to handle the case when `L = 0`
- Incorrect prefix array initialization
- Recomputing sums instead of using the prefix array

## Complexity
- Time Complexity: O(n) for preprocessing, O(1) per query
- Space Complexity: O(n)
