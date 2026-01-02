#include "employee.h"

Employee::Employee() : id(0), name("") {}

Employee::Employee(int id, string name) : id(id), name(name) {}

Employee::Employee( Employee& e) : id(e.id), name(e.name) {}

int Employee::getId()
{
    return id;
}

string Employee::getName()
{
    return name;
}

void Employee::setId(int id)
{
    this->id = id;
}

void Employee::setName(string name)
{
    this->name = name;
}

void Employee::getData()
{
    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter Employee Name: ";
    cin.ignore();
    getline(cin, name);
}

void Employee::putData()
{
    cout << "\nEmployee ID: " << id << "\nName: " << name << endl;
}
