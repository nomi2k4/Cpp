# Task Scheduler Using Circular Doubly Linked List  

A C++ program to implement a **circular doubly linked list** to manage tasks. Each node represents a task with an ID, description, priority, and deadline. The program allows adding, viewing, editing, deleting, and filtering tasks.

## Overview  
This program demonstrates a circular doubly linked list, where the last node points back to the head, and each node also keeps a pointer to the previous node. The list supports operations such as adding a task, navigating to the next or previous task, editing or deleting a task by ID, viewing all tasks, and filtering tasks by priority.

## Features  
- Check if the task list is empty  
- Add a new task with ID, description, priority, and deadline  
- Navigate to the next task  
- Navigate to the previous task  
- View all tasks in the list  
- Edit a task by its ID  
- Delete a task by its ID  
- View tasks filtered by priority (High/Medium/Low)  

## Requirements  
- C++ compiler (e.g., GCC, MinGW)  
- Standard C++ library (`iostream` and `string`)  

## Notes  
- The circular property ensures seamless navigation between tasks forward and backward.  
- The `current` pointer allows tracking which task is currently being viewed.  
- Deleting a task updates the surrounding nodes to maintain the circular doubly linked structure.  
- Attempting to edit or delete a non-existent task notifies the user.  
- Tasks are managed dynamically using `new` and `delete`.  
- The list can loop indefinitely when navigating, thanks to the circular structure.
