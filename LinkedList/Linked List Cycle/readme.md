### **141. Linked List Cycle**

#### **Problem:**

Given `head`, the head of a linked list, determine if the linked list has a **cycle** in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer.

Return `true` if there is a cycle in the linked list. Otherwise, return `false`.



#### **Example 1:**

**Input:**


head = [3,2,0,-4]
pos = 1


**Output:**


true


**Explanation:**

There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).


#### **Example 2:**

**Input:**

head = [1,2]
pos = 0


**Output:**

true


**Explanation:**

There is a cycle in the linked list, where the tail connects to the 0th node.



#### **Example 3:**

**Input:**


head = [1]
pos = -1


**Output:**


false


**Explanation:**

There is no cycle in the linked list.



#### **Constraints:**

- The number of the nodes in the list is in the range `[0, 10⁴]`
- `-10⁵ <= Node.val <= 10⁵`
- `pos` is `-1` if there is no cycle. Otherwise, it is the index of the node where the tail connects.

