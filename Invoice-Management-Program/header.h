#include<iostream>
#include<string>
using namespace std;
class invoice
{
private:
	int PartNumber;
	string Partdescription;
	int Quantity;
	float PricePerItem;

public:
	invoice();
	int getPartNumber();
	string getPartdescription();
	int getQuantity();
	float getPricePerItem();

	void setPartNumber(int);
	void setPartdescription(string);
	void setQuantity(int);
	void setPricePerItem(float);
};
