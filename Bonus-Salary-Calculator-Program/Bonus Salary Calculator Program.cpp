#include<iostream>
using namespace std;
int main()
{
	float salary, grade, bonus;
	cout << "Enter your salary:" << endl;
	cin >> salary;
	cout << "Enter your grade (5-20):" << endl;
	cin >> grade;
	if (grade > 15 && grade <= 20)
	{
		bonus = 0.5 * salary;
		float tsalary = bonus + salary;
		cout << "Total salary with bonus =" << tsalary;
	}
	else if (grade >= 5 && grade <= 15)
	{
		bonus = 0.25 * salary;
		float tsalary = bonus + salary;
		cout << "Total salary with bonus =" << tsalary;
	}
	else
	{
		cout << "Invalid";
	}
	return 0;
}