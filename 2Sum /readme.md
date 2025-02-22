

# 1. Two Sum  

**Difficulty:** Easy  

You are given an array of integers `nums` and an integer `target`.  

Your task is to find **two distinct indices** such that the sum of the numbers at those indices equals `target`.  

Return the indices as an array `[index1, index2]`.  

You **must** return the indices in **any order**.  

Each input has **exactly one solution**, and you **may not use the same element twice**.  

---  

### Example 1:  
**Input:**  
`nums = [2,7,11,15]`, `target = 9`  

**Output:**  
`[0,1]`  

**Explanation:**  
- `nums[0] + nums[1] = 2 + 7 = 9`, which matches `target`.  
- So, we return `[0,1]`.  

---  

### Example 2:  
**Input:**  
`nums = [3,2,4]`, `target = 6`  

**Output:**  
`[1,2]`  

**Explanation:**  
- `nums[1] + nums[2] = 2 + 4 = 6`, which matches `target`.  
- So, we return `[1,2]`.  

---  

### Example 3:  
**Input:**  
`nums = [3,3]`, `target = 6`  

**Output:**  
`[0,1]`  

**Explanation:**  
- `nums[0] + nums[1] = 3 + 3 = 6`, which matches `target`.  
- So, we return `[0,1]`.  

