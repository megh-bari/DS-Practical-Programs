# Viva Questions Based on Above Programs 


## Basic Concepts

1. **What is a data structure? Why do we use data structures in programming?**  
   A data structure is a way to store and organize data for efficient access and modification. We use data structures to handle large amounts of data and perform operations like searching, sorting, and modifying data efficiently.

2. **What is the difference between a primitive data structure and a non-primitive data structure?**  
   Primitive data structures (e.g., `int`, `float`, `char`) are basic data types provided by the language. Non-primitive data structures (e.g., arrays, linked lists) are derived from primitive types and used to store multiple elements.

3. **Can you explain the difference between static and dynamic data structures?**  
   Static data structures (e.g., arrays) have a fixed size. Dynamic data structures (e.g., linked lists) can grow and shrink during runtime.

4. **How do pointers work in C, and why are they important for data structures?**  
   Pointers store the memory address of a variable. They are important for dynamic memory allocation and accessing data structures like linked lists.

## Arrays

5. **What is an array? How is it different from a linked list?**  
   An array is a collection of elements of the same type, stored in contiguous memory locations. In contrast, a linked list stores elements in nodes that can be scattered in memory, with each node pointing to the next.

6. **How do you declare and initialize an array in C?**  
   ```c
   int arr[5] = {1, 2, 3, 4, 5};
   ```

7. **What are the advantages and disadvantages of using arrays?**  
   **Advantages:** Easy access to elements using indexes.  
   **Disadvantages:** Fixed size; inserting/deleting elements can be slow.

8. **How would you find the largest element in an array?**  
   Loop through the array and keep track of the maximum value encountered.

## Linked Lists

9. **What is a linked list, and what are its types?**  
   A linked list is a sequence of nodes where each node contains data and a reference to the next node. Types include singly linked list, doubly linked list, and circular linked list.

10. **How do you insert a new node in a singly linked list?**  
    Create a new node, set its `next` pointer to the current node's `next`, and update the current node's `next` to the new node.

11. **How would you delete a node from a doubly linked list?**  
    Adjust the `next` pointer of the previous node and the `prev` pointer of the next node, then free the memory for the current node.

12. **What are the differences between a circular linked list and a linear linked list?**  
    In a circular linked list, the last node points back to the first node, forming a loop. In a linear linked list, the last node points to `NULL`.

## Stacks and Queues

13. **What is a stack? Can you explain its operations (push and pop)?**  
    A stack is a data structure where elements follow the "Last In, First Out" (LIFO) order. `Push` adds an element to the top, while `pop` removes the top element.

14. **How can you implement a stack using arrays?**  
    Use an array with a variable to track the top index. Increment it on `push`, and decrement it on `pop`.

15. **What is a queue? How is it different from a stack?**  
    A queue follows the "First In, First Out" (FIFO) order; the first element added is removed first, unlike in a stack.

16. **Can you explain the concept of a circular queue?**  
    In a circular queue, the last position connects back to the first position, allowing reuse of empty spaces created by dequeuing.

## Trees

17. **What is a binary tree? How is it different from a binary search tree?**  
    A binary tree allows each node to have up to two children; in contrast, in a binary search tree, left children are smaller than their parent nodes while right children are larger.

18. **What is tree traversal? Explain different types of tree traversal.**  
    Tree traversal means visiting all nodes in a tree; types include Inorder (left-root-right), Preorder (root-left-right), and Postorder (left-right-root).

19. **What is the difference between depth-first search (DFS) and breadth-first search (BFS)?**  
    DFS explores as far as possible along one branch before backtracking; BFS explores all neighbors at the current depth level before moving deeper.

20. **What is a balanced tree? Give an example.**  
    A balanced tree maintains minimal height difference between left and right subtrees; an example is an AVL tree.

## Graphs

21. **What is a graph? Explain its basic components (vertices and edges).**  
    A graph consists of vertices (nodes) connected by edges (links).

22. **How can you represent a graph in C?**  
    Using an adjacency matrix or adjacency list.

23. **What is the difference between directed and undirected graphs?**  
    Directed graphs have edges with direction; undirected graphs have edges without direction.

24. **Explain graph traversal concepts: What are DFS and BFS?**  
    Graph traversal means visiting all nodes; DFS explores deeply while BFS explores neighbors level by level.

## Sorting and Searching

25. **Can you explain linear search vs binary search?**  
    Linear search checks each element sequentially; binary search divides sorted arrays in half to locate elements more efficiently.

26. **What is binary search's time complexity?**  
    O(log n).

27. **Explain bubble sort algorithm and its time complexity.**  
    Bubble sort repeatedly swaps adjacent elements if they are out of order; its time complexity is O(n²).

28. **What is quicksort, and how does it differ from mergesort?**  
    Quicksort partitions arrays based on pivots for recursive sorting; mergesort divides arrays into halves before merging sorted sections—quicksort generally performs faster.

## Dynamic Memory Allocation

29. **What are `malloc`, `calloc`, `realloc`, and `free` in C?**  
    These functions manage dynamic memory: `malloc` allocates memory; `calloc` allocates zero-initialized memory; `realloc` resizes allocated memory; `free` releases allocated memory.

30. **Why is dynamic memory allocation important for data structures like linked lists?**  
    It allows flexible memory usage enabling structures to grow or shrink as needed.

## Hashing

31. **What is hashing? How does a hash table work?**  
    Hashing maps data to specific indices via hash functions; hash tables store this indexed data efficiently.

32. **What are collisions in hashing, and how can they be resolved?**  
    Collisions occur when multiple keys map to one index; resolutions include chaining or open addressing techniques.

33. **Difference between open addressing vs separate chaining:**  
    Open addressing finds another empty spot for colliding elements; separate chaining uses linked lists at each index for collisions.

## Miscellaneous

34. **What is recursion? Give an example of recursive function:**  
    Recursion occurs when functions call themselves; an example includes calculating factorials using recursion.

35. **Difference between shallow copy vs deep copy:**  
    A shallow copy duplicates references while deep copy duplicates actual data values.

36. **Significance of header node in linked lists:**  
    It simplifies operations by providing an accessible starting point for traversals or modifications.

37. **How would you detect loops in linked lists?**  
    Use Floyd's cycle-finding algorithm (two-pointer technique).

38. **Advantages of priority queue over regular queue:**  
    Elements are dequeued based on priority rather than insertion order.

39. **Difference between stack vs heap in memory allocation:**  
    The stack handles static memory allocation while heap manages dynamic allocation needs.

40. **How would you reverse a linked list?**  
    Change each node's pointers to point backward while traversing through the list.

Citations:
[1] https://ppl-ai-file-upload.s3.amazonaws.com/web/direct-files/30758828/e8869df0-0883-4330-971d-ad081013defe/paste.txt

## Stack
1. **What is a stack?**
   - A stack is a data structure that follows the Last In First Out (LIFO) principle. The last element added is the first one to be removed.

2. **What are the main operations of a stack?**
   - **Push**: Adds an element to the top of the stack.
   - **Pop**: Removes and returns the top element of the stack.
   - **Peek**: Returns the top element without removing it.
   - **isEmpty**: Checks if the stack is empty.

3. **What are some applications of stacks?**
   - Used in function call management (call stack), expression evaluation, and backtracking algorithms.

## Queue
1. **What is a queue?**
   - A queue is a data structure that follows the First In First Out (FIFO) principle. The first element added is the first one to be removed.

2. **What are the main operations of a queue?**
   - **Enqueue**: Adds an element to the end of the queue.
   - **Dequeue**: Removes and returns the front element of the queue.
   - **Peek**: Returns the front element without removing it.
   - **isEmpty**: Checks if the queue is empty.

3. **How can you implement a queue using stacks?**
   - By using two stacks: one for enqueueing elements and another for dequeueing elements. Transfer elements between stacks as needed.

## Parenthesis Matching
1. **What is parenthesis matching?**
   - It is a technique used to check if parentheses in an expression are balanced and correctly nested.

2. **How can you implement parenthesis matching?**
   - Using a stack: push opening parentheses onto the stack and pop when encountering closing parentheses. If the stack is empty at the end, they are balanced.

## Infix to Postfix Conversion
1. **What is infix notation?**
   - Infix notation is where operators are placed between operands (e.g., A + B).

2. **What is postfix notation?**
   - Postfix notation (Reverse Polish Notation) places operators after their operands (e.g., AB+).

3. **How do you convert infix to postfix?**
   - Use a stack to hold operators and output operands directly. Follow operator precedence rules while processing.

## Infix to Prefix Conversion
1. **What is prefix notation?**
   - Prefix notation (Polish Notation) places operators before their operands (e.g., +AB).

2. **How do you convert infix to prefix?**
   - Reverse the infix expression, convert it to postfix, then reverse the postfix result.

## Binary Search Tree (BST)
1. **What is a binary search tree?**
   - A BST is a tree data structure where each node has at most two children, and for any given node, all values in its left subtree are less than its value, while all values in its right subtree are greater.

2. **What are common operations on BSTs?**
   - Insertion, deletion, searching for a value, and inorder traversal.

## Recursion
1. **What is recursion?**
   - Recursion is a programming technique where a function calls itself to solve smaller instances of the same problem until reaching a base case.

2. **Can you give an example of recursion?**
   - Calculating factorial or Fibonacci numbers can be done using recursive functions.

## Linked List
1. **What is a linked list?**
   - A linked list is a linear data structure where elements (nodes) are stored in non-contiguous memory locations, each pointing to the next node.

2. **What are common operations on linked lists?**
   - Insertion, deletion, traversal, and searching for nodes.

## Sorting Algorithms
### Insertion Sort
1. **What is insertion sort?**
   - Insertion sort is a simple sorting algorithm that builds a sorted array one element at a time by repeatedly taking an unsorted element and inserting it into its correct position.

### Bubble Sort
1. **What is bubble sort?**
   - Bubble sort repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order until no swaps are needed.

### Selection Sort
1. **What is selection sort?**
   - Selection sort divides the input list into two parts: sorted and unsorted. It repeatedly selects the smallest element from the unsorted part and moves it to the end of the sorted part.