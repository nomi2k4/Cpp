#include "header.h"

int main()
{
    StudentList attendance;

    attendance.addStudent("Ali Khan", "CS101", "Computer Science", 50, 45, 90.0);
    attendance.addStudent("Haroon Ahmed", "CS102", "Computer Science", 50, 38, 76.0);
    attendance.addStudent("Usman Malik", "EE101", "Electrical Engineering", 50, 42, 84.0);
    attendance.addStudent("Ashraf Ali", "CS103", "Computer Science", 50, 35, 70.0);
    attendance.addStudent("Sohail Butt", "ME101", "Mechanical Engineering", 50, 48, 96.0);

    cout << "All Student Records:" << endl;
    attendance.displayAllRecords();

    cout << "\nStudent with Highest Attendance:" << endl;
    attendance.displayHighestAttendance();

    cout << "\nSearching Student with Roll Number CS102:" << endl;
    attendance.searchByRollNumber("CS102");

    cout << "\nRemoving Third Student:" << endl;
    attendance.deleteThirdStudent();
    attendance.displayAllRecords();

    return 0;
}