#include "header.h"

int main()
{
    string text, key;
    int choice;
    cout << " _____                             _   _                  __  ____                              _   _" << endl;
    cout << "| ____|_ __   ___ _ __ _   _ _ __ | |_(_) ___  _ __      / / |  _ \\  ___   ___ _ __ _   _ _ __ | |_(_) ___  _ __" << endl;
    cout << "|  _| | '_ \\/  __| '__| | | | '_ \\| __| |/ _ \\| '_ \\    / /  | | | |/ _ \\/ __ | '__| | | | '_ \\| __| |/ _ \\| '_ \\" << endl;
    cout << "| |___| | | | (__| |  | |_| | |_) | |_| | (_) | | | |  / /   | |_| |  __  (__ | |  | |_| | |_) | |_| | (_) | | | |" << endl;
    cout << "|_____|_| |_|\\___|_|   \\__, | .__/\\___|_|\\___/|_| |_| /_/    |____/ \\___| \\___|_|   \\__, | .__/\\___|_|\\___/|_| |_|" << endl;
    cout << "                       |___/|_|                                                     |___/|_|" << endl;
    cout << "===================================================================================================================\n";
    while (true)
    {
       cout << "\n\n1. Encrypt\n2. Decrypt\n3. Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 3)
        {
            cout << "Exiting...\n";
            return 0;
        }

        cout << "Enter Text: ";
        getline(cin, text);

        cout << "Enter Key: ";
        getline(cin, key);

        if (choice == 1)
        {
            Encrypt(text, key);
        }

        else if (choice == 2)
        {
            Decrypt(text, key);
        }            
    }
}