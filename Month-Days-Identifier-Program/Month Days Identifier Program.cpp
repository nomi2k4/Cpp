#include<iostream>
using namespace std;
int main()
{
	int d;
	cout << "Enter the number of days in a month:" << endl;
	cin >> d;
	switch (d)
	{
	case 28:
		cout << "Month with 28 days is february only. ";
		break;
	case 29:
		cout << "Month with 29 days is february only. ";
		break;
	case 30:
		cout << "Months with 30 days is:\nApril \nJune \nSeptember \nNovember. ";
		break;
	case 31:
		cout << "Month with 31 days is: \nJanuary \nMarch \nMay \nJuly \nAugust \nOctober \nDecember. ";
		break;
	default:
		cout << "Invalid";
	}
	return 0;

}