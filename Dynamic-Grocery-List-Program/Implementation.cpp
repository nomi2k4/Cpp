#include"header.h"
using namespace std;

Grocery::Grocery(int capacity)
{
    this->capacity = capacity;
    grocerylist = new string[capacity];
    size = 0;

}

int Grocery::getCapacity()
{
    return capacity;
}

void Grocery::setCapacity(int capacity)
{
    this->capacity = capacity;
}

int Grocery::getSize()
{
    return size;
}

void Grocery::setSize(int size)
{
    this->size = size;
}


void Grocery::insert(string item)
{

    if (size == capacity)
    {
        resize();
        grocerylist[size] = item;
        size++;
    }
    else
    {
        grocerylist[size] = item;
        size++;
    }

}

void Grocery::resize()
{
    capacity = capacity + 5;
    string *newlist = new string[capacity];
    for (int i = 0; i < size; i++)
    {
        newlist[i] = grocerylist[i];
    }
    delete[] grocerylist;
    grocerylist = newlist;
}

void Grocery::display()
{
    for (int i = 0; i < size; i++)
    {
        cout << "\n" << grocerylist[i];
    }
}