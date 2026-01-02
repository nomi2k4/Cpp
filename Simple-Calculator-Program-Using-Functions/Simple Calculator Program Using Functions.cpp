#include<iostream>
using namespace std;

double sum(double n1, double n2);
double subtract(double n1, double n2);
double product(double n1, double n2);
double division(double n1, double n2);

int main() 
{
	double a, b,A;
	int choice;
	cout << "Enter first number: " << endl;
	cin >> a;
	cout << "Enter second number: " << endl;
	cin >> b;

	cout << "\nOperators:" << endl;
	cout << "1. Sum" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Product" << endl;
	cout << "4. Division" << endl;

	cout << "Type number (1 - 4): " << endl;
	cin >> choice;

	switch (choice)
	{
	case 1:
		A=sum(a, b);
		cout<<A;
		break;
	case 2:
		A=subtract(a, b);
		cout<<A;
		break;
	case 3:
		A=product(a, b);
		cout<<A;
		break;
	case 4:
		if (b == 0) 
		{
			cout << "\t\t\tb which is denominator in case of division would not be zero. " << endl;
		}
		else {
			A=division(a, b);
			cout<<A;
		}
		break;
	default:
		cout << "Invalid Input !!!" << endl;
		break;
	}

	return 0;
}
//Sum.............................
double sum(double n1, double n2)
{
	int resultofSum = n1 + n2;
	return resultofSum;
}
//Subtract.............................
double subtract(double n1, double n2)
{
	int resultofSubtraction = n1 - n2;
	return resultofSubtraction;
}
//Product.............................
double product(double n1, double n2)
{
	int resultofProduct = n1 * n2;
	return resultofProduct;
}
//Division.............................
double division(double n1, double n2)
{
	int resultofDivision = n1 / n2;
	return resultofDivision;
}