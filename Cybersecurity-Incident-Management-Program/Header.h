#include <iostream>
#include <string>
using namespace std;

class analyst
{
private:
    int Incident_ID;
    string User_Account;
    string Type_of_Threat;
    string Severity_Level;
    string Time_Date;
    string Status;
    string Analyst_Name;
    analyst* next;
    analyst* previous;

public:
    analyst();
    analyst(int);

    int getIncidentID();
    void setIncidentID(int);
    string getUserAccount();
    void setUserAccount(string);
    string getTypeOfThreat();
    void setTypeOfThreat(string);
    string getSeverityLevel();
    void setSeverityLevel(string);
    string getTimeDate();
    void setTimeDate(string);
    string getStatus();
    void setStatus(string);
    string getAnalystName();
    void setAnalystName(string);

    analyst* getNext();
    void setNext(analyst*);
    analyst* getPrevious();
    void setPrevious(analyst*);

    void input();
    void display();
};


class list
{
private:
    analyst* head;
    analyst* tail;

public:
    list();

    void insertAtHead(analyst&);
    void insertAtTail(analyst&);
    void insertAtTarget(analyst&, analyst&);
    void removeIncident(int);

    void mostSevereIncident(string, string);
    analyst* getTail();

    analyst* search(int);
    bool isEmpty();
    void printAll();
    void printReverse();
};