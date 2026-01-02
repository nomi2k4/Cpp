#include"car.h"

Car::Car(string make, string model, int year, string color)
{
    this->make =make;
    this->model =model;
    this->year =year;
    this->color =color;
}

string Car::getMake()
{ return make; 
}

string Car::getModel()
{ return model;
}

int Car::getYear()
{ return year; 
}

string Car::getColor()
{ return color; 
}

void Car::setMake(string make) 
{ this->make = make; 
}

void Car::setModel(string model) 
{ this->model = model; 
}

void Car::setYear(int year) 
{ this->year = year; 
}

void Car::setColor(string color) 
{ this->color = color; 
}

void Car::displayInfo()
{
    cout << "Car Make: " << make << endl;
    cout << "Car Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Color: " << color << endl;
}