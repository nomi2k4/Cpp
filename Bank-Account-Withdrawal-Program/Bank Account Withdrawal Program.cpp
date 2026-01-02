#include <iostream>
using namespace std;

struct Bankaccount
{
    int accountNumber;
    string holderName;
    float balance;
};
    


void withdraw(float b,float w)
{
    float t;
    t = b - 500;
    if (w <= b && w>t)
    {
        cout << "Minimum Balance Requirenment is 500";
    }
    else if (t == w || w<t)
    {
        cout << w << " is withdraw from your account and remaning balance = "<<b-w<<endl;
    }
    else
    {
        cout << "!!!! Insufficient Amount."<<endl;
    }
}


int main()
{
    Bankaccount a;
    float amount;
    a.balance = 10000.0;
    cout << "Enter Amount to withdraw: ";
    cin >> amount;
    withdraw(a.balance,amount);
    return 0;
}