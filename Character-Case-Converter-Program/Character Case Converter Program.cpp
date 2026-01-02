#include<iostream>
using namespace std;
int main()
{
	char a,re;
	cout << "Enter a character:" << endl;
	cin >> a;
	if (isalpha(a))
	{
		if (isupper(a))
		{
			re = tolower(a);
			cout << "In lowercase it is : " << re;
		}
		else
		{
			re = toupper(a);
			cout << "In uppercase it is : " << re;
		}
	}
	else
	{
		cout << "Invalid";
	}

	return 0;
}