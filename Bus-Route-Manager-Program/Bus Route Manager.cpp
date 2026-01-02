#include<iostream>
#include<string>
using namespace std;
struct routes
{
	string RName;
	int TotalBuses;
	float Distance;
	int Fare;
};

int main()
{
	routes a[6];
	int fare = 0;
	for (int i = 0; i <6; i++)
	{
		cout << "\nEnter route Name: ";
		cin.ignore();
		getline(cin, a[i].RName);		
		cout << "Enter Total buses on th route: ";
		cin >> a[i].TotalBuses;
		cout << "Enter the Total distance of the route: ";
		cin >> a[i].Distance;
		cout << "Enter the Fare of the route: ";
		cin >> a[i].Fare;
		fare += a[i].Fare*a[i].TotalBuses;
	}
	cout << "\n\nTotal fare of 6 routes is " << fare<<"\n\n";
	return 0;
}