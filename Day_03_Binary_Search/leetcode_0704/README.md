# Binary Search

## Problem Statement
Given a sorted array of integers and a target value, return the index of
the target if it exists, otherwise return -1.

## Solution Overview
Apply classic binary search to repeatedly halve the search space until
the target is found or the range becomes empty.

## Algorithm
1. Initialize two pointers `left` and `right`.
2. Compute the middle index.
3. Compare the middle element with the target.
4. Adjust the search range accordingly.
5. Repeat until the target is found or the range is invalid.

## Complexity Analysis
- Time Complexity: O(log n)
- Space Complexity: O(1)

## Common Mistakes
- Incorrect loop condition
- Overflow in mid calculation
- Searching in an unsorted array
