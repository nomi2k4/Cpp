#include"header.h"

int main() 
{
    ToolBooth booth;

    booth.payingCar(5);
    booth.payingCar(10);
    booth.nopayCar();
    booth.payingCar(7);

    booth.display();

    return 0;
}