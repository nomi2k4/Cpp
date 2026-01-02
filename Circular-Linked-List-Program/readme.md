# Circular Linked List Program  

A C++ program to implement a **singly circular linked list** with integer nodes. The program allows insertion at head, tail, or after a target node, searching, deletion, and traversal of the list.

## Overview  
This program demonstrates a circular linked list, where the last node points back to the head node. Each node stores an integer and a pointer to the next node. The list supports operations such as inserting at the head, inserting at the tail, inserting after a specific target, searching for a node, removing a node, and printing the entire list.

## Features  
- Check if the list is empty  
- Insert a node at the head  
- Insert a node at the tail  
- Insert a node after a specific target value  
- Search for a node by its data  
- Remove a node by its data  
- Print the list in order  

## Requirements  
- C++ compiler (e.g., GCC, MinGW)  
- Standard C++ library (`iostream`)  

## Notes  
- The circular property is maintained automatically during insertions and deletions.  
- Traversal starts from the head and follows `next` pointers until it reaches back to the head.  
- Attempting to remove a node that does not exist shows a "Not Found" message.  
- Inserting after a non-existent target also notifies the user.  
- The list supports dynamic memory management using `new` and `delete` for nodes.
