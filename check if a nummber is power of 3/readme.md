
# 1780. Check if Number is a Sum of Powers of Three  

**Difficulty:** Medium  

Given an integer `n`, return `true` if it is possible to represent `n` as the sum of distinct powers of three. Otherwise, return `false`.  

A number can be expressed as the sum of distinct powers of three if:  
- It can be written as `3^x1 + 3^x2 + ... + 3^xk`, where all `xi` are unique and non-negative integers.

---

### Example 1:  
**Input:**  
```plaintext
n = 12
```

**Output:**  
```plaintext
true
```

**Explanation:**  
```plaintext
12 can be expressed as 3^1 + 3^2 (i.e., 3 + 9 = 12).
```

---

### Example 2:  
**Input:**  
```plaintext
n = 91
```

**Output:**  
```plaintext
true
```

**Explanation:**  
```plaintext
91 can be expressed as 3^0 + 3^2 + 3^4 (i.e., 1 + 9 + 81 = 91).
```

---

### Example 3:  
**Input:**  
```plaintext
n = 21
```

**Output:**  
```plaintext
false
```

**Explanation:**  
```plaintext
21 cannot be expressed as a sum of distinct powers of three.
```

---

### Constraints:  
- `1 <= n <= 10⁷`  
