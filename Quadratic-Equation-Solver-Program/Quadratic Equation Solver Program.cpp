#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c,disc,x1,x2,rp,ip;
	cout << "Enter the value of X^2:";
	cin>>a;
	cout << "Enter the value of X:";
	cin >> b;
	cout << "Enter the value of constant:";
	cin >> c;
	if (a != 0)
	{
		disc = (b * b) - 4 * a * c;
		if(disc>0)
		{
			x1 = (-b + sqrt(disc)) / (2 * a);
			x2= (-b - sqrt(disc)) / (2 * a);
			cout << "According to given values the roots are x1=" << x1 << "\nx2=" << x2;
		}
		else if (disc == 0)
		{
			x1 = -b  / (2 * a);
			x2 = -b / (2 * a);
			cout << "According to given values the discrement is 0 So both roots are same which is x1=" << x1 << "\nx2=" << x2;
		}
		else if (disc < 0)
		{
			rp = -b / (2 * a);
			ip = sqrt( - disc) / (2 * a);
			cout << "According to given values the discrement is less than 0 So roots are imagnary therefore \nx1="<<rp<<" + " << ip<<"i\nx2=" << rp <<" - " << ip<<"i";
		}
		else
		{
			cout << "Invalid.";
		}
	}
	else
	{
		cout << "Error! wrong input.";
	}
 return 0;
}