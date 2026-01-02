#include<iostream>
using namespace std;
int main()
{
	int a, b, sum = 0;
	cout << "Enter first number:";
	cin >> a;
	cout << "Enter second number:";
	cin >> b;
	int i = a;
	while (i <= b)
	{
		sum = sum + i;
		i++;
	}
	cout << "sum of all numbers from " << a << " to " << b << " = " << sum;
	return 0;
}