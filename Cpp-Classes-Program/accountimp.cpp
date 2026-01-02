#include "account.h"

BankAccount::BankAccount(string accountNumber,string accountHolder,double balance,string accountType)
{
    this->accountNumber =accountNumber;
    this->accountHolder =accountHolder;
    this->balance = balance;
    this->accountType =accountType;
}

string BankAccount::getAccountNumber() 
{
    return accountNumber;
}

string BankAccount::getAccountHolder() 
{
    return accountHolder;
}

double BankAccount::getBalance() {
    return balance;
}

string BankAccount::getAccountType()
{
    return accountType;
}

void BankAccount::setAccountNumber(string accountNumber)
{
    this->accountNumber = accountNumber;
}

void BankAccount::setAccountHolder(string accountHolder) 
{
    this->accountHolder = accountHolder;
}

void BankAccount::setBalance(double balance) 
{
    this->balance = balance;
}

void BankAccount::setAccountType(string accountType)
{
    this->accountType = accountType;
}

void BankAccount::displayInfo() 
{
    cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder: " << accountHolder << endl;
    cout << "Balance: " << balance << endl;
    cout << "Account Type: " << accountType << endl;
}