#include<iostream>
using namespace std;

class SensorData
{
private:
    int *readings;   
    int capacity;    
    int size;   

public:
    SensorData(int);  
    void insertReading(int temp);  
    void resize();  
    void displayReadings();  
    int getCapacity();  
    int getSize();  
};