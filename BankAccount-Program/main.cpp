#include "header.h"

int main() 
{
    BankAccount account;
    int c{};
    double x;
    cout << "\n*******Bank Account******\n1.Check Balance\n2.Deposit\n3.Withdrw\nEnter your choice";
    cin >> c;
    switch (c)
    {
    case 1:
        cout << "\nyour available Balance = " << account.getBalance();
        break;
    case 2:
        cout << "\nEnter ammount to deposit: ";
        cin >> x;
        account.deposit(x);
        cout << "\nAmount added successfully!!!\nyour New Balance = " << account.getBalance();
        break;
    case 3:
        cout << "\nEnter ammount to Withdraw: ";
        cin >> x;
        account.withdraw(x);
        cout << "\nAmount withdraw successfully!!!\nyour Remaning Balance = " << account.getBalance();
        break;
    default:
        cout << "Invalid!!!";
        break;
    }
    return 0;
}