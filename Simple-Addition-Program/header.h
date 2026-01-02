#include <iostream>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date();
    void setMonth(int month);
    int getMonth() const;
    void setDay(int day);
    int getDay() const;
    void setYear(int year);
    int getYear() const;
    void displayDate() const;
};