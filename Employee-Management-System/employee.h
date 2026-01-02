#include<iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;

public:
    Employee();
    Employee(int id, string name);
    Employee(Employee& e);

    int getId();
    string getName();

    void setId(int id);
    void setName(string name);

    void getData();
    void putData();
};