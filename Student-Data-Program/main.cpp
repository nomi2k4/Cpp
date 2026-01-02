#include "header.h"
#include<string>

using namespace std;
int main()
{
	student s[3];
	string n="";
	int r=0, t=0;
	float p=0.0;
	for (int i = 0; i <= 2; i++)
	{
		cout << endl << "Enter the Name of student " << i+1 << ": ";
		
		getline(cin,n);
		s[i].setname(n);
		cout << endl << "Enter the Roll No of the student " << i+1 << ": ";
		cin.ignore();
		cin >> r;
		s[i].setrollNo(r);
		cout << endl << "Enter Total Marks of student " << i+1<< ": ";
		cin.ignore();
		cin >> t;
		s[i].settotalMarks(t);
		cout << endl << "Enter the Persentage of student " << i+1 << ": ";
		cin.ignore();
		cin >> p;
		cout << "" << endl << endl;
		s[i].setpersentage(p);
	}

	for (int j = 0; j <= 2; j++)
	{
		cout << "\n\nData for student " << j + 1 << " :-" << endl;
		cout <<"Name: " <<s[j].getname() << endl;
		cout << "Roll No: "<<s[j].getrollNo() << endl;
		cout <<"Total Marks: "<< s[j].gettotalMarks() << endl;
		cout <<"Persentage:"<<s[j].getpersentage() << endl;
	}
	return 0;
}