#include <iostream>
#include <string>
using namespace std;

class Book 
{
private:
    string title;
    string author;
    string isbn;
    int pageCount;

public:
    Book(string, string, string, int);
    string getTitle();
    string getAuthor();
    string getIsbn();
    int getPageCount();

    void setTitle(string);
    void setAuthor(string);
    void setIsbn(string);
    void setPageCount(int);
    void displayInfo();
};