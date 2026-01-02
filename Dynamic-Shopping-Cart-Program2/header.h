#include <iostream>
using namespace std;

class Cart
{
private:
    int* cart;
    int capacity;
    int size;

public:
    Cart(int);
    int getCapacity();
    int getSize();
    void insertItem(int itemID);
    void resize();
    void displayCart();
};