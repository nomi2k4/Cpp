#include "header.h"
using namespace std;

int main()
{
    SensorData sensor(4);
    // after 4 it resize the array because the capacity is 4

    int readings[] = {22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};

    for (int i = 0; i < 12; i++)
    {
        sensor.insertReading(readings[i]);
        cout << "Inserted " << readings[i]<<" \u00B0C"  << endl;
    }

    sensor.displayReadings();
    
    return 0;
}