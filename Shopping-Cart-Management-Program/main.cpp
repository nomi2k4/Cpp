#include "header.h"

using namespace std;

int main()
{
    Cart cart;
    int choice;

    do
    {
        cout << "\n========== Shopping Cart Menu ==========\n";
        cout << "1. Add Item to Cart" << endl;
        cout << "2. Add Quantity to Existing Item" << endl;
        cout << "3. Remove Item from Cart" << endl;
        cout << "4. Change Quantity of Item" << endl;
        cout << "5. View Cart (All Items)" << endl;
        cout << "6. View Cart by Item" << endl;
        cout << "7. Print Bill" << endl;
        cout << "8. Exit" << endl;
        cout << "========================================" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
        {
            int id, qty;
            string name;
            double price;

            cout << "Enter Item ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter Item Name: ";
            getline(cin, name);

            cout << "Enter Price: ";
            cin >> price;

            cout << "Enter Quantity: ";
            cin >> qty;

            cart.addToCart(id, name, price, qty);
            break;
        }

        case 2:
        {
            int id, qty;
            cout << "Enter Item ID to Add Quantity: ";
            cin >> id;
            cout << "Enter Quantity to Add: ";
            cin >> qty;
            cart.addExistingToCart(id, qty);
            break;
        }

        case 3:
        {
            int id;
            cout << "Enter Item ID to Remove: ";
            cin >> id;
            Item temp(id);
            cart.removeFromCart(temp);
            break;
        }

        case 4:
        {
            int id, newQty;
            cout << "Enter Item ID: ";
            cin >> id;
            cout << "Enter New Quantity (0 to remove): ";
            cin >> newQty;
            cart.changeQuantity(id, newQty);
            break;
        }

        case 5:
        {
            cart.viewCart();
            break;
        }

        case 6:
        {
            cart.viewCartByItem();
            break;
        }

        case 7:
        {
            cart.printBill();
            break;
        }

        case 8:
        {
            cout << "\nExiting Program..." << endl;
            break;
        }

        default:
        {
            cout << "\nInvalid choice! Try again." << endl;
        }
        }

    } while (choice != 8);

    return 0;
}
