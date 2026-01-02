#include "header.h"

using namespace std;

site::site(string message, string shared, string date)
{
    this->message = message;
    this->shared = shared;
    this->date = date;
    this->next = NULL;
    this->previous = NULL;
}

string site::getMessage()
{
    return message;
}

string site::getShared()
{
    return shared;
}

string site::getDate()
{
    return date;
}

site* site::getNext()
{
    return next;
}

site* site::getPrevious()
{
    return previous;
}

void site::setMessage(string msg)
{
    message = msg;
}

void site::setShared(string sh)
{
    shared = sh;
}

void site::setDate(string dt)
{
    date = dt;
}

void site::setNext(site* n)
{
    next = n;
}

void site::setPrevious(site* pre)
{
    previous = pre;
}

void site::display()
{
    cout << "\n-----------------------------------";
    cout << "\nMessage: " << message;
    cout << "\nShared With: " << shared;
    cout << "\nDate: " << date;
    cout << "\n-----------------------------------" << endl;
}


// -----------------------------------------------------------------

Dlist::Dlist()
{
    head = NULL;
    tail = NULL;
}

bool Dlist::isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Dlist::newPost(string message, string shared, string date)
{
    site* temp = new site(message, shared, date);

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

    cout << "\nNew post added successfully!" << endl;
}

void Dlist::viewAll()
{
    if (isEmpty())
    {
        cout << "\nNo posts to display!" << endl;
        return;
    }

    site* temp = head;
    while (temp != NULL)
    {
        temp->display();
        temp = temp->getNext();
    }
}

void Dlist::viewByPrivacy(string type)
{
    if (isEmpty())
    {
        cout << "\nNo posts to display!" << endl;
        return;
    }

    site* temp = head;
    bool found = false;

    while (temp != NULL)
    {
        if (temp->getShared() == type)
        {
            temp->display();
            found = true;
        }
        temp = temp->getNext();
    }

    if (!found)
        cout << "\nNo posts found with privacy type: " << type << endl;
}

void Dlist::editPost(site* current)
{
    string newMsg, newShare, newDate;
    cin.ignore();

    cout << "\nEnter new message: ";
    getline(cin, newMsg);
    cout << "Enter new privacy (Public/Friends/Private): ";
    getline(cin, newShare);
    cout << "Enter new date: ";
    getline(cin, newDate);

    current->setMessage(newMsg);
    current->setShared(newShare);
    current->setDate(newDate);

    cout << "\nPost updated successfully!" << endl;
}

void Dlist::deletePost(site* current)
{
    if (current == NULL)
        return;

    if (current == head && current == tail)
    {
        head = NULL;
        tail = NULL;
    }
    else if (current == head)
    {
        head = head->getNext();
        head->setPrevious(NULL);
    }
    else if (current == tail)
    {
        tail = tail->getPrevious();
        tail->setNext(NULL);
    }
    else
    {
        site* pre = current->getPrevious();
        site* nxt = current->getNext();
        pre->setNext(nxt);
        nxt->setPrevious(pre);
    }

    delete current;
    cout << "\nPost deleted successfully!" << endl;
}

void Dlist::viewPosts()
{
    if (isEmpty())
    {
        cout << "\nNo posts available!" << endl;
        return;
    }

    site* temp = head;
    char choice;

    while (temp != NULL)
    {
        temp->display();

        cout << "\nPress N for next post";
        cout << "\nPress P for previous post";
        cout << "\nPress E to edit post";
        cout << "\nPress D to delete post";
        cout << "\nPress Q to quit viewing\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 'N' || choice == 'n')
        {
            if (temp->getNext() != NULL)
                temp = temp->getNext();
            else
                cout << "\nNo newer post!" << endl;
        }
        else if (choice == 'P' || choice == 'p')
        {
            if (temp->getPrevious() != NULL)
                temp = temp->getPrevious();
            else
                cout << "\nNo previous post!" << endl;
        }
        else if (choice == 'E' || choice == 'e')
        {
            editPost(temp);
        }
        else if (choice == 'D' || choice == 'd')
        {
            site* toDelete = temp;
            if (temp->getNext() != NULL)
                temp = temp->getNext();
            else
                temp = temp->getPrevious();
            deletePost(toDelete);
            if (temp == NULL)
            {
                cout << "\nNo more posts left!" << endl;
                break;
            }
        }
        else if (choice == 'Q' || choice == 'q')
        {
            break;
        }
        else
        {
            cout << "\nInvalid choice!" << endl;
        }
    }
}
