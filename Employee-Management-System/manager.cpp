#include "manager.h"

Manager::Manager() : title(""), dues(0.0) {}

Manager::Manager(string title, double dues) : title(title), dues(dues) {}

Manager::Manager(Manager& m) : title(m.title), dues(m.dues) {}

string Manager::getTitle()
{
    return title;
}

double Manager::getDues()
{
    return dues;
}

void Manager::setTitle(string title)
{
    this->title = title;
}

void Manager::setDues(double dues)
{
    this->dues = dues;
}

void Manager::getData()
{
    cout << "\n\nEnter Manager Title: ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter Manager Dues: ";
    cin >> dues;
}

void Manager::putData()
{
    cout << "\nManager Title: " << title << "\nDues: " << dues << endl;
}
