#include "header.h"
using namespace std;

int main()
{
    Cart cart(3);

    for (int i = 0; i < 10; i++)
    {
        cart.insertItem(2001 + i);
    }

    cart.displayCart();

    return 0;
}