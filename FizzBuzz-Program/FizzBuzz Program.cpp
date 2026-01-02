#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	int i=1;
	while(i<=n)
	{
		if(i%3==0 && i%5==0)
		{
		cout<<i<<" FizzBuzz"<<endl;
	}
	else if(i%3==0)
	{
		cout<<i<<" Fizz"<<endl;
	}
	else if(i%5==0)
	{
		cout<<i<<" Buzz"<<endl;
	}
	else
	{
		cout<<i<<endl;
	}

		i++;
	}
	return 0;
}