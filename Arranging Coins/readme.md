## 🧩 Problem: Arranging Coins

**LeetCode Problem ID**: 441  
**Difficulty**: Easy

### 📝 Problem Statement

You have `n` coins and you want to build a staircase with these coins. The staircase consists of `k` rows where the `iᵗʰ` row must have exactly `i` coins.

The last row of the staircase **may be incomplete**.

Given the integer `n`, return the total number of **complete** rows of the staircase you will be able to build.

---

### 🔍 Example 1:

**Input:**
```
n = 5
```

**Output:**
```
2
```

**Explanation:**  
Because the first 2 rows use 1 + 2 = 3 coins, and the third row would require 3 coins, which you don't have.

---

### 🔍 Example 2:

**Input:**
```
n = 8
```

**Output:**
```
3
```

**Explanation:**  
The first 3 rows use 1 + 2 + 3 = 6 coins, and the fourth row would require 4 coins, but only 2 coins remain.

---

### 📘 Constraints:

- `1 <= n <= 2³¹ - 1`
