#include<iostream>
using namespace std;
int main()
{
	int h, p;
	cout << "How many hours do you work? ";
	cin >> h;
	cout << "what is your hourly wage in rupees? ";
	cin >> p;
	cout << "your gross salary is " << p * h<< "rupees";
	return 0;
}