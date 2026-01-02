#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    DoublyCircularList list;
    int choice, data, target;

    do
    {
        cout << "\n===== DOUBLY CIRCULAR LINKED LIST MENU =====\n";
        cout << "1. Check if list is empty\n";
        cout << "2. Insert at head\n";
        cout << "3. Insert at tail\n";
        cout << "4. Insert after target\n";
        cout << "5. Search for a node\n";
        cout << "6. Remove a node\n";
        cout << "7. Print list forward\n";
        cout << "8. Print list backward\n";
        cout << "0. Exit\n";
        cout << "============================================\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << (list.isEmpty() ? "List is empty.\n" : "List is not empty.\n");
            break;

        case 2:
            cout << "Enter data to insert at head: ";
            cin >> data;
            list.insertAtHead(data);
            break;

        case 3:
            cout << "Enter data to insert at tail: ";
            cin >> data;
            list.insertAtTail(data);
            break;

        case 4:
            cout << "Enter target value: ";
            cin >> target;
            cout << "Enter data to insert after " << target << ": ";
            cin >> data;
            list.insertAfterTarget(target, data);
            break;

        case 5:
            cout << "Enter data to search: ";
            cin >> data;
            if (list.search(data))
                cout << "Node found with data = " << data << ".\n";
            else
                cout << "Node not found.\n";
            break;

        case 6:
            cout << "Enter data to remove: ";
            cin >> data;
            list.remove(data);
            break;

        case 7:
            cout << "List (forward): ";
            list.printForward();
            break;

        case 8:
            cout << "List (backward): ";
            list.printBackward();
            break;

        case 0:
            cout << "Exiting program. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}