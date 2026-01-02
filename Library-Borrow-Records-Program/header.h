#include <iostream>
#include <string>
using namespace std;

class BorrowRecord
{
private:
    string bookTitle;
    string authorName;
    string borrowerName;
    string borrowerID;
    string issueDate;
    string returnDate;
    int renewals;
    double fine;
    BorrowRecord* next;

public:
    BorrowRecord(string bookTitle, string authorName, string borrowerName, string borrowerID,
        string issueDate, string returnDate, int renewals, double fine);

    string getBookTitle();
    string getAuthorName();
    string getBorrowerName();
    string getBorrowerID();
    string getIssueDate();
    string getReturnDate();
    int getRenewals();
    double getFine();
    BorrowRecord* getNext();
    void setNext(BorrowRecord* next);
};

class BorrowList
{
private:
    BorrowRecord* head;
    BorrowRecord* tail;

public:
    BorrowList();

    void insertAtHead(BorrowRecord* newRecord);
    void insertAtTail(BorrowRecord* newRecord);

    void addBorrowRecord(string bookTitle, string authorName, string borrowerName, string borrowerID,
        string issueDate, string returnDate, int renewals, double fine);

    void displayAllRecords();
};