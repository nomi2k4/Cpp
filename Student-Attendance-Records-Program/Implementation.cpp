#include "header.h"

Student::Student(string name, string rollNumber, string department, int totalClassesHeld,int classesAttended, double attendancePercentage)
{
    this->name = name;
    this->rollNumber = rollNumber;
    this->department = department;
    this->totalClassesHeld = totalClassesHeld;
    this->classesAttended = classesAttended;
    this->attendancePercentage = attendancePercentage;
    this->next = NULL;
}

string Student::getName()
{
    return name;
}

string Student::getRollNumber()
{
    return rollNumber;
}

string Student::getDepartment()
{
    return department;
}

int Student::getTotalClassesHeld()
{
    return totalClassesHeld;
}

int Student::getClassesAttended()
{
    return classesAttended;
}

double Student::getAttendancePercentage()
{
    return attendancePercentage;
}

Student* Student::getNext()
{
    return next;
}

void Student::setNext(Student* next)
{
    this->next = next;
}

StudentList::StudentList()
{
    head = NULL;
    tail = NULL;
}

void StudentList::insertAtHead(Student* newStudent)
{
    newStudent->setNext(head);
    head = newStudent;
    if (tail == NULL)
    {
        tail = newStudent;
    }
}

void StudentList::insertAtTail(Student* newStudent)
{
    if (tail == NULL)
    {
        head = newStudent;
        tail = newStudent;
    }
    else
    {
        tail->setNext(newStudent);
        tail = newStudent;
    }
}

void StudentList::addStudent(string name, string rollNumber, string department,int totalClassesHeld, int classesAttended, double attendancePercentage)
{
    Student* newStudent = new Student(name, rollNumber, department, totalClassesHeld,classesAttended, attendancePercentage);

    if (attendancePercentage > 80.0)
    {
        insertAtHead(newStudent);
    }
    else
    {
        insertAtTail(newStudent);
    }
}

void StudentList::displayAllRecords()
{
    if (head == NULL)
    {
        cout << "No students in the list." << endl;
        return;
    }

    Student* temp = head;
    while (temp != NULL)
    {
        cout << "Name: " << temp->getName() << endl;
        cout << "Roll Number: " << temp->getRollNumber() << endl;
        cout << "Department: " << temp->getDepartment() << endl;
        cout << "Total Classes Held: " << temp->getTotalClassesHeld() << endl;
        cout << "Classes Attended: " << temp->getClassesAttended() << endl;
        cout << "Attendance Percentage: " << temp->getAttendancePercentage() << endl;
        cout << "------------xxxxxx--------------" << endl;

        temp = temp->getNext();
    }
}

void StudentList::displayHighestAttendance()
{
    if (head == NULL)
    {
        cout << "No students in the list." << endl;
        return;
    }

    Student* temp = head;
    Student* highestAttendance = head;
    double maxAttendance = head->getAttendancePercentage();

    while (temp != NULL)
    {
        if (temp->getAttendancePercentage() > maxAttendance)
        {
            maxAttendance = temp->getAttendancePercentage();
            highestAttendance = temp;
        }
        temp = temp->getNext();
    }

    cout << "Student with Highest Attendance:" << endl;
    cout << "Name: " << highestAttendance->getName() << endl;
    cout << "Roll Number: " << highestAttendance->getRollNumber() << endl;
    cout << "Department: " << highestAttendance->getDepartment() << endl;
    cout << "Total Classes Held: " << highestAttendance->getTotalClassesHeld() << endl;
    cout << "Classes Attended: " << highestAttendance->getClassesAttended() << endl;
    cout << "Attendance Percentage: " << highestAttendance->getAttendancePercentage() << endl;
    cout << "------------xxxxxx--------------" << endl;
}

void StudentList::searchByRollNumber(string rollNumber)
{
    if (head == NULL)
    {
        cout << "No students in the list." << endl;
        return;
    }

    Student* temp = head;
    bool found = false;
    while (temp != NULL)
    {
        if (temp->getRollNumber() == rollNumber)
        {
            found = true;
            cout << "Student Record Found:" << endl;
            cout << "Name: " << temp->getName() << endl;
            cout << "Roll Number: " << temp->getRollNumber() << endl;
            cout << "Department: " << temp->getDepartment() << endl;
            cout << "Total Classes Held: " << temp->getTotalClassesHeld() << endl;
            cout << "Classes Attended: " << temp->getClassesAttended() << endl;
            cout << "Attendance Percentage: " << temp->getAttendancePercentage() << endl;
            cout << "------------xxxxxx--------------" << endl;
            break;
        }
        temp = temp->getNext();
    }

    if (!found)
    {
        cout << "No student found with Roll Number: " << rollNumber << endl;
    }
}

void StudentList::deleteThirdStudent()
{
    if (head == NULL)
    {
        cout << "No students in the list." << endl;
        return;
    }

    Student* temp = head;
    int count = 1;
    while (temp != NULL && count < 3)
    {
        temp = temp->getNext();
        count++;
    }

    if (count < 3 || temp == NULL)
    {
        cout << "Less than 3 students in the list." << endl;
        return;
    }

    if (temp == head)
    {
        head = head->getNext();
        delete temp;
        cout << "Third student removed." << endl;
        return;
    }

    Student* prev = head;
    while (prev->getNext() != temp)
    {
        prev = prev->getNext();
    }

    prev->setNext(temp->getNext());
    if (temp == tail)
    {
        tail = prev;
    }
    delete temp;
    cout << "Third student removed." << endl;
}