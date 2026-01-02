#include"header.h"
int main()
{
	int c;
	char a;
	heater h;
	do
	{
		cout << "\n1.Increase\n2.Decrease\n3.Exit\nchoose from menu:";
		cin >> c;
		switch (c)
		{
		case 1:
			h.settemp(5);
			cout << "new temperature = " << h.gettemp();
			cout << "\nDo you want to do it again(y/n):";
			cin >> a;
			break;
		case 2:
			h.settemp(-5);
			cout << "new temperature = " << h.gettemp();
			cout << "\nDo you want to do it again(y/n):";
			cin >> a;
			break;
		case 3:
			return 0;
			break;
		default:
			cout << "Invalid"<<endl;
			break;
		}
	} while (a == 'y' ||a == 'Y');
	return 0;
}