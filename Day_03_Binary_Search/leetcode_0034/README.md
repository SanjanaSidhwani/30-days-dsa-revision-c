# Search Insert Position

## Problem Statement
Given a sorted array and a target value, return the index if the target
is found. If not, return the index where it would be inserted.

## Solution Overview
Use binary search to find the correct position where the target fits
while maintaining sorted order.

## Algorithm
1. Perform binary search on the array.
2. If the target is found, return its index.
3. If not found, return the position where the search ends.

## Complexity Analysis
- Time Complexity: O(log n)
- Space Complexity: O(1)

## Common Mistakes
- Returning wrong index when target is absent
- Incorrect boundary updates
