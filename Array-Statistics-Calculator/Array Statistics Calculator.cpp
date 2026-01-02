#include<iostream>
using namespace std;
int main()
{
	int abc[10], sum = 0;
	int max;
	int min;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter value:";
		cin >> abc[i];
		sum = sum + abc[i];
	}
	cout << "\nyou entered:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << abc[i] << endl;
	}
	max = abc[0];
	for (int i = 0; i < 10; i++)
	{
		if (abc[i] > max)
		{
			max = abc[i];
		}
	}
	min = abc[0];
	for (int i = 0; i < 10; i++)
	{
		if (abc[i] < min)
		{
			min = abc[i];
		}
	}
	cout << "\nTheir sum = " << sum;
	cout << "\nMaximum = " << max << "\nMinimum = " << min;

	return 0;
}