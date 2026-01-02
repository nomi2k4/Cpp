#include<iostream>
#include <string>
using namespace std;

class Manager
{
private:
    string title;
    double dues;

public:
    Manager();
    Manager(string title, double dues);
    Manager(Manager& m);

    string getTitle();
    double getDues();

    void setTitle(string title);
    void setDues(double dues);

    void getData();
    void putData();
};