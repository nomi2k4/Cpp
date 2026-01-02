#include "header.h"

using namespace std;

Item::Item()
{
    itemID = 0;
    itemName = "";
    price = 0.0;
    purchasedQuantity = 0;
    totalPrice = 0.0;
    next = NULL;
    previous = NULL;
}

Item::Item(int id)
{
    itemID = id;
    next = NULL;
    previous = NULL;
}

int Item::getItemID()
{
    return itemID;
}

void Item::setItemID(int id)
{
    itemID = id;
}

string Item::getItemName()
{
    return itemName;
}

void Item::setItemName(string name)
{
    itemName = name;
}

double Item::getPrice()
{
    return price;
}

void Item::setPrice(double p)
{
    price = p;
}

int Item::getPurchasedQuantity()
{
    return purchasedQuantity;
}

void Item::setPurchasedQuantity(int q)
{
    purchasedQuantity = q;
}

double Item::getTotalPrice()
{
    return totalPrice;
}

void Item::setTotalPrice(double t)
{
    totalPrice = t;
}

Item* Item::getNext()
{
    return next;
}

void Item::setNext(Item* n)
{
    next = n;
}

Item* Item::getPrevious()
{
    return previous;
}

void Item::setPrevious(Item* p)
{
    previous = p;
}

void Item::input()
{
    cout << "Enter Item ID: ";
    cin >> itemID;
    cin.ignore();

    cout << "Enter Item Name: ";
    getline(cin, itemName);

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Quantity: ";
    cin >> purchasedQuantity;

    totalPrice = price * purchasedQuantity;
}

void Item::display()
{
    cout << "\n-----------------------------------";
    cout << "\nItem ID: " << itemID;
    cout << "\nItem Name: " << itemName;
    cout << "\nPrice: " << price;
    cout << "\nQuantity: " << purchasedQuantity;
    cout << "\nTotal Price: " << totalPrice;
    cout << "\n-----------------------------------" << endl;
}

//------------------------------------------------------

Cart::Cart()
{
    head = NULL;
    tail = NULL;
}

bool Cart::isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}


Item* Cart::search(int id)
{
    Item* temp = head;
    while (temp != NULL)
    {
        if (temp->getItemID() == id)
        {
            return temp;
        }
        else
        {
            temp = temp->getNext();
        }
    }
    return NULL;
}

void Cart::addToCart(int itemID, string itemName, double price, int purchasedQuantity)
{
    Item* existing = search(itemID);

    if (existing != NULL)
    {
        addExistingToCart(itemID, purchasedQuantity);
        return;
    }

    Item* temp = new Item();
    temp->setItemID(itemID);
    temp->setItemName(itemName);
    temp->setPrice(price);
    temp->setPurchasedQuantity(purchasedQuantity);
    temp->setTotalPrice(price * purchasedQuantity);

    if (isEmpty())
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->setNext(temp);
        temp->setPrevious(tail);
        tail = temp;
    }

    cout << "\nItem added to cart successfully!" << endl;
}

void Cart::addExistingToCart(int itemID, int quantityToAdd)
{
    Item* found = search(itemID);
    if (found == NULL)
    {
        cout << "\nItem not found in cart!" << endl;
        return;
    }

    int newQuantity = found->getPurchasedQuantity() + quantityToAdd;
    found->setPurchasedQuantity(newQuantity);
    found->setTotalPrice(found->getPrice() * newQuantity);

    cout << "\nQuantity updated successfully!" << endl;
}

void Cart::removeFromCart(Item itemToRemove)
{
    Item* target = search(itemToRemove.getItemID());

    if (target == NULL)
    {
        cout << "\nItem not found in cart!" << endl;
        return;
    }

    if (target == head)
    {
        head = head->getNext();
        if (head != NULL)
            head->setPrevious(NULL);
        delete target;
    }
    else if (target == tail)
    {
        tail = tail->getPrevious();
        if (tail != NULL)
            tail->setNext(NULL);
        delete target;
    }
    else
    {
        Item* prev = target->getPrevious();
        Item* next = target->getNext();
        prev->setNext(next);
        next->setPrevious(prev);
        delete target;
    }

    cout << "\nItem removed from cart successfully!" << endl;
}

void Cart::changeQuantity(int itemID, int newQuantity)
{
    Item* target = search(itemID);
    if (target == NULL)
    {
        cout << "\nItem not found in cart!" << endl;
        return;
    }

    if (newQuantity <= 0)
    {
        removeFromCart(*target);
        return;
    }

    target->setPurchasedQuantity(newQuantity);
    target->setTotalPrice(target->getPrice() * newQuantity);

    cout << "\nQuantity changed successfully!" << endl;
}

double Cart::calculateBill()
{
    double total = 0.0;
    Item* temp = head;

    while (temp != NULL)
    {
        total = total + temp->getTotalPrice();
        temp = temp->getNext();
    }

    return total;
}

void Cart::printBill()
{
    if (isEmpty())
    {
        cout << "\nCart is empty!" << endl;
        return;
    }

    cout << "\n========== BILL DETAILS ==========\n";
    Item* temp = head;
    while (temp != NULL)
    {
        cout << temp->getItemName() << " (x" << temp->getPurchasedQuantity() << ") - $" << temp->getTotalPrice() << endl;
        temp = temp->getNext();
    }
    cout << "-----------------------------------\n";
    cout << "Total Amount: $" << calculateBill() << endl;
    cout << "===================================\n";
}

void Cart::viewCart()
{
    if (isEmpty())
    {
        cout << "\nCart is empty!" << endl;
        return;
    }

    Item* temp = head;
    while (temp != NULL)
    {
        temp->display();
        temp = temp->getNext();
    }
}

void Cart::viewCartByItem()
{
    if (isEmpty())
    {
        cout << "\nCart is empty!" << endl;
        return;
    }

    Item* temp = head;
    char choice;

    while (temp != NULL)
    {
        temp->display();
        cout << "\nPress 'n' for next, 'p' for previous, 'q' to quit: ";
        cin >> choice;

        if (choice == 'n')
        {
            if (temp->getNext() != NULL)
                temp = temp->getNext();
            else
                cout << "\nNo next item!" << endl;
        }
        else if (choice == 'p')
        {
            if (temp->getPrevious() != NULL)
                temp = temp->getPrevious();
            else
                cout << "\nNo previous item!" << endl;
        }
        else if (choice == 'q')
        {
            break;
        }
        else
        {
            cout << "\nInvalid choice!" << endl;
        }
    }
}
