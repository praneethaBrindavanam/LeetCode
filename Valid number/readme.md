

# 65. Valid Number  

**Difficulty:** Hard  

A valid number can be an integer, a decimal, or a number with an exponent.  

You are given a string `s`.  

Your task is to determine if `s` is a **valid number**.  

Return `true` if `s` is a valid number, otherwise return `false`.  

---

### Example 1:  
**Input:**  
`s = "0"`  

**Output:**  
`true`  

**Explanation:**  
`"0"` is a valid integer.  

---

### Example 2:  
**Input:**  
`s = "e"`  

**Output:**  
`false`  

**Explanation:**  
`"e"` is not a valid number.  

---

### Example 3:  
**Input:**  
`s = "2e10"`  

**Output:**  
`true`  

**Explanation:**  
`"2e10"` is a valid scientific notation (equivalent to \(2 \times 10^{10}\)).  

---

### Constraints:  
- `1 <= s.length <= 20`  
- `s` consists of only English letters (uppercase and lowercase), digits (`0-9`), plus (`+`), minus (`-`), and dot (`.`).  

