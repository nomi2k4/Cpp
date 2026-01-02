#include "book.h"

Book::Book(string title, string author, string isbn, int pageCount)
{
    this->title =title;
    this->author = author;
    this->isbn = isbn;
    this->pageCount = pageCount;
}

string Book::getTitle() 
{
    return title;
}

string Book::getAuthor() 
{
    return author;
}

string Book::getIsbn() 
{
    return isbn;
}

int Book::getPageCount() 
{
    return pageCount;
}

void Book::setTitle(string title) 
{
    this->title = title;
}

void Book::setAuthor(string author) 
{
    this->author = author;
}

void Book::setIsbn(string isbn) 
{
    this->isbn = isbn;
}

void Book::setPageCount(int pageCount) 
{
    this->pageCount = pageCount;
}

void Book::displayInfo() 
{
    cout << "Book Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Page Count: " << pageCount << endl;
}