#include <iostream>
#include <string>
using namespace std;

void Encrypt(string, string);
void Decrypt(string, string);

// step 1
string keyExpansion(string, string);
// step 2
char* messageToList(string);
// step 3
char* shiftForward(char*, string, int);//For Encrypt
char* shiftBackward(char*, string, int);//For Decrypt
// step 4
class stack;
stack* pushInStack(stack*, char*, int);

class node
{
private:
    char data;
    node* add;

public:
    node(char);
    char getdata();
    void setdata(char);
    node* getadd();
    void setadd(node*);
};

class stack
{
private:
    node* top;
public:
    stack();
    void push(char);
    char pop();
    bool isempty();
};