#include"header.h"

ToolBooth::ToolBooth()
{
    totalCars = 0;
    totalAmount = 0.0;
}
void ToolBooth::payingCar(double amount)
{
    totalCars++;
    totalAmount += amount;
}

void ToolBooth::nopayCar()
{
    totalCars++;
}

void ToolBooth::display()
{
    cout << "Total Number of Cars: " << totalCars << endl;
    cout << "Total Amount Collected: $" << totalAmount << endl;
    cout << "Number of Non-Paying Cars: " << totalCars - (totalAmount > 0 ? totalCars : 0) << endl;
}