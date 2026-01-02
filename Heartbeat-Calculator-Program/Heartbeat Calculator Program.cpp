#include<iostream>
using namespace std;
int main()
{
	int h,t;
	cout << "Average human heart beat in 2 years is " << 2 * 31536000 << " times" <<endl;
	cout << "Enter your heartrate persecond" <<endl;
	cin >> h;
	t = h * (31536000*2);
	cout << "your heart beat is approximately " << t<<" in 2 years";
	return 0;
}