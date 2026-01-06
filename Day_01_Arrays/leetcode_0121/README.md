# Best Time to Buy and Sell Stock

## Problem Statement
You are given an array `prices` where `prices[i]` represents the price of a
given stock on the `i`-th day.

You want to maximize your profit by choosing a single day to buy one stock
and choosing a different day in the future to sell that stock.
If no profit can be achieved, return `0`.

---

## Solution Overview
This solution uses a single-pass approach to track the best buying price
and the maximum profit achievable so far.

As the array is traversed:
- The minimum stock price encountered so far is updated.
- At each step, the profit is calculated by selling on the current day.
- The maximum profit is updated accordingly.

---

## Algorithm
1. Initialize `minPrice` to a very large value.
2. Initialize `maxProfit` to `0`.
3. Traverse the array from left to right:
   - Update `minPrice` if the current price is lower.
   - Otherwise, calculate profit as `currentPrice - minPrice`.
   - Update `maxProfit` if the calculated profit is higher.
4. Return `maxProfit` after traversal.

---

## Complexity Analysis

**Time Complexity:**  
O(n) — the array is traversed exactly once.

**Space Complexity:**  
O(1) — only a constant amount of extra space is used.

---

## Common Mistakes
- Trying all buy-sell combinations (O(n²))
- Selling before buying
- Not updating the minimum price correctly

---

## Notes
This approach replaces brute-force checking with state tracking
to achieve optimal performance in a single traversal.
