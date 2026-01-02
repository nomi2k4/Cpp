#include"header.h"

Employee::Employee() 
{
    employeeNo = 0;
    compensation = 0.0;
    employeeName = "";
}

Employee::Employee(int empNumber, float comp, string empName)
{
    employeeNo = empNumber;
    compensation = comp;
    employeeName = empName;
}
int Employee::getemployeeNo()
{
    return employeeNo;
}
float Employee::getcompensation()
{
    return compensation;
}
string Employee::getemployeeName()
{
    return employeeName;
}
void Employee::setemployeeNo(int en)
{
    employeeNo = en;
}
void Employee::setcompensation(float c)
{
    compensation = c;
}
void Employee::setemployeeName(string na)
{
    employeeName = na;
}