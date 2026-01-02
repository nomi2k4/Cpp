#include<iostream>
using namespace std;
int main()
{
	float l,a,p,w,pi=3.1429,r;
	int c;
	cout << "1-Find area and perimeter of a square" << endl;
	cout << "2-Find area and perimeter of a rectangle" << endl;
	cout << "3-Find area and perimeter of a circle" << endl;
	cout << "Enter your choice:" << endl;
	cin >> c;
	switch (c)
	{
	case 1:
		cout << "Enter length of square:" << endl;
		cin >> l;
		a = l * l;
		p = 4 * l;
		cout << "Area of square = " << a << endl;
		cout << "Perimeter of square = " << p << endl;
		break;
	case 2:
		cout << "Enter length of rectangle:" << endl;
		cin >> l;
		cout << "Enter width of rectangle:" << endl;
		cin >> w;
		a = w * l;
		p = 2 * (l + w);
		cout << "Area of rectangle = " << a << endl;
		cout << "Perimeter of rectangle = " << p << endl;
		break;
	case 3:
		cout << "Enter radius of circle:" << endl;
		cin >> r;
		a = pi*r*r;
		p = 2 * pi*r;
		cout << "Area of circle = " << a << endl;
		cout << "circumference of circle = " << p << endl;
		break;
	case 4:
		cout << "No shape selected";
		break;
	default:
		cout << "Error: Wrong menu choice";
	}
	return 0;
}