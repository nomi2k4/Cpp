#include <iostream>
#include <string>
using namespace std;

struct Employee
{
	int id;
	string name;
	string department;
	float salary;
};


float updateSalary(float a,int b)
{
	float bonus,updatedsalary;
	bonus = (b/100) * a;
	updatedsalary = bonus + a;
	return updatedsalary;
}


int main()
{
	Employee e;
	int a,bonuspersentage;
	cout << "Enter your id: ";
	cin >> e.id;
	cout << "Enter your name: ";
	cin >> e.name;
	cout << "Enter your department: ";
	cin >> e.department;
	cout << "Enter your salary: ";
	cin >> e.salary;
	cout << "how many year have you been working for this company: ";
	cin >> a;
	if (a > 2 && a < 5)
	{
		bonuspersentage = 20;
		cout << "your updated salary with 20% Bonus = " << updateSalary(e.salary, bonuspersentage);
	}
	else if (a > 4 && a < 8)
	{
		bonuspersentage = 25;
		cout << "your updated salary with 25% Bonus = " << updateSalary(e.salary, bonuspersentage);
	}
	else if (a > 7)
	{
		bonuspersentage = 30;
		cout << "your updated salary with 30% Bonus = " << updateSalary(e.salary, bonuspersentage);
	}
	else
	{
		cout << "you are not eligible for salary update."<<endl;
	}
	return 0;
}