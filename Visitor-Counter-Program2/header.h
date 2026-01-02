#include <iostream>
#include <string>
using namespace std;

class VisitorCounter
{
private:
    string IP;
    VisitorCounter* next;

public:
    VisitorCounter();
    VisitorCounter(string ip);

    string getIP();
    void setIP(string ip);
    VisitorCounter* getNext();
    void setNext(VisitorCounter* next);
};

class VisitorList
{
private:
    VisitorCounter* head;
    int count;

public:
    VisitorList();

    void add(string ip);
    int search(string ip);
    void Delete(string ip);
    void Display();
};