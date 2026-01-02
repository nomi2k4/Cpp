#include <iostream>
#include <string>
using namespace std;

class Item
{
private:
    int itemID;
    string itemName;
    double price;
    int purchasedQuantity;
    double totalPrice;
    Item* next;
    Item* previous;

public:
    Item();
    Item(int);
    int getItemID();
    void setItemID(int);
    string getItemName();
    void setItemName(string);
    double getPrice();
    void setPrice(double);
    int getPurchasedQuantity();
    void setPurchasedQuantity(int);
    double getTotalPrice();
    void setTotalPrice(double);
    Item* getNext();
    void setNext(Item*);
    Item* getPrevious();
    void setPrevious(Item*);
    void input();
    void display();
};


class Cart
{
private:
    Item* head;
    Item* tail;

public:
    Cart();
    void addToCart(int itemID, string itemName, double price, int purchasedQuantity);
    void addExistingToCart(int itemID, int quantityToAdd);
    void removeFromCart(Item itemToRemove);
    void changeQuantity(int itemID, int newQuantity);
    double calculateBill();
    void printBill();
    void viewCartByItem();
    void viewCart();
    Item* search(int itemID);
    bool isEmpty();
};