#include<iostream>
#include<string>
using namespace std;
class ship
{
private:
	string sname;
	int no_of_passengers;
	float wcapacity;
public:
	ship();
	ship(string, int, float);
	string getsname();
	int getno_of_passengers();
	float getwcapacity();
	void setsname(string);
	void setno_of_passengers(int);
	void setwcapacity(float);
};