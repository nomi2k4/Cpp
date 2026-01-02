#include<iostream>
#include<string>
using namespace std;
class Grocery
{
private:
	string *grocerylist;
	int capacity;
	int size;

public:
	Grocery(int);
	int getCapacity();
	void setCapacity(int);
	int getSize();
	void setSize(int);
	void insert(string);
	void resize();
	void display();
};