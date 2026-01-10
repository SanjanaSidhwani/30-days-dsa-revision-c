# Find First and Last Position of Element in Sorted Array

## Problem Statement
Given a sorted array of integers and a target value, return the starting
and ending position of the target. If not found, return [-1, -1].

## Solution Overview
Use two modified binary searches:
- One to find the leftmost occurrence
- One to find the rightmost occurrence

## Algorithm
1. Perform binary search to find the first occurrence.
2. Perform binary search to find the last occurrence.
3. Combine both results.

## Complexity Analysis
- Time Complexity: O(log n)
- Space Complexity: O(1)

## Common Mistakes
- Stopping search too early
- Not handling duplicates correctly
