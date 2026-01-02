#include"header.h"
heater::heater()
{
	temp = 15;
}
heater::heater(int temperature)
{
	temp = temperature;
}
int heater::gettemp()
{
	return temp;
}
void heater::settemp(int t)
{
	temp = temp+t;
}