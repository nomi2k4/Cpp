#include <iostream>
using namespace std;
class BankAccount 
{
private:
    double balance;

public:
    BankAccount();
    double getBalance();
    void setBalance(double balance);
    void deposit(double amount);
    void withdraw(double amount);
};