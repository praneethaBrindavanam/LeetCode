

# 1021. Remove Outermost Parentheses  

**Difficulty:** Easy  

A valid parentheses string is either:  

1. `""` (empty)  
2. `"A + B"` (concatenation of two valid strings)  
3. `"(" + A + ")"` (wrapping a valid string with parentheses)  

Given a valid parentheses string `s`, remove the **outermost parentheses** from each primitive decomposition of `s` and return the resulting string.  

---

### Example 1:  
**Input:**  
```plaintext
s = "(()())(())"
```

**Output:**  
```plaintext
"()()()"
```

**Explanation:**  
```plaintext
- The input string can be split into two primitive groups: "(()())" and "(())".
- Removing the outermost parentheses from each results in "()()" and "()" respectively.
- The final output is "()()()".
```

---

### Example 2:  
**Input:**  
```plaintext
s = "(()())(())(()(()))"
```

**Output:**  
```plaintext
"()()()()(())"
```

**Explanation:**  
```plaintext
- The input string can be split into three primitive groups: "(()())", "(())", and "(()(()))".
- Removing the outermost parentheses from each results in "()()", "()", and "()(())".
- The final output is "()()()()(())".
```

---

### Example 3:  
**Input:**  
```plaintext
s = "()()"
```

**Output:**  
```plaintext
""
```

**Explanation:**  
```plaintext
- The input consists of two primitive groups: "()" and "()".
- Removing the outermost parentheses from each results in an empty string.
```

---

### Constraints:  
- `1 <= s.length <= 10⁵`  
- `s` is a valid parentheses string.  

