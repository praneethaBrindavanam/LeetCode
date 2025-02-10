# 268. Missing Number

![Easy](https://img.shields.io/badge/-Easy-brightgreen) ![Topics](https://img.shields.io/badge/-Topics-grey) ![Companies](https://img.shields.io/badge/-Companies-grey) ![Hint](https://img.shields.io/badge/-Hint-lightgrey)

## Problem Statement

Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the only number in the range that is missing from the array.

---

## Example 1:
**Input:**  
`nums = [3, 0, 1]`

**Output:**  
`2`

**Explanation:**  
`n = 3` since there are `3` numbers in the array. The range is `[0,3]`, and `2` is missing.

---

## Example 2:
**Input:**  
`nums = [0, 1]`

**Output:**  
`2`

**Explanation:**  
`n = 2`, and the range is `[0,2]`. The number `2` is missing.

---

## Example 3:
**Input:**  
`nums = [9,6,4,2,3,5,7,0,1]`

**Output:**  
`8`

**Explanation:**  
All numbers from `[0,9]` are present except `8`.

---

### Constraints:
- `n == nums.length`
- `1 <= n <= 10⁴`
- `0 <= nums[i] <= n`
- All the numbers in `nums` are **unique**.

---

### Follow-up:
Can you implement a solution using **only O(1) extra space** and **O(n) runtime complexity**?
