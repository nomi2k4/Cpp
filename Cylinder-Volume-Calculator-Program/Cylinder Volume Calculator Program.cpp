#include<iostream>
using namespace std;
int main()
{
	float r, h, v;
	const float pi = 3.14159;
	cout << "Enter the radius of cylinder" << endl;
	cin >> r;
	cout << "Enter the hight of cylinder" << endl;
	cin >> h;
	v = pi * r * r * h;
	cout << "volume of cylinder = " << v;
	return 0;
}