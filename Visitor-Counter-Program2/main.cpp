#include "header.h"
using namespace std;

int main()
{
    int choice;
    string ip;

    VisitorList v;

    while (true)
    {
        cout << "\n\n--- Visitor Counter Menu ---\n";
        cout << "1. Add Visitor\n";
        cout << "2. Search Visitor\n";
        cout << "3. Delete Visitor\n";
        cout << "4. Display Visitors\n";
        cout << "5. Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter IP to add: ";
            cin >> ip;
            v.add(ip);
            cout << "Visitor added.\n";
            break;

        case 2:
            cout << "\nEnter IP to search: ";
            cin >> ip;
            if (v.search(ip) != -1)
                cout << "Visitor Found!\n";
            else
                cout << "Visitor Not Found!\n";
            break;

        case 3:
            cout << "\nEnter IP to delete: ";
            cin >> ip;
            v.Delete(ip);
            break;

        case 4:
            v.Display();
            break;

        case 5:
            cout << "\nExiting program...\n";
            return 0;

        default:
            cout << "\nInvalid choice! Please try again.\n";
        }
    }

    return 0;
}