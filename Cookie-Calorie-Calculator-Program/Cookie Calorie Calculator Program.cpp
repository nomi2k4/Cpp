#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "How many cookie you ate?" << endl;
	cin >> a;
	b = 75 * a;//1 bag=40cookies which=10 servings which=4 cookies each serving.
			//1 serving=300 calories which thats mean 300/4=75 calories each cookie.
	cout << "You ate " << b<<" calories";
	return 0;
}