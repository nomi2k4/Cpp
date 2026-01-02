#include <iostream>
#include<string>
using namespace std;

class ToolBooth 
{
private:
    int totalCars;
    double totalAmount;

public:
    ToolBooth();
    void nopayCar();
    void payingCar(double amount);
    void display();
};