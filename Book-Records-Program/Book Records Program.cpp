#include<iostream>
#include<string>
using namespace std;

struct book
{
	int Bid;
	string Btitle;
	string author;
	int price;
};

int main()
{
	book b[16];
	cout << "\t\t********BOOKS RECORD******** ";
	for (int i = 1; i < 16; i++)
	{
		cout << "\n\nEnter book id: ";
		cin >> b[i].Bid;
		cout << "Enter book Tittle: ";
		cin.ignore();
		getline(cin, b[i].Btitle);
		cout << "Enter Author: ";
		getline(cin, b[i].author);
		cout << "Enter book price: ";
		cin>>b[i].price;
	}

	for (int i = 1; i < 16; i++)
	{
		if (b[i].price > 600)
		{
			cout << "\n"<<b[i].Btitle;
		}
	}
	return 0;
}