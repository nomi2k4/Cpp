#include "employee.h"
#include "student.h"
#include "manager.h"
#include "scientist.h"

int main()
{
    Employee emp;
    Student stu;
    Manager mgr;
    Scientist sci;

    emp.getData();
    emp.putData();

    stu.getEdu();
    stu.putEdu();

    mgr.getData();
    mgr.putData();

    sci.getData();
    sci.putData();

    return 0;
}
