#include "header.h"


BorrowRecord::BorrowRecord(string bookTitle, string authorName, string borrowerName, string borrowerID,
    string issueDate, string returnDate, int renewals, double fine)
{
    this->bookTitle = bookTitle;
    this->authorName = authorName;
    this->borrowerName = borrowerName;
    this->borrowerID = borrowerID;
    this->issueDate = issueDate;
    this->returnDate = returnDate;
    this->renewals = renewals;
    this->fine = fine;
    this->next = NULL;
}

string BorrowRecord::getBookTitle()
{
    return bookTitle;
}

string BorrowRecord::getAuthorName()
{
    return authorName;
}

string BorrowRecord::getBorrowerName()
{
    return borrowerName;
}

string BorrowRecord::getBorrowerID()
{
    return borrowerID;
}

string BorrowRecord::getIssueDate()
{
    return issueDate;
}

string BorrowRecord::getReturnDate()
{
    return returnDate;
}

int BorrowRecord::getRenewals()
{
    return renewals;
}

double BorrowRecord::getFine()
{
    return fine;
}

BorrowRecord* BorrowRecord::getNext()
{
    return next;
}

void BorrowRecord::setNext(BorrowRecord* next)
{
    this->next = next;
}


BorrowList::BorrowList()
{
    head = NULL;
    tail = NULL;
}

void BorrowList::insertAtHead(BorrowRecord* newRecord)
{
    newRecord->setNext(head);
    head = newRecord;
    if (tail == NULL)
    {
        tail = newRecord;
    }
}

void BorrowList::insertAtTail(BorrowRecord* newRecord)
{
    if (tail == NULL)
    {
        head = newRecord;
        tail = newRecord;
    }
    else
    {
        tail->setNext(newRecord);
        tail = newRecord;
    }
}

void BorrowList::addBorrowRecord(string bookTitle, string authorName, string borrowerName, string borrowerID,
    string issueDate, string returnDate, int renewals, double fine)
{
    BorrowRecord* newRecord = new BorrowRecord(bookTitle, authorName, borrowerName, borrowerID,
        issueDate, returnDate, renewals, fine);

    if (renewals == 0)
    {
        insertAtHead(newRecord);  
    }
    else
    {
        insertAtTail(newRecord); 
    }
}

void BorrowList::displayAllRecords()
{
    if (head == NULL)
    {
        cout << "No borrow records in the system." << endl;
        return;
    }

    BorrowRecord* temp = head;
    while (temp != NULL)
    {
        cout << "Book Title: " << temp->getBookTitle() << endl;
        cout << "Author Name: " << temp->getAuthorName() << endl;
        cout << "Borrower Name: " << temp->getBorrowerName() << endl;
        cout << "Borrower ID: " << temp->getBorrowerID() << endl;
        cout << "Issue Date: " << temp->getIssueDate() << endl;
        cout << "Return Date: " << temp->getReturnDate() << endl;
        cout << "Number of Renewals: " << temp->getRenewals() << endl;
        cout << "Fine: " << temp->getFine() << endl;
        cout << "------------xxxxxx--------------" << endl;

        temp = temp->getNext();
    }
}