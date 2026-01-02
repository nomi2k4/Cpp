#include<iostream>
#include <string>
using namespace std;

class Scientist
{
private:
    int pubs;

public:
    Scientist();
    Scientist(int pubs);
    Scientist(Scientist& s);

    int getPubs();

    void setPubs(int pubs);

    void getData();
    void putData();
};