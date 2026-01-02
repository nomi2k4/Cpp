#include "Customer.h"

Customer::Customer()
{
    name = "";
    customerID = 0;
}

Customer::Customer(string n, int id)
{
    name = n;
    customerID = id;
}

Customer::Customer(const Customer& c)
{
    name = c.name;
    customerID = c.customerID;
}

string Customer::getName()
{
    return name;
}

int Customer::getCustomerID()
{
    return customerID;
}

void Customer::setName(string n)
{
    name = n;
}

void Customer::setCustomerID(int id)
{
    customerID = id;
}
