#include<iostream>
#include<string>
using namespace std;

class VisitorCounter
{
private:
	string IP;
	int capacity;
	int count;
	VisitorCounter* visit;

public:
	VisitorCounter();
	VisitorCounter(int);


	string getIP();
	void setIP(string);


	void add(string);
	void resize();
	int search(string);
	void Delete(string);
	void shift(int);
	void Display();
};