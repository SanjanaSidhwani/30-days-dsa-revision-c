# Day 02: Prefix Sum

## Overview
Prefix sum (also known as cumulative sum) is an efficient technique for calculating range sums in arrays. It preprocesses the array to enable O(1) time complexity for range sum queries.

## Concept
For an array `arr[]`, the prefix sum array `prefix[]` stores the cumulative sum up to each index:
- `prefix[i] = arr[0] + arr[1] + ... + arr[i]`

To find the sum of elements from index `l` to `r`:
- `sum(l, r) = prefix[r] - prefix[l-1]`

## Topics Covered
1. **Prefix Sum Basics** - Understanding the fundamental concept
2. **Range Sum Query - Immutable (LeetCode 303)** - Static array range queries
3. **Product of Array Except Self (LeetCode 238)** - Prefix and suffix product
4. **Subarray Sum Equals K (LeetCode 560)** - Using prefix sum with hash map

## Key Applications
- Range sum queries
- Subarray sum problems
- Finding equilibrium index
- 2D matrix prefix sum
- Count of subarrays with specific properties

## Time & Space Complexity
- Preprocessing: O(n)
- Range Query: O(1)
- Space: O(n)

## Practice Problems
- [x] Prefix Sum Basics
- [x] LeetCode 238: Product of Array Except Self
- [x] LeetCode 303: Range Sum Query - Immutable
- [ ] LeetCode 560: Subarray Sum Equals K
