#include "Header.h"

using namespace std;

// ---------------- analyst Implementation ----------------

analyst::analyst()
{
    Incident_ID = 0;
    User_Account = "";
    Type_of_Threat = "";
    Severity_Level = "";
    Time_Date = "";
    Status = "";
    Analyst_Name = "";
    next = NULL;
    previous = NULL;
}

analyst::analyst(int id)
{
    Incident_ID = id;
    next = NULL;
    previous = NULL;
}

int analyst::getIncidentID()
{
    return Incident_ID;
}

void analyst::setIncidentID(int id)
{
    Incident_ID = id;
}

string analyst::getUserAccount()
{
    return User_Account;
}

void analyst::setUserAccount(string user)
{
    User_Account = user;
}

string analyst::getTypeOfThreat()
{
    return Type_of_Threat;
}

void analyst::setTypeOfThreat(string type)
{
    Type_of_Threat = type;
}

string analyst::getSeverityLevel()
{
    return Severity_Level;
}

void analyst::setSeverityLevel(string severity)
{
    Severity_Level = severity;
}

string analyst::getTimeDate()
{
    return Time_Date;
}

void analyst::setTimeDate(string time)
{
    Time_Date = time;
}

string analyst::getStatus()
{
    return Status;
}

void analyst::setStatus(string status)
{
    Status = status;
}

string analyst::getAnalystName()
{
    return Analyst_Name;
}

void analyst::setAnalystName(string name)
{
    Analyst_Name = name;
}

analyst* analyst::getNext()
{
    return next;
}

void analyst::setNext(analyst* n)
{
    next = n;
}

analyst* analyst::getPrevious()
{
    return previous;
}

void analyst::setPrevious(analyst* p)
{
    previous = p;
}

void analyst::input()
{
    cout << "Enter Incident ID: ";
    cin >> Incident_ID;
    cin.ignore();

    cout << "Enter User Account: ";
    getline(cin, User_Account);

    cout << "Enter Type of Threat: ";
    getline(cin, Type_of_Threat);

    cout << "Enter Severity (critical/high/low): ";
    getline(cin, Severity_Level);

    cout << "Enter Time/Date of Detection: ";
    getline(cin, Time_Date);

    cout << "Enter Status (active/resolved): ";
    getline(cin, Status);

    cout << "Enter Analyst Name: ";
    getline(cin, Analyst_Name);
}

void analyst::display()
{
    cout << "\n-----------------------------------";
    cout << "\nIncident ID: " << Incident_ID;
    cout << "\nUser Account: " << User_Account;
    cout << "\nType of Threat: " << Type_of_Threat;
    cout << "\nSeverity: " << Severity_Level;
    cout << "\nTime/Date: " << Time_Date;
    cout << "\nStatus: " << Status;
    cout << "\nAnalyst Name: " << Analyst_Name;
    cout << "\n-----------------------------------" << endl;
}

// ---------------- list Implementation ----------------

list::list()
{
    head = NULL;
    tail = NULL;
}

bool list::isEmpty()
{
    return head == NULL;
}

void list::insertAtHead(analyst& record)
{
    analyst* temp = new analyst();
    temp->setIncidentID(record.getIncidentID());
    temp->setUserAccount(record.getUserAccount());
    temp->setTypeOfThreat(record.getTypeOfThreat());
    temp->setSeverityLevel(record.getSeverityLevel());
    temp->setTimeDate(record.getTimeDate());
    temp->setStatus(record.getStatus());
    temp->setAnalystName(record.getAnalystName());

    if (isEmpty())
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->setNext(head);
        head->setPrevious(temp);
        head = temp;
    }
}

void list::insertAtTail(analyst& record)
{
    analyst* temp = new analyst();
    temp->setIncidentID(record.getIncidentID());
    temp->setUserAccount(record.getUserAccount());
    temp->setTypeOfThreat(record.getTypeOfThreat());
    temp->setSeverityLevel(record.getSeverityLevel());
    temp->setTimeDate(record.getTimeDate());
    temp->setStatus(record.getStatus());
    temp->setAnalystName(record.getAnalystName());

    if (isEmpty())
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->setNext(temp);
        temp->setPrevious(tail);
        tail = temp;
    }
}

analyst* list::search(int id)
{
    analyst* temp = head;

    while (temp != NULL)
    {
        if (temp->getIncidentID() == id)
            return temp;

        temp = temp->getNext();
    }

    return NULL;
}

void list::insertAtTarget(analyst& target, analyst& record)
{
    if (isEmpty())
    {
        cout << "\nList is empty !!!" << endl;
        return;
    }

    analyst* found = search(target.getIncidentID());

    if (found == NULL)
    {
        cout << "\nTarget not Found !!!" << endl;
        return;
    }

    else if (found == head)
    {
        insertAtHead(record);
    }

    else
    {
        analyst* temp = new analyst();
        temp->setIncidentID(record.getIncidentID());
        temp->setUserAccount(record.getUserAccount());
        temp->setTypeOfThreat(record.getTypeOfThreat());
        temp->setSeverityLevel(record.getSeverityLevel());
        temp->setTimeDate(record.getTimeDate());
        temp->setStatus(record.getStatus());
        temp->setAnalystName(record.getAnalystName());

        analyst* previous = found->getPrevious();

        found->setPrevious(temp);
        previous->setNext(temp);
        temp->setPrevious(previous);
        temp->setNext(found);
    }
}

void list::removeIncident(int id)
{
    if (isEmpty())
    {
        cout << "\nNo records to remove !!!" << endl;
        return;
    }

    analyst* target = search(id);

    if (target == NULL)
    {
        cout << "\nIncident not found !!!" << endl;
        return;
    }
    else if (target == head)
    {
        head = head->getNext();
        if (head != NULL)
            head->setPrevious(NULL);
        delete target;
    }
    else if (target == tail)
    {
        tail = tail->getPrevious();
        if (tail != NULL)
            tail->setNext(NULL);
        delete target;
    }
    else
    {
        analyst* prev = target->getPrevious();
        analyst* next = target->getNext();

        prev->setNext(next);
        next->setPrevious(prev);
        delete target;
    }

    cout << "\nIncident removed successfully." << endl;
}

void list::mostSevereIncident(string status_filter, string severity_filter)
{
    analyst* temp = head;
    analyst* found = NULL;

    while (temp != NULL)
    {
        if (temp->getStatus() == status_filter && temp->getSeverityLevel() == severity_filter)
        {
            found = temp;
            break;
        }
        temp = temp->getNext();
    }

    if (found != NULL)
    {
        cout << "\nMost severe active incident found:\n";
        found->display();
    }
    else
    {
        cout << "\nNo matching active incident found !!!" << endl;
    }
}

void list::printAll()
{
    if (isEmpty())
    {
        cout << "\nNo incidents to display !!!" << endl;
        return;
    }

    analyst* temp = head;
    while (temp != NULL)
    {
        temp->display();
        temp = temp->getNext();
    }
}

void list::printReverse()
{
    if (isEmpty())
    {
        cout << "\nNo incidents to display !!!" << endl;
        return;
    }

    analyst* temp = tail;
    while (temp != NULL)
    {
        temp->display();
        temp = temp->getPrevious();
    }
}

analyst* list::getTail()
{
    return tail;
}