#include "header.h"

using namespace std;

invoice::invoice()
{
	PartNumber = 0;
	Partdescription = "";
	Quantity = 0;
	PricePerItem = 0.0;
}
int invoice::getPartNumber()
{
	return PartNumber;
}
string invoice::getPartdescription()
{
	return Partdescription;
}
int invoice::getQuantity()
{
	return Quantity;
}
float invoice::getPricePerItem()
{
	return PricePerItem;
}


void invoice::setPartNumber(int n)
{
	PartNumber = n;
}
void invoice::setPartdescription(string d)
{
	Partdescription = d;
}
void invoice::setQuantity(int q)
{
	Quantity = q;
}
void invoice::setPricePerItem(float p)
{
	PricePerItem = p;
}