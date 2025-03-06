
# **2570. Merge Two 2D Arrays by Summing Values**  

**Difficulty:** Easy  

### **Problem Statement**  
You are given two **2D integer arrays** `nums1` and `nums2`.  
- `nums1[i] = [id_i, val_i]`, where `id_i` represents a unique identifier and `val_i` is the corresponding value.  
- `nums2[j] = [id_j, val_j]` follows the same format.  

Each array is **sorted** in increasing order based on the `id` values.  

Your task is to **merge** these two arrays into a new **sorted 2D array** where:  
- Each **unique id** should appear **only once**.  
- If an `id` exists in **both arrays**, sum their corresponding values.  
- Return the merged array **sorted in increasing order of id**.  

---

### **Example 1:**  
**Input:**  
```python
nums1 = [[1,2],[2,3],[4,5]]  
nums2 = [[1,4],[3,2],[4,1]]
```  
**Output:**  
```python
[[1,6],[2,3],[3,2],[4,6]]
```  

**Explanation:**  
- The `id = 1` appears in both arrays → sum values: `2 + 4 = 6`.  
- The `id = 2` appears only in `nums1` → remains `[2,3]`.  
- The `id = 3` appears only in `nums2` → remains `[3,2]`.  
- The `id = 4` appears in both arrays → sum values: `5 + 1 = 6`.  

---

### **Example 2:**  
**Input:**  
```python
nums1 = [[2,4],[3,6],[5,5]]  
nums2 = [[1,3],[4,3]]
```  
**Output:**  
```python
[[1,3],[2,4],[3,6],[4,3],[5,5]]
```  

**Explanation:**  
- The `id = 1` appears only in `nums2` → remains `[1,3]`.  
- The `id = 2` appears only in `nums1` → remains `[2,4]`.  
- The `id = 3` appears only in `nums1` → remains `[3,6]`.  
- The `id = 4` appears only in `nums2` → remains `[4,3]`.  
- The `id = 5` appears only in `nums1` → remains `[5,5]`.  

---

### **Constraints:**  
- `1 <= nums1.length, nums2.length <= 200`  
- `nums1[i].length == nums2[j].length == 2`  
- `1 <= id_i, id_j, val_i, val_j <= 1000`  
- `nums1` and `nums2` are sorted in **increasing order** by `id`.  
