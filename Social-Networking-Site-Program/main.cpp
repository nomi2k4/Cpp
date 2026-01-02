#include "header.h"

using namespace std;

int main()
{
    Dlist social;
    int choice;

    do
    {
        cout << "\n========== Social Networking Site ==========\n";
        cout << "1. New Post" << endl;
        cout << "2. View Posts" << endl;
        cout << "3. Exit" << endl;
        cout << "============================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cin.ignore();
            string msg, share, date;

            cout << "Enter message: ";
            getline(cin, msg);

            cout << "Enter privacy (Public/Friends/Private): ";
            getline(cin, share);

            cout << "Enter date: ";
            getline(cin, date);

            social.newPost(msg, share, date);
            break;
        }

        case 2:
        {
            int subChoice;
            cout << "\n1. View newer posts (navigate one by one)";
            cout << "\n2. View by privacy";
            cout << "\n3. View all posts";
            cout << "\nEnter your choice: ";
            cin >> subChoice;

            switch (subChoice)
            {
            case 1:
                social.viewPosts();
                break;

            case 2:
            {
                string type;
                cin.ignore();
                cout << "Enter privacy type to view (Public/Friends/Private): ";
                getline(cin, type);
                social.viewByPrivacy(type);
                break;
            }

            case 3:
                social.viewAll();
                break;

            default:
                cout << "\nInvalid sub-choice!" << endl;
            }
            break;
        }

        case 3:
        {
            cout << "\nExiting program..." << endl;
            break;
        }

        default:
        {
            cout << "\nInvalid choice! Try again." << endl;
        }
        }

    } while (choice != 3);

    return 0;
}
