#include<iostream>
#include<string>
using namespace std;
class laptop
{
private:
	string brand;
	string model;
	int serial;
	string color;
	int price;
	string processorSpeed;
	string RAM;
	string screenSize;
public:
	laptop();
	string getbrand();
	string getmodel();
	int getserial();
	string getcolor();
	int getprice();
	string getprocessorSpeed();
	string getRAM();
	string getscreenSize();

	void setbrand(string);
	void setmodel(string);
	void setserial(int);
	void setcolor(string);
	void setprice(int);
	void setprocessorSpeed(string);
	void setRAM(string);
	void setscreenSize(string);
};