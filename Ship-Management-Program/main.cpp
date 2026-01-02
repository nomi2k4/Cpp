#include"header.h"
int main()
{
	ship s,a,b;
	string n;
	int no;
	float wc;
	cout << "Enter the Name of a ship:";
	getline(cin, n);
	a.setsname(n);
	cout << "Enter the No of passengers:";
	cin >> no;
	a.setno_of_passengers(no);
	cout << "Enter the total Weight Capacity:";
	cin >> wc;
	a.setwcapacity(wc);

	cout << "Enter the Name of a ship:";
	getline(cin, n);
	b.setsname(n);
	cout << "Enter the No of passengers:";
	cin >> no;
	b.setno_of_passengers(no);
	cout << "Enter the total Weight Capacity:";
	cin >> wc;
	b.setwcapacity(wc);

	cout << "Enter the Name of a ship:";
	getline(cin, n);
	s.setsname(n);
	cout << "Enter the No of passengers:";
	cin >> no;
	s.setno_of_passengers(no);
	cout << "Enter the total Weight Capacity:";
	cin >> wc;
	s.setwcapacity(wc);


	cout << "\nName: " << a.getsname();
	cout << "\nNo of Passengers: " << a.getno_of_passengers();
	cout << "\nTotal Weight Capacity: " << a.getwcapacity();



	cout << "\nName: " << b.getsname();
	cout << "\nNo of Passengers: " << b.getno_of_passengers();
	cout << "\nTotal Weight Capacity: " << b.getwcapacity();




	cout << "\nName: " << s.getsname();
	cout << "\nNo of Passengers: " << s.getno_of_passengers();
	cout << "\nTotal Weight Capacity: " << s.getwcapacity();

	return 0;
}