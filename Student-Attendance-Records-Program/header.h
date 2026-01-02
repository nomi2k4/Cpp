#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    string rollNumber;
    string department;
    int totalClassesHeld;
    int classesAttended;
    double attendancePercentage;
    Student* next;

public:
    Student(string name, string rollNumber, string department, int totalClassesHeld,int classesAttended, double attendancePercentage);

    string getName();
    string getRollNumber();
    string getDepartment();
    int getTotalClassesHeld();
    int getClassesAttended();
    double getAttendancePercentage();
    Student* getNext();
    void setNext(Student* next);
};

class StudentList
{
private:
    Student* head;
    Student* tail;

public:
    StudentList();

    void insertAtHead(Student* newStudent);
    void insertAtTail(Student* newStudent);

    void addStudent(string name, string rollNumber, string department,int totalClassesHeld, int classesAttended, double attendancePercentage);

    void displayAllRecords();
    void displayHighestAttendance();
    void searchByRollNumber(string rollNumber);
    void deleteThirdStudent();
};