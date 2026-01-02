#include<iostream>
using namespace std;

int getASCII(char ch)
{
	int value = ch;
	return value;
}

int main()
{
	char ch;
	cout << "Enter a character:";
	cin >> ch;
	cout << "ASCII of your entered character is:" << getASCII(ch)<<endl;
	return 0;
}