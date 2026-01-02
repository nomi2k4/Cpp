#include <iostream>
#include <string>

using namespace std;

class Product {
private:
    string name;
    double price;
    int quantity;
    string category;

public:
    Product(string,double,int,string);
    string getName();
    double getPrice();
    int getQuantity();
    string getCategory();

    void setName(string);
    void setPrice(double);
    void setQuantity(int);
    void setCategory(string);
    void displayInfo();
};