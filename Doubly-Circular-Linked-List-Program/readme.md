# Doubly Circular Linked List Program  

A C++ program to implement a **doubly circular linked list** with nodes storing integer data. The program allows insertion, deletion, search, and traversal in both forward and backward directions.

## Overview  
This program demonstrates a doubly circular linked list, where the last node points back to the first node and each node maintains links to both its next and previous nodes. It supports operations like inserting at the head or tail, inserting after a target node, removing a node, searching for a node, and printing the list in both directions.

## Features  
- Check if the list is empty  
- Insert a node at the head  
- Insert a node at the tail  
- Insert a node after a specific target value  
- Search for a node by its data  
- Remove a node by its data  
- Print the list forward  
- Print the list backward  

## Requirements  
- C++ compiler (e.g., GCC, MinGW)  
- Standard C++ library (`iostream`)  

## Notes  
- When inserting or removing nodes, the circular links are maintained automatically.  
- Forward traversal starts from the head and moves through `next` pointers.  
- Backward traversal starts from the tail and moves through `prev` pointers.  
- If the list is empty, appropriate messages are displayed when performing operations.
