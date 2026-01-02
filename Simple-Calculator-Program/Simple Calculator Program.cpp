#include <iostream>
using namespace std;
int main()
{
    float n1, n2;
    int i1,i2;
    char c;
    cout << "Enter First Number:";
    cin >> n1;
    cout << "Enter Second Number:";
    cin >> n2;
    cout << "Enter the operater:";
    cin >> c;
    switch (c)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        if (n2 == 0)
        {
            cout << "Denominator cannot be 0";
        }
        else
        {
            cout << n1 / n2;
        }
        break;
    case'%':
        if (n2 == 0)
        {
            cout << "Denominator cannot be 0";
        }
        else
        {
            i1 = static_cast<int>(n1);
            i2 = static_cast<int>(n2);
            cout << i1 % i2;
        }
        break;
    default:
        cout << "Invalid operator";
        return 0;
    }
}