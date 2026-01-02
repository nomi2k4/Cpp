# Library Borrow Records Program  

A C++ program that implements a singly linked list to manage library borrow records. Users can add borrow information for books, and the list organizes records based on the number of renewals.

## Overview  
This program allows users to maintain a list of borrow records for library books. Records with zero renewals are inserted at the head of the list, while records with one or more renewals are added at the tail. Each record stores detailed information about the book and the borrower.

## Features  
- Add a new borrow record  
- Automatically insert records with zero renewals at the head  
- Insert other records at the tail  
- Display all borrow records  
- Store and display detailed information:  
  - Book title  
  - Author name  
  - Borrower name  
  - Borrower ID  
  - Issue date  
  - Return date  
  - Number of renewals  
  - Fine  

## Requirements  
- C++ compiler (e.g., GCC, MinGW)  
- Standard C++ library (`iostream`, `string`)  
