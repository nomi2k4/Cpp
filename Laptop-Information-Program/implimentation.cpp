#include "laptop.h"

using namespace std;

laptop::laptop()
{
	brand = "";
	model = "";
	serial = 0;
	color = "";
	price = 0;
	processorSpeed = "";
	RAM = "";
	screenSize = "";
}
string laptop::getbrand()
{
	return brand;
}
string laptop::getmodel()
{
	return model;
}
int laptop::getserial()
{
	return serial;
}
string laptop::getcolor()
{
	return color;
}
int laptop::getprice()
{
	return price;
}
string laptop::getprocessorSpeed()
{
	return processorSpeed;
}
string laptop::getRAM()
{
	return RAM;
}
string laptop::getscreenSize()
{
	return screenSize;
}



void laptop::setbrand(string b)
{
	brand=b;
}
void laptop::setmodel(string m)
{
	model=m;
}
void laptop::setserial(int s)
{
	serial = s;
}
void laptop::setcolor(string c)
{
	color=c;
}
void laptop::setprice(int p)
{
	price=p;
}
void laptop::setprocessorSpeed(string ps)
{
	processorSpeed=ps;
}
void laptop::setRAM(string R)
{
	RAM=R;
}
void laptop::setscreenSize(string ss)
{
	screenSize=ss;
}