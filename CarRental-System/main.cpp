#include "RentalCompany.h"

using namespace std;

int main()
{
    RentalCompany company;

    company.addCar("Toyota", "Camry", 2020);
    company.addCar("Honda", "Civic", 2021);
    company.addCar("Ford", "Mustang", 2022);

    company.addCustomer("John Doe", 1);
    company.addCustomer("Jane Smith", 2);

    cout << "Available Cars: " << endl;
    company.displayCars();

    company.rentCar(1, 0);  // Customer 1 rents the first car
    company.rentCar(2, 1);  // Customer 2 rents the second car

    cout << "\nCars after renting: " << endl;
    company.displayCars();

    company.returnCar(0);  // Return the first car

    cout << "\nCars after returning the first car: " << endl;
    company.displayCars();

    return 0;
}
