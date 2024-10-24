# Viva Questions Based on Above Programs 

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