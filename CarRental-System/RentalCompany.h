#include<iostream>
#include<string>
#include "car.h"
#include "customer.h"
using namespace std;

class RentalCompany
{
private:
    Car* cars[10];  // Array to store 10 cars
    Customer* customers[10]; // Array to store  10 customers
    int carCount;
    int customerCount;

public:
    RentalCompany();
    void addCar(string, string, int);
    void displayCars();
    void addCustomer(string, int);
    void rentCar(int, int);
    void returnCar(int);
};
