#include <iostream>
#include <string>
using namespace std;

class Bus
{
private:
    int bus_num;
    string route_name;

public:
    Bus()
    {
        bus_num = 0;
        route_name = "";
    }

    int get_bus_num()
    {
        return bus_num;
    }

    string get_route_name()
    {
        return route_name;
    }

    void set_bus_num(int busNum)
    {
        bus_num = busNum;
    }

    void set_route_name(string route)
    {
        route_name = route;
    }
};

class Driver
{
private:
    Bus routes[10];
    int route_count;

public:
    Driver()
    {
        route_count = 0;
    }

    void add_route()
    {
        if (route_count >= 10)
        {
            cout << "Cannot add more routes. Limit reached!" << endl;
            return;
        }

        int busNumber;
        string routeName;
        cout << "Enter bus number: ";
        cin >> busNumber;
        cin.ignore();
        cout << "Enter route name: ";
        getline(cin, routeName);

        for (int i = 0; i < route_count; i++)
        {
            if (routes[i].get_bus_num() == busNumber)
            {
                cout << "Bus number " << busNumber << " already exists!" << endl;
                return;
            }
        }

        routes[route_count].set_bus_num(busNumber);
        routes[route_count].set_route_name(routeName);
        route_count++;
        cout << "Route added!" << endl;
    }

    void remove_route()
    {
        int busNumber;
        cout << "Enter bus number to remove: ";
        cin >> busNumber;

        for (int i = 0; i < route_count; i++)
        {
            if (routes[i].get_bus_num() == busNumber)
            {
                for (int j = i; j < route_count - 1; j++)
                {
                    routes[j] = routes[j + 1];
                }
                route_count--;
                cout << "Route removed!" << endl;
                return;
            }
        }
        cout << "Route not found!" << endl;
    }

    void search_route()
    {
        int busNumber;
        cout << "Enter bus number to search: ";
        cin >> busNumber;

        for (int i = 0; i < route_count; i++)
        {
            if (routes[i].get_bus_num() == busNumber)
            {
                cout << "Route found: Bus Number: " << routes[i].get_bus_num()
                    << ", Route Name: " << routes[i].get_route_name() << endl;
                return;
            }
        }
        cout << "Route not found!" << endl;
    }
};

int main()
{
    Driver driver;
    char choice;

    do
    {
        cout << "\n1. Add Route\n2. Remove Route\n3. Search Route\n4. Exit\n";
        cout << "Enter choice (1-4): ";
        int option;
        cin >> option;
        cin.ignore();

        switch (option)
        {
        case 1:
            driver.add_route();
            break;
        case 2:
            driver.remove_route();
            break;
        case 3:
            driver.search_route();
            break;
        case 4:
            cout << "Exiting...\n";
            return 0;
        default:
            cout << "Invalid choice!\n";
            break;
        }
        cout << "\nContinue? (Y/N): ";
        cin >> choice;
        cin.ignore();
    } while (choice == 'y' || choice == 'Y');

    return 0;
}