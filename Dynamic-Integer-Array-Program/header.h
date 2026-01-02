#include<iostream>
#include<string>
using namespace std;
class array
{
private:
    int* arr;
    int capacity;
    int size;

public:
    array(int);
    int getCapacity();
    void setCapacity(int capacity);
    int getSize();
    void setSize(int size);
    void insert(int value);
    void resize();
    void display();
};