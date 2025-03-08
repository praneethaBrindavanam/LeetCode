
# **164. Maximum Gap**  

**Difficulty:** Hard  

### **Problem Statement**  
Given an unsorted array `nums` of size `n`, return the **maximum difference** between the successive elements in its **sorted form**.  

You must solve it in **O(n)** time complexity.  

---

### **Example 1:**  
**Input:**  
```python
nums = [3,6,9,1]
```  
**Output:**  
```python
5
```  
**Explanation:**  
- After sorting: `[1,3,6,9]`  
- Maximum gap = `max(3-1, 6-3, 9-6) = max(2,3,3) = 3`  

---

### **Example 2:**  
**Input:**  
```python
nums = [10]
```  
**Output:**  
```python
0
```  
**Explanation:**  
- Since there is only one element, no gap exists.  



### **Constraints:**  
- `1 <= nums.length <= 10^5`  
- `0 <= nums[i] <= 10^9`  
- The solution must run in **O(n)** time complexity.  

