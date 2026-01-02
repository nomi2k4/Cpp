#include<iostream>
using namespace std;
int main()
{
	char a;
	cout << "Enter a character:";
	cin >> a;
	cout << "Next character is " << ++a;
	return 0;
}