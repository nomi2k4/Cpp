#include<iostream>
using namespace std;
int main()
{
	int l, u;
	cout << "Enter lower limit= ";
	cin >> l;
	cout << "Enter upper limit= ";
	cin >> u;
	cout << "Odd numbers:";
	int i = l;
	while (i <= u)
	{
		if (i % 2 != 0)
		{
			cout << i<<",";
		}
		i++;
	}
	cout << "\nsquare of odd numbers:";
	int j = l;
	while (j <= u)
	{
		if (j % 2 != 0)
		{
			cout << j*j  << ",";
		}
		j++;
	}
	cout << "\nEven numbers:";
	int k = l;
	while (k <= u)
	{
		if (k % 2 == 0)
		{
			cout << k << ",";
		}
		k++;
	}
	cout << "\nsquare of Even numbers:";
	int m = l;
	while (m <= u)
	{  
		if (m % 2 == 0)
		{
			cout << m*m << ",";
		}
		m++;
	}
	return 0;
}