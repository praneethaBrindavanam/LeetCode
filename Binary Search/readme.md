

# 704. Binary Search  

**Difficulty:** Easy  

You are given a **sorted** array of integers `nums` and an integer `target`.  

Your task is to determine the **index** of `target` in `nums` using the **binary search algorithm**.  

If `target` is present, return its index. Otherwise, return `-1`.  

You **must** write an algorithm with `O(log n)` runtime complexity.  

---  

### Example 1:  
**Input:**  
`nums = [-1,0,3,5,9,12]`, `target = 9`  

**Output:**  
`4`  

**Explanation:**  
- The middle index is `2` with value `3`, which is less than `9`, so we search in the right half.  
- The new middle index is `4` with value `9`, which matches `target`.  
- We return `4`.  

---  

### Example 2:  
**Input:**  
`nums = [-1,0,3,5,9,12]`, `target = 2`  

**Output:**  
`-1`  

**Explanation:**  
- The middle index is `2` with value `3`, which is greater than `2`, so we search in the left half.  
- The new middle index is `0` with value `-1`, which is less than `2`, so we search in the right half.  
- The new middle index is `1` with value `0`, which is still less than `2`, so we search in the right half.  
- `target` is not found, so we return `-1`.  

