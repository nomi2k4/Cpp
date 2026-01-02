#include <iostream>
using namespace std;
int main()
{
    float salary, years, r;
    cout << "Enter your salary:";
    cin >> salary;
    cout << "Enter for how many years you work for the company:";
    cin >> years;
    if (years > 5 && years <= 10)
    {
        r = 0.015 * salary;
        cout << "your got a raise of 1.5% which is equal to " << r << " and now your total salary is " << r + salary;
    }
    else if (years > 10 && years <= 20)
    {
        r = 0.02 * salary;
        cout << "your got a raise of 2% which is equal to " << r << " and now your total salary is " << r + salary;
    }
    else if (years > 20)
    {
        r = 0.04 * salary;
        cout << "your got a raise of 4% which is equal to " << r << " and now your total salary is " << r + salary;
    }
    else
    {
        cout << "you got nothing";
    }


    return 0;
}