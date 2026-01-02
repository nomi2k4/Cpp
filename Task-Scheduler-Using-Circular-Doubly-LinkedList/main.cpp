#include<iostream>
#include"header.h"
    using namespace std;

int main()
{
    TaskList t;
    int choice, id;
    string desc, pri, dl;

    do
    {
        cout << "\n===== TASK SCHEDULER MENU =====";
        cout << "\n1. Add New Task";
        cout << "\n2. View Tasks";
        cout << "\n3. Edit a Task";
        cout << "\n4. Delete a Task";
        cout << "\n5. View Tasks by Priority";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Task ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Description: ";
            getline(cin, desc);
            cout << "Enter Priority (High/Medium/Low): ";
            getline(cin, pri);
            cout << "Enter Deadline: ";
            getline(cin, dl);
            t.addTask(id, desc, pri, dl);
            break;

        case 2:
            int subChoice;
            cout << "\n1. View Next Task";
            cout << "\n2. View Previous Task";
            cout << "\n3. View All Tasks";
            cout << "\nEnter your choice: ";
            cin >> subChoice;

            switch (subChoice)
            {
            case 1: t.viewNext(); break;
            case 2: t.viewPrevious(); break;
            case 3: t.viewAll(); break;
            default: cout << "Invalid choice!\n";
            }
            break;

        case 3:
            cout << "Enter Task ID to edit: ";
            cin >> id;
            t.editTask(id);
            break;

        case 4:
            cout << "Enter Task ID to delete: ";
            cin >> id;
            t.deleteTask(id);
            break;

        case 5:
            cout << "Enter Priority to view (High/Medium/Low): ";
            cin >> pri;
            t.viewByPriority(pri);
            break;

        case 6:
            cout << "Exiting... Goodbye!\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}