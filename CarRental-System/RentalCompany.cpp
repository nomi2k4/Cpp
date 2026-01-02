#include "RentalCompany.h"

RentalCompany::RentalCompany()
{
    carCount = 0;
    customerCount = 0;
}

void RentalCompany::addCar(string make, string model, int year)
{
    if (carCount < 10)
    {
        cars[carCount] = new Car(make, model, year);
        carCount++;
    }
}

void RentalCompany::displayCars()
{
    for (int i = 0; i < carCount; i++)
    {
        cout << "Make: " << cars[i]->getMake() << ", Model: " << cars[i]->getModel() << ", Year: " << cars[i]->getYear() << ", Available: " << (cars[i]->getIsRented() ? "No" : "Yes") << endl;
    }
}

void RentalCompany::addCustomer(string name, int customerID)
{
    if (customerCount < 10)
    {
        customers[customerCount] = new Customer(name, customerID);
        customerCount++;
    }
}

void RentalCompany::rentCar(int customerID, int carIndex)
{
    if (carIndex >= 0 && carIndex < carCount && !cars[carIndex]->getIsRented())
    {
        cars[carIndex]->setIsRented(true);
        cout << "Customer " << customerID << " rented the car: " << cars[carIndex]->getMake() << " " << cars[carIndex]->getModel() << endl;
    }
    else
    {
        cout << "Car is already rented or invalid car index." << endl;
    }
}

void RentalCompany::returnCar(int carIndex)
{
    if (carIndex >= 0 && carIndex < carCount && cars[carIndex]->getIsRented())
    {
        cars[carIndex]->setIsRented(false);
        cout << "Car returned: " << cars[carIndex]->getMake() << " " << cars[carIndex]->getModel() << endl;
    }
    else
    {
        cout << "Car is not rented or invalid car index." << endl;
    }
}
