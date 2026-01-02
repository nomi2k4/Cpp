#include<iostream>
#include<string>
using namespace std;

class Customer
{
private:
    string name;
    int customerID;

public:
    Customer();
    Customer(string, int);
    Customer(const Customer&);

    string getName();
    int getCustomerID();

    void setName(string);
    void setCustomerID(int);
};
