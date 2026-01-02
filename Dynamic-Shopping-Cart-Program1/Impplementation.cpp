#include "header.h"
using namespace std;

ShoppingCart::ShoppingCart(int capacity)
{
    this->capacity = capacity;
    cart = new string[capacity];
    size = 0;
}

int ShoppingCart::getCapacity()
{
    return capacity;
}

int ShoppingCart::getSize()
{
    return size;
}

void ShoppingCart::insertItem(string itemName)
{
    if (size == capacity)
    {
        resize();
        cart[size] = itemName;
        size++;
    }
    else
    {
        cart[size] = itemName;
        size++;
    }
}

void ShoppingCart::resize()
{
    capacity = capacity * 2;
    string* newCart = new string[capacity];
    for (int i = 0; i < size; i++)
    {
        newCart[i] = cart[i];
    }
    delete[] cart;
    cart = newCart;
}

void ShoppingCart::displayCart()
{
    cout << "\nCart Details:";
    if (size == 0)
    {
        cout << " Cart is empty!" << endl;
        return;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "\nItem " << i + 1 << " = " << cart[i];
    }
    cout << endl;
}

int ShoppingCart::search(string itemName)
{
    for (int i = 0; i < size; i++)
    {
        if (cart[i] == itemName)
        {
            return i;
        }
    }
    return -1;
}

void ShoppingCart::shift(int index)
{
    for (int i = index; i < size - 1; i++)
    {
        cart[i] = cart[i + 1];
    }
    size--;
}

void ShoppingCart::removeItem(string itemName)
{
    int index = search(itemName);
    if (index != -1)
    {
        cart[index] = "";
        shift(index);
        cout << itemName << " removed from cart." << endl;
    }
    else
    {
        cout << itemName << " not found in cart!" << endl;
    }
}

void ShoppingCart::clearCart()
{
    size = 0;
    cout << "\nCart has been cleared." << endl;
}