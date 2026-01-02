#include <iostream>
using namespace std;

//----------------------------------------------------
class Node
{
private:
    int data;
    Node* next;
    Node* prev;

public:
    Node();
    Node(int);

    int getData() const;
    void setData(int);

    Node* getNext() const;
    void setNext(Node*);

    Node* getPrev() const;
    void setPrev(Node*);
};

// --------------------------------------------------------
class DoublyCircularList
{
private:
    Node* head;
    Node* tail;

public:
    DoublyCircularList();

    bool isEmpty() const;
    void insertAtHead(int);
    void insertAtTail(int);
    void insertAfterTarget(int target, int data);
    Node* search(int data) const;
    void remove(int data);
    void printForward() const;
    void printBackward() const;
};