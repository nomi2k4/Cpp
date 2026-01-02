#include <iostream>
using namespace std;
int main() 
{
    int n, ones,tens,hundreds,reversed;

    cout << "Enter a three-digit number: ";
    cin >> n;
    if (n < 100 || n > 999) 
    {
        cout << "Only three-digit number!" << endl;
        return 0;
    }
    else
    {
        ones = n % 10;
        tens = (n / 10) % 10;
        hundreds = n / 100;       
        reversed = ones * 100 + tens * 10 + hundreds;
        cout << "Reversed Number = " << reversed << endl;
    }
    return 0;
}