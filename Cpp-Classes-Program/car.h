#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
    string color;

public:
   Car(string, string, int,string);
   string getMake();
   string getModel();
   int getYear();
   string getColor();

   void setMake(string);
   void setModel(string);
   void setYear(int);
   void setColor(string);
   void displayInfo();
};