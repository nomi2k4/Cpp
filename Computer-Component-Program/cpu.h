#include<iostream>
#include <string>

using namespace std;

class CPU
{
private:
    string clockSpeed;
    int cores;

public:
    CPU();
    CPU(string clockSpeed, int cores);
    CPU( CPU& cpu);

    string getClockSpeed();
    int getCores();

    void setClockSpeed(string clockSpeed);
    void setCores(int cores);
};