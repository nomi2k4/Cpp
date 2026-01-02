#include"header.h"
using namespace std;
int main()
{
    array a(3);

    a.insert(111);
    a.insert(134);
    a.insert(141);//After this the array resize
    a.insert(161);
    a.insert(231);
    a.display();
    return 0;
}