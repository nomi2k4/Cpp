#include "ram.h"

RAM::RAM()
{
    capacity = 0;
}

RAM::RAM(int capacity)
{
    this->capacity = capacity;
}

RAM::RAM(RAM& ram)
{
    this->capacity = ram.capacity;
}

int RAM::getCapacity()
{
    return capacity;
}

void RAM::setCapacity(int capacity)
{
    this->capacity = capacity;
}

void RAM::insertData(string data)
{
    cout << "Data inserted: " << data << endl;
}

void RAM::displayData()
{
    cout << "RAM Capacity: " << capacity << " GB" << endl;
}
