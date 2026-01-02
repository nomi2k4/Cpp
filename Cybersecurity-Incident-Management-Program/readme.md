# Cybersecurity Incident Management Program  

A C++ program to manage cybersecurity incidents using a doubly linked list. The program stores detailed incident information and allows operations such as adding incidents, displaying the most severe or recent incidents, resolving/removing incidents, and printing all incidents in order or reverse order.

## Overview  
This program allows cybersecurity analysts to maintain a list of incidents, including details such as incident ID, user account, type of threat, severity level, timestamp, status, and analyst name. Incidents are stored in a doubly linked list, supporting efficient insertion, deletion, and traversal.

## Features  
- Add a new incident record with detailed information  
- Insert incidents at the head, tail, or after a specific target (based on severity)  
- Display the most severe active incident based on severity and status  
- Display the most recent incident  
- Resolve and remove an incident by ID  
- Display all incidents in insertion order  
- Display all incidents in reverse order  

## Requirements  
- C++ compiler (e.g., GCC, MinGW)  
- Standard C++ library (`iostream`, `string`)  
- Support for console input/output  

## Notes  
- Critical severity incidents are always inserted at the head.  
- High severity incidents can be inserted after a target incident.  
- Low severity incidents are added at the tail.  
- The program uses a doubly linked list to allow forward and reverse traversal of incidents.  
