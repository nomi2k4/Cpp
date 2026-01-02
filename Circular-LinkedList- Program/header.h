#include<iostream>
using namespace std;

class Node
{
private: 
	int data;
	Node* add;

public:
	Node();
	Node(int);
	int getdata();
	void setdata(int);
	Node* getadd();
	void setadd(Node*);
};





//---------------------------------------------
class list
{
private:
	Node* head;
	Node * tail;

public:
	list();
	bool isempty();
	void insertathead(int);
	void insertattail(int);
	void insertattarget(int,int);
	Node* search(int);
	void remove(int);
	void print();
};