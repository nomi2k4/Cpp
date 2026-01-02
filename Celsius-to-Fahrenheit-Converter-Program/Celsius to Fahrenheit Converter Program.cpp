#include<iostream>
using namespace std;
int main()
{
	float t, f;
	cout << "Enter temperature in celcius: ";
	cin >> t;
	f = (t* 9 / 5) + 32;
	cout << "temperature in frenheit = " << f;
	return 0;
}