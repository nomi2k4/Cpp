#include "header.h"
using namespace std;

VisitorCounter::VisitorCounter()
{
    IP = "";
    next = NULL;
}

VisitorCounter::VisitorCounter(string ip)
{
    this->IP = ip;
    next = NULL;
}

string VisitorCounter::getIP()
{
    return IP;
}

void VisitorCounter::setIP(string ip)
{
    this->IP = ip;
}

VisitorCounter* VisitorCounter::getNext()
{
    return next;
}

void VisitorCounter::setNext(VisitorCounter* next)
{
    this->next = next;
}

VisitorList::VisitorList()
{
    head = NULL;
    count = 0;
}

void VisitorList::add(string ip)
{
    VisitorCounter* newVisitor = new VisitorCounter(ip);
    count++;

    if (head == NULL)
    {
        head = newVisitor;
        return;
    }

    VisitorCounter* temp = head;
    while (temp->getNext() != NULL)
    {
        temp = temp->getNext();
    }
    temp->setNext(newVisitor);
}

int VisitorList::search(string ip)
{
    VisitorCounter* temp = head;
    int index = 0;
    while (temp != NULL)
    {
        if (ip == temp->getIP())
        {
            return index;
        }
        temp = temp->getNext();
        index++;
    }
    return -1;
}

void VisitorList::Delete(string ip)
{
    cout << "Searching.......\n";
    int index = search(ip);
    if (index == -1)
    {
        cout << "Not Found!!!!!" << endl;
        return;
    }

    cout << "Deleting (" << ip << ")\n";
    VisitorCounter* temp = head;
    VisitorCounter* prev = NULL;
    int current = 0;

    while (temp != NULL && current < index)
    {
        prev = temp;
        temp = temp->getNext();
        current++;
    }

    if (temp == NULL)
    {
        cout << "Not Found!!!!!" << endl;
        return;
    }

    if (prev == NULL)
    {
        head = temp->getNext();
    }
    else
    {
        prev->setNext(temp->getNext());
    }

    delete temp;
    count--;
    cout << "Deleted.......\n";
}

void VisitorList::Display()
{
    if (count == 0)
    {
        cout << "No Visits." << endl;
    }
    else
    {
        cout << "\nVisits:\n";
        VisitorCounter* temp = head;
        while (temp != NULL)
        {
            cout << temp->getIP() << endl;
            temp = temp->getNext();
        }
    }
}