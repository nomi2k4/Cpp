#include <iostream>
using namespace std;
int main()
{
    int y;
    cout << "Enter your age in years:";
    cin >> y;
    if (y < 20)
    {
        cout << "My age is 20 years and you are younger than me.";
    }
    else if (y == 20)
    {
        cout << "My age is 20 years and your age is same as me.";
    }
    else
    {
        cout << "My age is 20 years and you are older than me.";
    }
    return 0;
}