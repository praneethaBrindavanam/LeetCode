
# 94. Binary Tree Inorder Traversal  

**Difficulty:** Easy  

Given the `root` of a binary tree, return its **inorder traversal** (left, root, right).  

---

### Example 1:  
**Input:**  
```plaintext
root = [1, null, 2, 3]
```

**Output:**  
```plaintext
[1, 3, 2]
```

**Explanation:**  
```plaintext
The inorder traversal follows:
1. Traverse the left subtree (None).
2. Visit the root (1).
3. Traverse the right subtree:
   - Traverse the left subtree of 2 (3).
   - Visit 3.
   - Visit 2.
Final order: [1, 3, 2].
```

---

### Example 2:  
**Input:**  
```plaintext
root = []
```

**Output:**  
```plaintext
[]
```

**Explanation:**  
```plaintext
An empty tree has no nodes to traverse.
```

---

### Example 3:  
**Input:**  
```plaintext
root = [1]
```

**Output:**  
```plaintext
[1]
```

**Explanation:**  
```plaintext
A single-node tree results in just that node.
```

---

### Constraints:  
- The number of nodes in the tree is in the range `[0, 100]`.  
- `-100 ≤ Node.val ≤ 100`  


