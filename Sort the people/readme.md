# 2418. Sort the People  

**Difficulty:** Easy  

You are given two arrays:  

- `names` (a string array) containing the names of people, and  
- `heights` (an integer array) representing their respective heights.  

Return the names of the people **sorted in descending order** by height.  

---

### Example 1:  
**Input:**  
```plaintext
names = ["Mary", "John", "Emma"]  
heights = [180, 165, 170]
```

**Output:**  
```plaintext
["Mary", "Emma", "John"]
```

**Explanation:**  
```plaintext
- "Mary" has height 180.  
- "Emma" has height 170.  
- "John" has height 165.  

Sorting in descending order by height: ["Mary", "Emma", "John"].
```

---

### Example 2:  
**Input:**  
```plaintext
names = ["Alice", "Bob", "Bob"]  
heights = [155, 185, 150]
```

**Output:**  
```plaintext
["Bob", "Alice", "Bob"]
```

**Explanation:**  
```plaintext
- "Bob" (185)  
- "Alice" (155)  
- "Bob" (150)  

Sorting in descending order by height: ["Bob", "Alice", "Bob"].
```

---

### Constraints:  
- `n == names.length == heights.length`  
- `1 <= n <= 100`  
- `1 <= names[i].length <= 20`  
- `1 <= heights[i] <= 10^5`  
- `names[i]` consists of lowercase and uppercase English letters.  
- All heights are **distinct**.
