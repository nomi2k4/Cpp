#include<iostream>
#include<string>
using namespace std;
class heater
{
private:
	int temp;
public:
	heater();
	heater(int);
	int gettemp();
	void settemp(int);
};
