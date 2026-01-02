#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number:";
    cin >> n;
    if (n == 0)
    {
        cout << "It is 0.And 0 is neutral.";
    }
    else if (n % 2 == 0)
    {
        cout << n << " is even number";
    }
    else
    {
        cout << n << " is odd number";
    }

    return 0;
}