#include <iostream>
#include<string>
using namespace std;

struct name
{
    string F_Name;
    string L_Name;
};

struct contact
{
    string address;
    string landline_no;
};

struct employees
{
    int salary;
    int emp_no;
    name emp_name;
    contact cont;
};

void read()
{
    employees e[10];
    for (int i = 0; i <= 10; i++)
    {
        cout << "\nEnter your first name: ";
        getline(cin, e[i].emp_name.F_Name);
        cout << "\nEnter your last name: ";
        cin.ignore();
        getline(cin, e[i].emp_name.L_Name);
        cout << "\nEnter your address(city) in lowercase(e.g islamabad): ";
        getline(cin, e[i].cont.address);
        cout << "\nEnter your landline no's area code: ";
        getline(cin, e[i].cont.landline_no);
        cout << "\nEnter your salary: ";
        cin>>e[i].salary;
    }

    cout << "Islamabad resident Employees with salary between 50,000 and 80, 000:";

    for (int i = 0; i <= 10; i++)
    {
        if (e[i].salary > 50000 && e[i].salary < 80000)
        {
            if (e[i].cont.address == "islamabad" || e[i].cont.address == "isb" || e[i].cont.landline_no == "051")
            {
                cout << "\n" << e[i].emp_name.F_Name;
            }
        }
    }
}

int main()
{
    read();
    return 0;

}
    