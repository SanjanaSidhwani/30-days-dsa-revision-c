# Reverse an Array (In-place)

## Problem
Reverse the elements of an integer array without using extra space.

## Approach
Use two pointers: one starting from the beginning and one from the end.
Swap the elements at these pointers and move them inward.
Stop when the pointers meet to avoid undoing previous swaps.

## Pattern Used
Two Pointers / In-place array manipulation

## Common Mistakes
- Looping until n instead of stopping at n/2
- Incorrect index calculation for the end pointer
- Using an extra array unnecessarily

## Complexity
- Time Complexity: O(n)
- Space Complexity: O(1)
