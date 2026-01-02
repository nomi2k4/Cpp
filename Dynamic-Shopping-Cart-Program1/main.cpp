#include "header.h"
using namespace std;

int main()
{
    ShoppingCart cart(2);

    cart.insertItem("Laptop");
    cart.insertItem("Mouse");
    cart.insertItem("Keyboard");

    cart.displayCart();

    cart.removeItem("Mouse");
    cart.displayCart();

    cart.insertItem("Headphones");
    cart.insertItem("USB Drive");
    cart.insertItem("Monitor");

    cart.displayCart();

    cart.clearCart();
    cart.displayCart();

    return 0;
}
