#include <iostream>
using namespace std;
int main()
{
    float l;
    cout << "Enter the loudness in decibles(db):";
    cin >> l;
    if (l <= 50)
    {
        cout << "It is quite.";
    }
    else if (l > 50 && l <= 70)
    {
        cout << "It is intrusive.";
    }
    else if (l > 70 && l <= 90)
    {
        cout << "It is annoying.";
    }
    else if (l > 90 && l <= 110)
    {
        cout << "It is very annoying.";
    }
    else
    {
        cout << "It is uncomfortable";
    }
    return 0;
}