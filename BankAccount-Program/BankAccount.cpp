#include "header.h"

BankAccount::BankAccount()
{
    balance = 500;
}

double BankAccount::getBalance()
{
    return balance;
}

void BankAccount::setBalance(double b) 
{
    balance = b;
}

void BankAccount::deposit(double amount) 
{
    if (amount > 0) 
    {
        balance = balance+amount;
        cout << "\nyour new balance = " << balance;
    }
    else 
    {
        cout<< "Invalid amount." << endl;
    }
}

void BankAccount::withdraw(double amount) 
{
    if (amount > 0 && amount <= balance) 
    {
        double a;
        a=balance - amount;
        cout << "\nyour remaning balance = " << a;
    }
    else
    {
        cout << "Invalid withdrawal amount or insufficient balance." <<endl;
    }
}