
#include<iostream>
using namespace std;
int main()
{
	float price,saletax,deliverytax,propertytax,totalamount;
	cout<<"Enter the price of vehicles=";
	cin>>price;
	saletax=price*6.5/100;
	deliverytax=price*0.5/100;
	propertytax=price*1/100;
	totalamount=saletax+deliverytax+propertytax+price;
	cout<<"Total amount including all taxes = "<<totalamount;
	return 0;
}