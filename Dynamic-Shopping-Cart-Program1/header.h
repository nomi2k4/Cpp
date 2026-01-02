#include <iostream>
#include <string>
using namespace std;

class ShoppingCart
{
private:
    string *cart;
    int capacity;
    int size;

public:
    ShoppingCart(int);
    int getCapacity();
    int getSize();
    void insertItem(string itemName);
    void resize();
    void displayCart();
    int search(string itemName);
    void shift(int index);
    void removeItem(string itemName);
    void clearCart();
};