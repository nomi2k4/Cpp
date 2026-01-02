#include"header.h"
using namespace std;

array::array(int capacity)
{
    this->capacity = capacity;
    arr = new int[capacity];
    size = 0;

}

int array::getCapacity()
{
    return capacity;
}

void array::setCapacity(int capacity)
{
    this->capacity = capacity;
}

int array::getSize()
{
    return size;
}

void array::setSize(int size)
{
    this->size = size;
}


void array::insert(int value)
{

    if (size == capacity)
    {
        resize();
        arr[size] = value;
        size++;
    }
    else
    {
        arr[size] = value;
        size++;
    }

}

void array::resize()
{
    capacity = capacity + 5;
    int* newarray = new int[capacity];
    for (int i = 0; i < size; i++)
    {
        newarray[i] = arr[i];
    }
    delete[] arr;
    arr = newarray;
}

void array::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << "\n" << arr[i];
    }
}