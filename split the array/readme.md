### **3046. Split the Array**

#### **Problem:**

You are given an integer array `nums` of even length.

Your task is to split the array into two parts, `nums1` and `nums2`, such that:

- `nums1.length == nums2.length == nums.length / 2`
- Both `nums1` and `nums2` contain **distinct** elements.

Return `true` if it is possible to split the array under these conditions; otherwise, return `false`.

---

#### **Example 1:**

**Input:**

```
nums = [1,1,2,2,3,4]
```


**Output:**

```
true
```


**Explanation:**
One possible way to split `nums` is:

- `nums1 = [1, 2, 3]`
- `nums2 = [1, 2, 4]`

Both `nums1` and `nums2` have distinct elements.

---

#### **Example 2:**

**Input:**

```
nums = [1,1,1,1]
```


**Output:**

```
false
```


**Explanation:**
The only possible way to split `nums` is:

- `nums1 = [1, 1]`
- `nums2 = [1, 1]`

Both `nums1` and `nums2` do not contain distinct elements. Therefore, the array cannot be split as required.

---

#### **Constraints:**

- `1 <= nums.length <= 100`
- `nums.length % 2 == 0`
- `1 <= nums[i] <= 100`
