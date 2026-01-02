#include<iostream>
using namespace std;
int main()
{
	int i = 1;
	while (i <= 50)
	{
		if (i % 5 == 0)
		{
			i++;
			continue;
		}
		cout << i << endl;
		i++;
	}
	return 0;
}