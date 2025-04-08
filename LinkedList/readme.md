### 🧩 **Introduction to Linked Lists**

A **Linked List** is a **linear data structure** where elements are stored in **nodes**, and each node points to the next node in the sequence. Unlike arrays, linked lists do **not store elements in contiguous memory locations** — instead, each element (node) contains:

1. **Data**: The actual value or information.
2. **Next**: A pointer/reference to the next node in the list.

---

### 🔗 **Types of Linked Lists:**

1. **Singly Linked List**  
   - Each node points to the next node.
   - Last node points to `null`.

2. **Doubly Linked List**  
   - Each node has two pointers: one to the **next** node and one to the **previous** node.

3. **Circular Linked List**  
   - Last node points back to the **head** (first node), forming a circle.

---

### 📦 **Why Use Linked Lists?**

- **Dynamic size**: Easy to grow and shrink during runtime.
- **Efficient insertions/deletions**: Especially in the middle or start (no shifting like arrays).
- Useful in implementing **stacks**, **queues**, **graphs**, and **hash tables**.

---

### 🛠️ **Common Operations:**

- **Insertion**: Add a node at the beginning, middle, or end.
- **Deletion**: Remove a node from the list.
- **Traversal**: Visit all nodes from head to tail.
- **Search**: Find a node with a given value.

---

### 🧠 **Example: Singly Linked List Node in C++**

```cpp
struct Node {
    int data;
    Node* next;
};
```

In this structure:
- `data` holds the value.
- `next` points to the next node in the list.

