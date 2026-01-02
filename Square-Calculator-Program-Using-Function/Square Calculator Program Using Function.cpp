#include<iostream>
using namespace std;

int makedouble(int value)
{
	int valuedouble = value * value;
	return valuedouble;
}

int main()
{
	int num = 0;
	cout << "Enter a value:";
	cin >> num;
	cout << "square of value is:" << makedouble(num);
	return 0;
}