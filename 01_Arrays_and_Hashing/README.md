# 1. Two Sum

**Difficulty:** Easy
**Category:** Arrays & Hashing

## Problem Statement
Given an array of integers `nums` and an integer `target`, return indices of the two numbers such that they add up to `target`.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

## Approach: Brute Force (Memory Safe)
This implementation uses two nested loops to check every possible pair of numbers in the array. 

While not the fastest in terms of execution time, this approach requires absolutely no extra memory overhead (no external data structures), making it extremely memory efficient. In pure C, it avoids the overhead of manually implementing a Hash Map from scratch.

### Complexity Analysis
- **Time Complexity:** $O(n^2)$ 
  Because for each element $i$ in the array, we iterate through the remaining elements $j$. This results in $\frac{n(n-1)}{2}$ operations, which simplifies as asymptotically quadratic.
- **Space Complexity:** $O(1)$
  No dynamic memory is allocated that scales with the input size $n$. We only allocate exactly 8 bytes (2 integers) for the result array, which is constant.

## The $O(n)$ Trade-off (Follow-up)
*Theoretical Optimization:* To achieve a linear time complexity of $O(n)$, we could trade space for time by utilizing a **Hash Map** (or an array functioning as a direct-address table if constraints allowed). 
By traversing the array once and storing the complement (`target - nums[i]`) along with its index in the Hash Map, we could find the solution in a single pass. This would reduce Time Complexity to $O(n)$ but increase Space Complexity to $O(n)$ due to the storage requirements of the map.
