#include "header.h"
using namespace std;

AttendanceRecord::AttendanceRecord(int capacity)
{
    this->capacity = capacity;
    rollNumbers = new int[capacity];
    size = 0;
}

int AttendanceRecord::getCapacity()
{
    return capacity;
}

void AttendanceRecord::setCapacity(int capacity)
{
    this->capacity = capacity;
}

int AttendanceRecord::getSize()
{
    return size;
}

void AttendanceRecord::setSize(int size)
{
    this->size = size;
}

void AttendanceRecord::insert(int roll)
{
    if (size == capacity)
    {
        resize();
        rollNumbers[size] = roll;
        size++;
    }
    else
    {
        rollNumbers[size] = roll;
        size++;
    }
}

void AttendanceRecord::resize()
{
    capacity = capacity + 5;
    int *newList = new int[capacity];
    for (int i = 0; i < size; i++)
    {
        newList[i] = rollNumbers[i];
    }
    delete[] rollNumbers;
    rollNumbers = newList;
}

void AttendanceRecord::display()
{
    cout << "\nCurrent Attendance Record: \n";
    for (int i = 0; i < size; i++)
    {
        cout << "Roll NO: " << rollNumbers[i] << " "<<endl;
    }
    cout << endl;
}

int AttendanceRecord::search(int roll)
{
    for (int i = 0; i < size; i++)
    {
        if (rollNumbers[i] == roll)
        {
            return i;
        }
    }
    return -1;
}


void AttendanceRecord::shift(int index)
{
    for (int i = index; i < size - 1; i++)
    {
        rollNumbers[i] = rollNumbers[i + 1];
    }
    size--;
}


void AttendanceRecord::remove(int roll)
{
    int index = search(roll);
    if (index != -1)
    {
        rollNumbers[index] = 0;
        shift(index);
    }
    else
    {
        cout << "Roll number " << roll << " not found!" << endl;
    }
}