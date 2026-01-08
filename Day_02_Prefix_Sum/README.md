# Day 2 – Prefix Sum & Preprocessing

## Focus
Understanding how to optimize repeated range and subarray computations
by preprocessing data, replacing nested loops with efficient single-pass
or constant-time operations.

## Concepts Covered
- Prefix sum array construction
- Range sum computation using prefix sums
- Handling boundary conditions (especially index 0)
- Avoiding redundant computations

## Patterns Covered
- Prefix Sum
- Preprocessing for Optimization
- Cumulative State Tracking

## Problems Solved

### Core Concept
- Prefix sum basics (construction and range queries)

### LeetCode Problems
- **303 – Range Sum Query (Immutable)**
- **238 – Product of Array Except Self**
- **560 – Subarray Sum Equals K**

## Key Learnings
- Prefix sums allow O(1) range queries after O(n) preprocessing
- Boundary conditions must be handled explicitly to avoid incorrect results
- Many O(n²) problems can be optimized by storing cumulative information
- Prefix sum ideas reappear in sliding window, hashing, and DP problems

## Notes
This day reinforces optimization through preprocessing,
a critical technique for solving LeetCode medium problems
and performing well in technical interviews.