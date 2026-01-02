#include<iostream>
#include <string>
using namespace std;

class Student
{
private:
    string school;
    string degree;

public:
    Student();
    Student(string school, string degree);
    Student(Student& s);

    string getSchool();
    string getDegree();

    void setSchool(string school);
    void setDegree(string degree);

    void getEdu();
    void putEdu();
};