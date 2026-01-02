#include <iostream>
using namespace std;

struct Car
{
    int carID;
    string model;
    double rentPerDay;
    bool isAvailable;
};

void rentCar(Car& c, int days)
{
    if (c.isAvailable)
    {
        double totalRent = c.rentPerDay * days;
        if (days > 7)
        {
            totalRent *= 0.9;
            cout << "Discount applied: 10% off" << endl;
        }
        cout << "Car ID: " << c.carID << endl;
        cout << "Model: " << c.model << endl;
        cout << "Rental period: " << days << " days" << endl;
        cout << "Total rent: $" << totalRent << endl;
        c.isAvailable = false;
    }
    else
    {
        cout << "Sorry, the car is not available." << endl;
    }
}

int main()
{
    Car cars[] = { {1, "Toyota Camry", 40.0, true},{2, "Honda Civic", 35.0, true},{3, "Ford Focus", 30.0, true} };

    int choice, days;
    cout << "Available cars:" << endl;
    for (int i = 0; i < 3; i++)
    {
        if (cars[i].isAvailable)
        {
            cout << cars[i].carID << ". " << cars[i].model << endl;
        }
    }
    cout << "Enter the car ID: ";
    cin >> choice;
    cout << "For how many days you want the car: ";
    cin >> days;
    rentCar(cars[choice - 1], days);
    return 0;
}
