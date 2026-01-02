#include"header.h"

    //---------------------------------------------

    Task::Task()
{
    id = 0;
    description = "";
    priority = "";
    deadline = "";
    next = prev = NULL;
}

Task::Task(int i, string d, string p, string dl)
{
    id = i;
    description = d;
    priority = p;
    deadline = dl;
    next = prev = NULL;
}

int Task::getID() { return id; }
string Task::getDescription() { return description; }
string Task::getPriority() { return priority; }
string Task::getDeadline() { return deadline; }

void Task::setID(int i) { id = i; }
void Task::setDescription(string d) { description = d; }
void Task::setPriority(string p) { priority = p; }
void Task::setDeadline(string dl) { deadline = dl; }

Task* Task::getNext() { return next; }
void Task::setNext(Task* n) { next = n; }
Task* Task::getPrev() { return prev; }
void Task::setPrev(Task* p) { prev = p; }

//---------------------------------------------

TaskList::TaskList()
{
    head = NULL;
    current = NULL;
}

bool TaskList::isEmpty()
{
    return head == NULL;
}

void TaskList::addTask(int id, string desc, string pri, string dl)
{
    Task* temp = new Task(id, desc, pri, dl);

    if (isEmpty())
    {
        head = temp;
        head->setNext(head);
        head->setPrev(head);
        current = head;
    }
    else
    {
        Task* tail = head->getPrev();
        tail->setNext(temp);
        temp->setPrev(tail);
        temp->setNext(head);
        head->setPrev(temp);
    }
    cout << "Task added successfully!\n";
}

void TaskList::viewNext()
{
    if (isEmpty())
    {
        cout << "No tasks available\n";
        return;
    }
    current = current->getNext();
    cout << "\nTask ID: " << current->getID();
    cout << "\nDescription: " << current->getDescription();
    cout << "\nPriority: " << current->getPriority();
    cout << "\nDeadline: " << current->getDeadline() << endl;
}

void TaskList::viewPrevious()
{
    if (isEmpty())
    {
        cout << "No tasks available\n";
        return;
    }
    current = current->getPrev();
    cout << "\nTask ID: " << current->getID();
    cout << "\nDescription: " << current->getDescription();
    cout << "\nPriority: " << current->getPriority();
    cout << "\nDeadline: " << current->getDeadline() << endl;
}

void TaskList::viewAll()
{
    if (isEmpty())
    {
        cout << "No tasks available\n";
        return;
    }

    Task* temp = head;
    do
    {
        cout << "\nTask ID: " << temp->getID();
        cout << "\nDescription: " << temp->getDescription();
        cout << "\nPriority: " << temp->getPriority();
        cout << "\nDeadline: " << temp->getDeadline() << "\n";
        temp = temp->getNext();
    } while (temp != head);
}

void TaskList::editTask(int id)
{
    if (isEmpty())
    {
        cout << "No tasks available\n";
        return;
    }

    Task* temp = head;
    do
    {
        if (temp->getID() == id)
        {
            string desc, pri, dl;
            cout << "Enter new description: ";
            cin.ignore();
            getline(cin, desc);
            cout << "Enter new priority (High/Medium/Low): ";
            getline(cin, pri);
            cout << "Enter new deadline: ";
            getline(cin, dl);

            temp->setDescription(desc);
            temp->setPriority(pri);
            temp->setDeadline(dl);

            cout << "Task updated successfully!\n";
            return;
        }
        temp = temp->getNext();
    } while (temp != head);

    cout << "Task not found!\n";
}

void TaskList::deleteTask(int id)
{
    if (isEmpty())
    {
        cout << "No tasks available\n";
        return;
    }

    Task* temp = head;
    Task* prev = NULL;

    do
    {
        if (temp->getID() == id)
        {
            if (temp->getNext() == temp && temp->getPrev() == temp)
            {
                delete temp;
                head = NULL;
                current = NULL;
                cout << "Task deleted. No tasks left.\n";
                return;
            }

            Task* nextNode = temp->getNext();
            Task* prevNode = temp->getPrev();

            prevNode->setNext(nextNode);
            nextNode->setPrev(prevNode);

            if (temp == head)
                head = nextNode;
            if (temp == current)
                current = nextNode;

            delete temp;
            cout << "Task deleted successfully!\n";
            return;
        }

        temp = temp->getNext();
    } while (temp != head);

    cout << "Task not found!\n";
}

void TaskList::viewByPriority(string pri)
{
    if (isEmpty())
    {
        cout << "No tasks available\n";
        return;
    }

    Task* temp = head;
    bool found = false;

    do
    {
        if (temp->getPriority() == pri)
        {
            cout << "\nTask ID: " << temp->getID();
            cout << "\nDescription: " << temp->getDescription();
            cout << "\nPriority: " << temp->getPriority();
            cout << "\nDeadline: " << temp->getDeadline() << "\n";
            found = true;
        }
        temp = temp->getNext();
    } while (temp != head);

    if (!found)
        cout << "No tasks with priority " << pri << " found.\n";
}