#include <iostream>
#include "header.h"
using namespace std;

int main()
{
    list l;
    int choice, data, target;
    Node* result;

    do {
        cout << "\n\n===== Circular Linked List Menu =====";
        cout << "\n1. Check if list is empty";
        cout << "\n2. Insert at head";
        cout << "\n3. Insert at tail";
        cout << "\n4. Insert after target";
        cout << "\n5. Search for a node";
        cout << "\n6. Remove a node";
        cout << "\n7. Print the list";
        cout << "\n0. Exit";
        cout << "\n=====================================";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << (l.isempty() ? "List is empty.\n" : "List is not empty.\n");
            break;

        case 2:
            cout << "Enter data to insert at head: ";
            cin >> data;
            l.insertathead(data);
            cout << "Inserted " << data << " at head.\n";
            break;

        case 3:
            cout << "Enter data to insert at tail: ";
            cin >> data;
            l.insertattail(data);
            cout << "Inserted " << data << " at tail.\n";
            break;

        case 4:
            cout << "Enter target value: ";
            cin >> target;
            cout << "Enter data to insert after " << target << ": ";
            cin >> data;
            l.insertattarget(target, data);
            break;

        case 5:
            cout << "Enter data to search: ";
            cin >> data;
            result = l.search(data);
            if (result != NULL)
                cout << "Node found with data = " << result->getdata() << endl;
            else
                cout << "Node not found.\n";
            break;

        case 6:
            cout << "Enter data to remove: ";
            cin >> data;
            l.remove(data);
            cout << "If present, " << data << " has been removed.\n";
            break;

        case 7:
            cout << "Current list: ";
            l.print();
            cout << endl;
            break;

        case 0:
            cout << "Exiting program. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
