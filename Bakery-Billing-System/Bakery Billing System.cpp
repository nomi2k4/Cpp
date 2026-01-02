#include<iostream>
using namespace std;
int main()
{
	float m, quantity;
	char item;
	float coffee = 200;
	float juice = 100;
	float tea = 50;
	char a;
	cout << "\t\t***Bakery***";
	cout << "\n";
	cout << "\t\tMENU:-" << endl;
	cout << "\t\t1.Coffee\tRs 200" << endl;
	cout << "\t\t2.Juice\t\tRs 100" << endl;
	cout << "\t\t3.Tea\t\tRs 50" << endl;
	cout << "\t\tEnter first letter of your choise: ";
	cin >> item;
	cout << "\t\tEnter quantity: ";
	cin >> quantity;
	if (item == 'C'||item == 'c')
	{
		m = coffee * quantity;
		float gst = 0.16 * m;
		cout << "\t\tGST =\t\tRs " << gst << endl;
		float totalBill = m + gst;
		cout << "\t\tTotal =" <<totalBill;
		return 0;
	}
	else if (item == 'J'||item == 'j')
	{
		m = juice * quantity;
		float gst = 0.16 * m;
		cout << "\t\tGST =\t\tRs " << gst << endl;
		float totalBill = m + gst;
		cout << "\t\tTotal = " <<totalBill;
		return 0;
	}
	else if (item == 'T'|| item == 't')
	{
		m = tea * quantity;
		float gst = 0.16 * m;
		cout <<"\t\tGST =\t\tRs " <<gst << endl;
		float totalBill = m + gst;
		cout << "\t\tTotal =\t\tRs " <<totalBill;
		return 0;
	}
	else
	{
		cout << "Invalid";
		return 0;
	}
}