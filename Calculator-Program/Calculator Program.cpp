#include<iostream>
using namespace std;


void menu();
void addition(int a, int b)
{
	float c;
	c = a + b;
	cout << "\nsum of " << a << " and " << b << " = " << c;
}
void subtraction(int a, int b)
{
	float c;
	c = a - b;
	cout <<"\n"<< a << " - " << b << " = " << c;
}
void division(int a, int b)
{
	if (b < 1)
	{
		cout << "DENOMINATOR should not be zero."<<endl;
			return menu();
	}
	else
	{
		float c;
		c = a / b;
		cout << "\n" << a << " / " << b << " = " << c;
	}
}
void multiplication(int a, int b)
{
	float c;
	c = a * b;
	cout << "\n" << a << " * " << b << " = " << c;
}
void power(int a, int b)
{
	float c =1.0;
	for (int i = 1; i <= b; i++)
	{
		c = c * a;
	}
	cout << "\n" << a << " to the " << "power of " << b << " = " << c;
}



void menu()
{
	int a,n1,n2;
	cout << "\t\t******CALCULATOR******";
	cout << "\n\nEnter first number: ";
	cin >> n1;
	cout << "Enter second number: ";
	cin >> n2;
	cout << "\n1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n5.Power\nSelect fron the menu: ";
	cin >> a;
	switch (a)
	{
	case 1:
		addition(n1, n2);
		break;
	case 2:
		subtraction(n1, n2);
		break; 
	case 3:
			division(n1, n2);
			break;
	case 4:
		multiplication(n1, n2);
		break;
	case 5:
		power(n1, n2);
		break;
	default:
		cout << "Invalid entry";
	}
	
}


int main()
{
	menu();
	return 0;
}