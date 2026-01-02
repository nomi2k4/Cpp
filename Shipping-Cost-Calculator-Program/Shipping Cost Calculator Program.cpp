#include<iostream>
using namespace std;
int main()
{
	float w,d,p;
	cout<<"Enter the weight of the package in kg:";
	cin>>w;
	cout<<"Enter the distance for it to be shipped:";
	cin>>d;
	if(d<10)
	{
		cout<<"your distance should be more than 10 miles.";
	}
	else if(d>3000)
	{
		cout<<"your distance in more than 3000 miles which is not acceptable. ";
	}
	else
	{
		if (w==0)
	{
	 cout<<"Enter some weight";
	}
	else if(w>0 && w<=2)
	{
		//1mile =1.10/500=0.0022
		p=0.0022*d;
		cout<<"the price for the "<<w<<" kg package for "<<d<<" miles = "<<p<<"$";
	}
	else if(w>2 && w<=6)
	{
		//1mile =2.20/500=0.0044
		p=0.0044*d;
		cout<<"the price for the "<<w<<" kg package for "<<d<<" miles = "<<p<<"$";
	}
	else if(w>6 && w<=10)
	{
		//1mile =3.70/500=0.0074
		p=0.0074*d;
		cout<<"the price for the "<<w<<" kg package for "<<d<<" miles = "<<p<<"$";
	}
	else if(w>10 && w<=20)
	{
		//1mile =4.80/500=0.0096
		p=0.0096*d;
		cout<<"the price for the "<<w<<" kg package for "<<d<<" miles = "<<p<<"$";
	}
	else if(w>20)
	{
		cout<<"the maximum limit is 20 kg";
	}
	else
	{
		cout<<"Invalid";
	}
	}
	return 0;
}