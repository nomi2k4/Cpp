#include "header.h"
using namespace std;

Cart::Cart(int capacity)
{
    this->capacity = capacity;
    cart = new int[capacity];
    size = 0;
}

int Cart::getCapacity()
{
    return capacity;
}

int Cart::getSize()
{
    return size;
}

void Cart::insertItem(int itemID)
{
    if (size == capacity)
    {
        resize();
        cart[size] = itemID;
        size++;
    }
    else
    {
        cart[size] = itemID;
        size++;
    }
}

void Cart::resize()
{
    capacity = capacity * 2;
    int* newCart = new int[capacity];
    for (int i = 0; i < size; i++)
    {
        newCart[i] = cart[i];
    }
    delete[] cart;
    cart = newCart;
}

void Cart::displayCart()
{
    cout << "Cart Detail.....\n";
    for (int i = 0; i < size; i++)
    {
        cout << "\nItems ID# "<<i+1<<"= "<< cart[i] << " ";
    }
    cout << endl;
}