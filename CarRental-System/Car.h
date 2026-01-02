#include<iostream>
#include<string>
using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;
    bool isRented;

public:
    Car();
    Car(string, string, int);
    Car(const Car&);

    string getMake();
    string getModel();
    int getYear();
    bool getIsRented();

    void setMake(string);
    void setModel(string);
    void setYear(int);
    void setIsRented(bool);
};
