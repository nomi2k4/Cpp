#include"header.h"


Node::Node()
{
	data = -1;
	add = NULL;
}

Node::Node(int d)
{
	this->data = d;
	add = NULL;
}

int Node::getdata()
{
	return data;
}

void Node::setdata(int d)
{
	data = d;
}

Node* Node::getadd()
{
	return add;
}

void Node::setadd(Node* a)
{
	this->add = a;
}
//--------------------------------------------------


list::list()
{
	head = NULL;
	tail = NULL;
}

bool list::isempty()
{
	if (head == NULL)
	{
		return true;
	}
	return false;
}

void list::insertathead(int d)
{
	if (isempty())
	{
		insertattail(d);
	}
	else
	{
		Node* temp = new Node(d);
		temp->setadd(head);
		head = temp;
		tail->setadd(head);
	}
}
void list::insertattail(int d)
{
	if (isempty())
	{
		Node* temp = new Node(d);
		head = temp;
		tail = temp;
		tail->setadd(head);
	}
	else
	{
		Node* temp = new Node(d);
		tail->setadd(temp);
		tail = temp;
		tail->setadd(head);
	}
}
void list::insertattarget(int t, int d)
{
	Node* tar = search(t);
	if (tar == NULL)
	{
		cout << "Target not found";
	}
	else if (tar == head)
	{
		insertathead(d);
	}
	else if (tar == tail)
	{
		insertattail(d);
	}
	else
	{
		Node* temp = new Node(d);
		temp->setadd(tar->getadd());
		tar->setadd(temp);
	}
}
Node* list::search(int d)
{
	Node* temp = head;
	do
	{
		if (temp->getdata() == d)
		{
			return temp;
		}
		else
		{
			temp = temp->getadd();
		}
	} while (temp != head);
	return NULL;
}
void list::remove(int d)
{
	Node* temp = head;
	Node* previous = NULL;
	do
	{
		if (temp->getdata() == d)
		{
			break;
		}
		else
		{
			previous = temp;
			temp = temp->getadd();
		}
	} while (temp != head);

	if (temp == NULL)
	{
		cout << "Not Found";
		return;
	}
	else if(temp == head)
	{
		head = head->getadd();
		temp->setdata(NULL);
		delete temp;
		tail->setadd(head);
	}
	else if (temp == tail)
	{
		tail = previous;
		tail->setadd(head);
		delete temp;
	}
	else
	{
		previous->setadd(temp->getadd());
		temp->setadd(NULL);
		delete temp;
	}
}
void list::print()
{
	if (isempty())
	{
		cout<<"No data";
		return;
	}
	Node* temp = head;
	do
	{
			cout << temp->getdata();
			temp = temp->getadd();
	} while (temp != head);
}