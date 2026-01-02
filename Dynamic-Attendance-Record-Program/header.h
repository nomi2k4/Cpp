#include<iostream>
#include<string>
using namespace std;

class AttendanceRecord
{
private:
    int *rollNumbers;   
    int capacity;       
    int size;           

public:
    AttendanceRecord(int);      
    int getCapacity();
    void setCapacity(int);
    int getSize();
    void setSize(int);
    void insert(int);
    void resize();
    void display();
    int search(int);
    void shift(int);
    void remove(int);          
};