#include<iostream>
#include<string>
using namespace std;
int main()
{
	string n;
	cout << "\nEnter a sentence: ";
	getline(cin, n);
	cout << "\nYou entered: "<<n;
	cout <<"\nYou entered " <<n.length()<<" characters";
	return 0;
}