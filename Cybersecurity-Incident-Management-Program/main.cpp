#include "Header.h"

using namespace std;

int main()
{
    list system;
    int choice;

    do
    {
        cout << "1. Add Incident" << endl;
        cout << "2. Show Most Severe Incident" << endl;
        cout << "3. Show Most Recent Incident" << endl;
        cout << "4. Resolve & Remove an Incident" << endl;
        cout << "5. Show All Incidents" << endl;
        cout << "6. Show All Incidents (Reverse)" << endl;
        cout << "7. Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
        {
            analyst record;
            record.input();

            if (record.getSeverityLevel() == "critical")
            {
                system.insertAtHead(record);
            }
            else if (record.getSeverityLevel() == "high")
            {
                if (system.isEmpty())
                {
                    cout << "List is empty, inserting at head by default." << endl;
                    system.insertAtHead(record);
                }
                else
                {
                    analyst target;
                    cout << "Enter Incident ID after which to insert (for high severity): ";
                    int id;
                    cin >> id;
                    cin.ignore();
                    target.setIncidentID(id);
                    system.insertAtTarget(target, record);
                }
            }
            else if (record.getSeverityLevel() == "low")
            {
                system.insertAtTail(record);
            }
            else
            {
                cout << "Invalid Severity Type! Record not added." << endl;
            }

            break;
        }

        case 2:
        {
            cout << "\nEnter Status to Filter (active/resolved): ";
            string status;
            getline(cin, status);

            cout << "Enter Severity to Search (critical/high/low): ";
            string severity;
            getline(cin, severity);

            system.mostSevereIncident(status, severity);
            break;
        }

        case 3:
        {
            if (system.isEmpty())
            {
                cout << "\nNo incidents recorded yet !!!" << endl;
            }
            else
            {
                cout << "\nMost Recent Incident:" << endl;
                system.getTail()->display();
            }
            break;
        }

        case 4:
        {
            int id;
            cout << "\nEnter Incident ID to Resolve & Remove: ";
            cin >> id;
            cin.ignore();
            system.removeIncident(id);
            break;
        }

        case 5:
        {
            cout << "\nAll Recorded Incidents:" << endl;
            system.printAll();
            break;
        }

        case 6:
        {
            cout << "\nAll Incidents (Reverse Display):" << endl;
            system.printReverse();
            break;
        }

        case 7:
        {
            cout << "\nExiting Program..." << endl;
            break;
        }

        default:
        {
            cout << "\nInvalid choice !!! \nTry again." << endl;
        }
        }

    } while (choice != 7);

    return 0;
}