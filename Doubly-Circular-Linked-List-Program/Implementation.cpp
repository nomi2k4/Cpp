#include "header.h"

//-----------------------------------------------------------------------

Node::Node()
{
    data = -1;
    next = prev = nullptr;
}

Node::Node(int d)
{
    data = d;
    next = prev = nullptr;
}

int Node::getData() const { return data; }
void Node::setData(int d) { data = d; }

Node* Node::getNext() const { return next; }
void Node::setNext(Node* n) { next = n; }

Node* Node::getPrev() const { return prev; }
void Node::setPrev(Node* p) { prev = p; }

//-----------------------------------------------------------------------

DoublyCircularList::DoublyCircularList()
{
    head = tail = nullptr;
}

bool DoublyCircularList::isEmpty() const
{
    return head == nullptr;
}


void DoublyCircularList::insertAtHead(int d)
{
    Node* temp = new Node(d);

    if (isEmpty())
    {
        head = tail = temp;
        head->setNext(head);
        head->setPrev(head);
    }
    else
    {
        temp->setNext(head);
        temp->setPrev(tail);
        head->setPrev(temp);
        tail->setNext(temp);
        head = temp;
    }

    cout << "Inserted " << d << " at head.\n";
}


void DoublyCircularList::insertAtTail(int d)
{
    Node* temp = new Node(d);

    if (isEmpty())
    {
        head = tail = temp;
        head->setNext(head);
        head->setPrev(head);
    }
    else
    {
        temp->setPrev(tail);
        temp->setNext(head);
        tail->setNext(temp);
        head->setPrev(temp);
        tail = temp;
    }

    cout << "Inserted " << d << " at tail.\n";
}


void DoublyCircularList::insertAfterTarget(int target, int d)
{
    Node* tar = search(target);
    if (tar == nullptr)
    {
        cout << "Target " << target << " not found.\n";
        return;
    }

    Node* temp = new Node(d);
    Node* nextNode = tar->getNext();

    tar->setNext(temp);
    temp->setPrev(tar);
    temp->setNext(nextNode);
    nextNode->setPrev(temp);

    if (tar == tail)
        tail = temp;

    cout << "Inserted " << d << " after " << target << ".\n";
}


Node* DoublyCircularList::search(int d) const
{
    if (isEmpty())
        return nullptr;

    Node* temp = head;
    do
    {
        if (temp->getData() == d)
            return temp;
        temp = temp->getNext();
    } while (temp != head);

    return nullptr;
}


void DoublyCircularList::remove(int d)
{
    if (isEmpty())
    {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = search(d);
    if (temp == nullptr)
    {
        cout << "Node with data " << d << " not found.\n";
        return;
    }

    if (head == tail && head == temp)
    {
        delete temp;
        head = tail = nullptr;
    }
    else
    {
        Node* prevNode = temp->getPrev();
        Node* nextNode = temp->getNext();

        prevNode->setNext(nextNode);
        nextNode->setPrev(prevNode);

        if (temp == head)
            head = nextNode;
        if (temp == tail)
            tail = prevNode;

        delete temp;
    }

    cout << "Removed node with data " << d << ".\n";
}


void DoublyCircularList::printForward() const
{
    if (isEmpty())
    {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    cout << "[ ";
    do
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    } while (temp != head);
    cout << "]\n";
}


void DoublyCircularList::printBackward() const
{
    if (isEmpty())
    {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = tail;
    cout << "[ ";
    do
    {
        cout << temp->getData() << " ";
        temp = temp->getPrev();
    } while (temp != tail);
    cout << "]\n";
}