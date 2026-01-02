#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "Enter a number for the table:";
	cin >> a;
	for (int i = 0; i <= 10; i++)
	{
		cout << a << " x " << i << " = " << i * a<<endl;
	}
	return 0;
}