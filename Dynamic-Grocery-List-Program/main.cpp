#include"header.h"
using namespace std;
int main()
{
    Grocery g(3);

    g.insert("milk");
    g.insert("Bread");
    g.insert("Eggs");//resizing.....

    g.insert("butter");
    g.insert("jam");
    g.insert("meat");
    g.insert("flour");
    g.display();
    return 0;
}