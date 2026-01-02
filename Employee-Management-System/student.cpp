#include "student.h"

Student::Student() : school(""), degree("") {}

Student::Student(string school, string degree) : school(school), degree(degree) {}

Student::Student(Student& s) : school(s.school), degree(s.degree) {}

string Student::getSchool()
{
    return school;
}

string Student::getDegree()
{
    return degree;
}

void Student::setSchool(string school)
{
    this->school = school;
}

void Student::setDegree(string degree)
{
    this->degree = degree;
}

void Student::getEdu()
{
    cout << "\n\nEnter School Name: ";
    getline(cin, school);
    cout << "Enter Degree: ";
    getline(cin, degree);
}

void Student::putEdu()
{
    cout << "\nSchool: " << school << "\nDegree: " << degree << endl;
}
