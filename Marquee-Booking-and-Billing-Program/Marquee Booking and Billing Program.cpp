#include<iostream>
using namespace std;
int main()
{
	int h, t, a, p;
	float gst = 0.18;
	cout << "\tMarquee\t\t\tDay\t\tNight\t\tHeating/cooling" << endl;
	cout << "\t1.Hall 1(200 capacity) \tRS 40000 \tRS 75000 \tRS 800per/h" << endl;
	cout << "\t2.Hall 2(300 capacity) \tRS 65000 \tRS 100000 \tRS 1000per/h" << endl;
	cout << "\t3.Hall 3(400 capacity) \tRS 100000 \tRS 125000 \tRS 1200per/h" << endl;
	cout << "\t4.Hall 4(500 capacity) \tRS 120000 \tRS 150000 \tRS 1500per/h" << endl;
	cout << "Enter the sr.no of Hall you want to book:" << endl;
	cin >> h;
	cout << "Enter the time: \n1 for Day.\n2 for Night." << endl;
	cin >> t;
	cout << "For how much hours you want to book:" << endl;
	cin >> a;
	if (h == 1)
	{
		if (t == 1)
		{
			p = 40000 + (800 * a);
		}
		else if (t == 2)
		{
			p = 75000 + (800 * a);
		}
		else
		{
			cout << "invalid";
		}
	}
	else if (h == 2)
	{
		if (t == 1)
		{
			p = 65000 + (1000 * a);
		}
		else if (t == 2)
		{
			p = 100000 + (1000 * a);
		}
		else
		{
			cout << "invalid";
		}
	}
	else if (h == 3)
	{
		if (t == 1)
		{
			p = 100000 + (1200 * a);
		}
		else if (t == 2)
		{
			p = 125000 + (1200 * a);
		}
		else
		{
			cout << "invalid";
		}
	}
	else if (h == 4)
	{
		if (t == 1)
		{
			p = 120000 + (1500 * a);
		}
		else if (t == 2)
		{
			p = 150000 + (1500 * a);
		}
		else
		{
			cout << "invalid";
		}
	}
	else
	{
		cout << "there are only four halls";
	}
	cout << "your bill is " << p << endl;
	cout << "your bill with 18% gst = " << (gst * p) + p;
	return 0;
}