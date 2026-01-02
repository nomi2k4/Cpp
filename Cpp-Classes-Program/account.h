#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolder;
    double balance;
    string accountType;

public:
    BankAccount(string, string, double,string);
    string getAccountNumber();
    string getAccountHolder();
    double getBalance();
    string getAccountType();

    void setAccountNumber(string);
    void setAccountHolder(string);
    void setBalance(double);
    void setAccountType(string);
    void displayInfo();
};