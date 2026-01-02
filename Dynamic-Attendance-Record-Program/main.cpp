#include "header.h"
using namespace std;

int main()
{
    AttendanceRecord record(5);

    //5 roll numbers
    record.insert(101);
    record.insert(102);
    record.insert(103);
    record.insert(104);
    record.insert(105);

    //3 more roll numbers to triggers resize
    record.insert(106);
    record.insert(107);
    record.insert(108);

    //display
    record.display();

    // Delete 2 roll numbers
    record.remove(103);
    record.remove(104);

    //display
    record.display();

    //3 new roll numbers
    record.insert(109);
    record.insert(110);
    record.insert(111);

    //display
    record.display();

    return 0;
}