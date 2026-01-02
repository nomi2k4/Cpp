#include "header.h"
#include<string>

using namespace std;
int main()
{
	invoice a[3];
	int n = 0, q;
	string d = "";
	float p = 0.0;
	for (int i = 0; i <= 2; i++)
	{
		cout << endl << "Enter the Number of part " << i + 1 << ": ";
		cin >> n;
		a[i].setPartNumber(n);
		cout << endl << "Enter the Name/description of part " << i + 1 << ": ";
		cin.ignore();
		getline(cin, d);
		a[i].setPartdescription(d);
		cout << endl << "Enter the quantity of part " << i + 1 << ": ";
		cin.ignore();
		cin >> q;
		a[i].setQuantity(q);
		cout << endl << "Enter the Price per item of part " << i + 1 << ": ";
		cin.ignore();
		cin >> p;
		cout << "" << endl << endl;
		a[i].setPricePerItem(p);
	}

	for (int j = 0; j <= 2; j++)
	{
		cout << "\n\nData for part " << j + 1 << " :-" << endl;
		cout << "Part No: " << a[j].getPartNumber() << endl;
		cout << "Part Name: " << a[j].getPartdescription() << endl;
		cout << "Quantity: " << a[j].getQuantity() << endl;
		cout << "Price per item:" << a[j].getPricePerItem() << endl;
	}
	return 0;
}