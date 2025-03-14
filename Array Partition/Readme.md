
### **561. Array Partition**  

#### **Problem:**  
You are given an integer array `nums` of `2n` integers.  

You need to **partition** these `2n` numbers into `n` pairs such that the sum of the **minimum** number in each pair is **maximized**.  

Return the **maximum sum** that can be obtained.  

---

### **Example 1:**  

**Input:**  
`nums = [1,4,3,2]`  

**Output:**  
`4`  

**Explanation:**  
We can form the following pairs: **(1,2), (3,4)**.  
The sum of the **minimum** of each pair is `1 + 3 = 4`.  

---

### **Example 2:**  

**Input:**  
`nums = [6,2,6,5,1,2]`  

**Output:**  
`9`  

**Explanation:**  
We can form the following pairs: **(1,2), (2,5), (6,6)**.  
The sum of the **minimum** of each pair is `1 + 2 + 6 = 9`.  

---

### **Constraints:**  
- `1 <= n <= 10⁴`  
- `nums.length == 2 * n`  
- `-10⁴ <= nums[i] <= 10⁴`  

