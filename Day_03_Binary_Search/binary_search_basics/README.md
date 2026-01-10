# Binary Search Basics

## Problem
Given a sorted integer array and a target value, determine whether the
target exists in the array using binary search.

## Approach
Repeatedly divide the search space in half by comparing the middle element
with the target and narrowing the search range accordingly.

## Pattern Used
Binary Search / Divide and Conquer

## Common Mistakes
- Incorrect mid calculation
- Infinite loops due to wrong boundaries
- Applying binary search on unsorted data

## Complexity
- Time Complexity: O(log n)
- Space Complexity: O(1)
