# LeetCode 238: Product of Array Except Self

## Problem Statement
Given an integer array `nums`, return an array `answer` such that `answer[i]` is equal to the product of all the elements of `nums` except `nums[i]`.

The product of any prefix or suffix of `nums` is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

## Example
```
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]
```

## Constraints
- 2 <= nums.length <= 10^5
- -30 <= nums[i] <= 30
- The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

## Approach
Use prefix sum concept to calculate:
1. Left products: Product of all elements to the left of index i
2. Right products: Product of all elements to the right of index i
3. Result[i] = leftProduct[i] * rightProduct[i]

## Time Complexity
O(n)

## Space Complexity
O(1) - excluding the output array
