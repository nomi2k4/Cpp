#include<iostream>
using namespace std;
int main()
{
	char c;
	cout<<"Enter a character:";
	cin>>c;

	if(isalpha(c))
	{
		if(isupper(c))
	{
		cout<<"it is upper case alphabet."<<endl;
	}
	else
	{
		cout<<"it is lower case alphabet."<<endl;
	}
	tolower(c);
	switch(c)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			{
				cout<<"it is vowel."<<endl;
			}
			break;
		default:
			{
				cout<<"it is consonent."<<endl;
			}
	}
		cout<<"it is not a special character.";
	}
	else
	{
		cout<<"it is special character.";
	}
	return 0;
}