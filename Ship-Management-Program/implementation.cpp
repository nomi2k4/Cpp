#include"header.h"
ship::ship()
{
	sname = "";
	no_of_passengers = 0;
	wcapacity=0.0;
}
ship::ship(string name, int np, float wc)
{
	sname = name;
	no_of_passengers = np;
	wcapacity = wc;
}
string ship::getsname()
{
	return sname;
}
int ship::getno_of_passengers()
{
	return no_of_passengers;
}
float ship::getwcapacity()
{
	return wcapacity;
}
void ship::setsname(string na)
{
	sname=na;
}
void ship::setno_of_passengers(int np)
{
	no_of_passengers=np;
}
void ship::setwcapacity(float wc)
{
	wcapacity=wc;
}
