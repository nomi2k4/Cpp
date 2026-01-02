#include<iostream>
using namespace std;
int main()
{
	float d,it,oh;
	cout<<"Enter the distance in miles: ";
	cin>>d;
	it=d*0.0465;//1 mile ma 0.0465
	oh=d*0.0373;//1 mile ma 0.0373
	cout<<"If you are in town you need "<<it<<" gallons"<<endl;
	cout<<"If you are on highway you need "<<oh<<" gallons"<<endl;
	return 0;
}