#include"header.h"
using namespace std;

VisitorCounter::VisitorCounter()
{
	IP = "";
	capacity = 0;
	count = 0;
}
VisitorCounter::VisitorCounter(int capacity)
{
	IP = "";
	this->capacity = capacity;
	count = 0;
	visit = new VisitorCounter[capacity];
}


string VisitorCounter::getIP()
{
	return IP;
}

void VisitorCounter::setIP(string ip)
{
	this->IP = ip;
}


void VisitorCounter::add(string ip)
{
	if (count==capacity)
	{
		resize();
		visit[count].setIP(ip);
		count++;
	}
	else
	{
		visit[count].setIP(ip);
		count++;
	}
}

void VisitorCounter::resize()
{
	capacity = capacity *2;
	VisitorCounter* newvisit = new VisitorCounter[capacity];
	for (int i = 0; i < count; i++)
	{
		newvisit[i] = visit[i];
	}
	delete[] visit;
	visit = newvisit;
}

int VisitorCounter::search(string ip)
{
	for (int i = 0; i < count; i++)
	{
		if (ip == visit[i].getIP())
		{
			return i;
		}
		
	}
	return -1;
}

void VisitorCounter::Delete(string ip)
{
	cout << "Searching.......\n";
	int index = search(ip);
	if (index == -1)
	{
		cout << "Not Found!!!!!";
		return;
	}
	else
	{
		cout << "Deleting ("<<visit[index].getIP()<<")\n";
		visit[index].setIP("");
		shift(index);
		cout <<"Deleted.......\n";
	}
}


void VisitorCounter::shift(int index)
{
	for (int i = index; i < count-1; i++)
	{
		visit[i]=visit[i + 1];
	}
	count--;
}

void VisitorCounter::Display()
{
	if (count == 0)
	{
		cout << "No Visits."<<endl;
	}
	else
	{
		cout << "\nVisits:\n";
		for (int i = 0; i < count; i++)
		{
			cout << visit[i].getIP() << endl;
		}
	}
}