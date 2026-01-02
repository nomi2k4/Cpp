#include "header.h"
using namespace std;

SensorData::SensorData(int initialCapacity)
{
    this->capacity = initialCapacity;
    readings = new int[capacity];
    size = 0;
}

int SensorData::getCapacity()
{
    return capacity;
}

int SensorData::getSize()
{
    return size;
}

void SensorData::insertReading(int temp)
{
    if (size == capacity)
    {
        resize();
        readings[size] = temp;
        size++;  
    }
    else
    {
    readings[size] = temp;
    size++;    
    }
    
}

void SensorData::resize()
{
    this->capacity=capacity*2;
    int *newArray = new int[capacity];
    
    for (int i = 0; i < size; i++)
    {
        newArray[i] = readings[i];
    }
    
    delete[] readings;
    readings = newArray;
}

void SensorData::displayReadings()
{
    cout << "\nTemperature in \u00B0C = ";
    for (int i = 0; i < size; i++)
    {
        cout << readings[i] << " ";
    }
}