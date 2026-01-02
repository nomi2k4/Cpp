#include<iostream>
#include<string>
using namespace std;

class Task
{
private:
    int id;
    string description;
    string priority;
    string deadline;
    Task* next;
    Task* prev;

public:
    Task();
    Task(int, string, string, string);
    int getID();
    string getDescription();
    string getPriority();
    string getDeadline();

    void setID(int);
    void setDescription(string);
    void setPriority(string);
    void setDeadline(string);

    Task* getNext();
    void setNext(Task*);
    Task* getPrev();
    void setPrev(Task*);
};

//---------------------------------------------

class TaskList
{
private:
    Task* head;
    Task* current;

public:
    TaskList();

    bool isEmpty();
    void addTask(int, string, string, string);
    void viewNext();
    void viewPrevious();
    void viewAll();
    void editTask(int);
    void deleteTask(int);
    void viewByPriority(string);
};