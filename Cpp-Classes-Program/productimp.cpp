#include "product.h"

Product::Product(string name,double price,int quantity,string category)
{
    this->name = name;
    this->price = price;
    this->quantity = quantity;
    this->category = category;
}

string Product::getName() 
{
    return name;
}

double Product::getPrice() 
{
    return price;
}

int Product::getQuantity() 
{
    return quantity;
}

string Product::getCategory() 
{
    return category;
}

void Product::setName(string name) 
{
    this->name = name;
}

void Product::setPrice(double price) 
{
    this->price = price;
}

void Product::setQuantity(int quantity) 
{
    this->quantity = quantity;
}

void Product::setCategory(string category) 
{
    this->category = category;
}

void Product::displayInfo() 
{
    cout << "Product Name: " << name << endl;
    cout << "Price: " << price << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Category: " << category << endl;
}