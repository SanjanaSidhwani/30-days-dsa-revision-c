# Find Maximum Element in an Array

## Problem
Given an integer array, find and return the maximum element present in the array.

## Approach
Initialize the maximum value using the first element of the array.
Traverse the remaining elements and update the maximum whenever a larger value is found.
This ensures the maximum is determined in a single pass.

## Pattern Used
Linear Traversal

## Common Mistakes
- Initializing the maximum value to 0 instead of the first array element
- Failing to handle arrays with all negative numbers
- Incorrect loop boundaries leading to skipped elements

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)
