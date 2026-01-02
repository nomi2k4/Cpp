#include "header.h"
#include <iostream>
using namespace std;
int main()
{
    Date date;

    int day, month, year;

    do {
        cout << "Enter day (1-31): ";
        cin >> day;
        if (day < 1 || day > 31) {
            cout << "Invalid day. Please try again." << endl;
        }
    } while (day < 1 || day > 31);

    do {
        cout << "Enter month (1-12): ";
        cin >> month;
        if (month < 1 || month > 12) {
            cout << "Invalid month. Please try again." << endl;
        }
    } while (month < 1 || month > 12);

    cout << "Enter year: ";
    cin >> year;

    date.setDay(day);
    date.setMonth(month);
    date.setYear(year);

    cout << "Date: ";
    date.displayDate();
    cout << endl;

    return 0;
}