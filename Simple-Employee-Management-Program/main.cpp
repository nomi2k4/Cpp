#include"header.h"
 
int main() 
{
    Employee emp[3];
    int a;
    float b;
    string c;
    for (int i = 0; i <= 2; i++)
    {
        cout << "\n\nEnter Employee no for Employee "<<i+1<<": ";
        cin >> a;
        emp[i].setemployeeNo(a);
        cout << "\nEnter Name for Employee " << i + 1 << ": ";
        cin.ignore();
        getline(cin, c);
        emp[i].setemployeeName(c);
        cout << "\nEnter salary Employee " << i + 1 << ": ";
        cin >> b;
        emp[i].setcompensation(b);
    }

    for (int i = 0; i <= 2; i++)
    {
        cout << "\n\nEmployee No: " << emp[i].getemployeeNo();
        cout << "\nEmployee Name: " << emp[i].getemployeeName();
        cout << "\nSalary: " << emp[i].getcompensation();
    }
    return 0;
}