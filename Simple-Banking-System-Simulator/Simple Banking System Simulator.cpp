#include<iostream>
using namespace std;
int main()
{
	int m;
	cout << "1. View account balance.\n2. Deposit money.\n3. Withdraw money."<<endl;
	cout << "Enter your choice:";
	cin >> m;
	switch (m)
	{
	case 1:
	{
		cout << "Your Balance = $0.0";
	}
	break;
	case 2:
	{
		int a;
		cout << "Enter Amount to deposit:";
		cin >> a;
		cout << "You deposit $" << a;
	}
	break;
	case 3:
	{
		int a;
		cout << "Enter Amount to withdraw:";
		cin >> a;
		cout << "You withdraw $" << a;
	}
	break;
	default:
	{
		cout << "Error";
	}
	break;
	}
	return 0;
}