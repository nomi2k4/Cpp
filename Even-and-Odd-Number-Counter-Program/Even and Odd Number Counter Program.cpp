#include<iostream>
using namespace std;
int main()
{
	int a[10],e=0,o=0,n=0;
	for (int i = 0; i <= 9; i++)
	{
		cout << "Enter an integer:";
		cin >> a[i];
	}
	for (int i = 0; i <= 9; i++)
	{
		if (a[i] % 2 == 0)
		{
			e = e + 1;
		}
		else if (a[i] % 2 != 0)
		{
			o = o + 1;
		}
		else
		{
			continue;
		}
	}
	cout << "\nEven =" << e << "\nOdd =" << o;
	return 0;
}