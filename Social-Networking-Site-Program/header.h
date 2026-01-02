#include<iostream>
#include<string>

using namespace std;

class site
{
private:
    string message;
    string shared;
    string date;
    site* next;
    site* previous;

public:
    site(string message, string shared, string date);
    string getMessage();
    string getShared();
    string getDate();
    site* getNext();
    site* getPrevious();
    void setMessage(string msg);
    void setShared(string sh);
    void setDate(string dt);
    void setNext(site* n);
    void setPrevious(site* pre);
    void display();
};


class Dlist
{
private:
    site* head;
    site* tail;

public:
    Dlist();
    bool isEmpty();
    void newPost(string message, string shared, string date);
    void viewAll();
    void viewByPrivacy(string type);
    void viewPosts();
    void deletePost(site* current);
    void editPost(site* current);
};