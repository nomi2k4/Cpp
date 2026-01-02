#include <iostream>
#include <string>
using namespace std;

class Employee 
{
private:
    int employeeNo;
    float compensation;
    string employeeName;
public:
    Employee();
    Employee(int empNumber, float comp, string empName);
    int getemployeeNo();
    float getcompensation();
    string getemployeeName();
    void setemployeeNo(int);
    void setcompensation(float);
    void setemployeeName(string);

    
};