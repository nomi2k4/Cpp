#include "Car.h"

Car::Car()
{
    make = "";
    model = "";
    year = 0;
    isRented = false;
}

Car::Car(string m, string mod, int y)
{
    make = m;
    model = mod;
    year = y;
    isRented = false;
}

Car::Car(const Car& c)
{
    make = c.make;
    model = c.model;
    year = c.year;
    isRented = c.isRented;
}

string Car::getMake()
{
    return make;
}

string Car::getModel()
{
    return model;
}

int Car::getYear()
{
    return year;
}

bool Car::getIsRented()
{
    return isRented;
}

void Car::setMake(string m)
{
    make = m;
}

void Car::setModel(string mod)
{
    model = mod;
}

void Car::setYear(int y)
{
    year = y;
}

void Car::setIsRented(bool rented)
{
    isRented = rented;
}
