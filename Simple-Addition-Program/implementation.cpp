#include "header.h"

Date::Date()
{
    int month = 0;
    int day = 0;
    int year = 0;
}
void Date::setMonth(int m)
{
    month = m;
}

int Date::getMonth() const
{
    return month;
}

void Date::setDay(int day)
{
    this->day = day;
}

int Date::getDay() const
{
    return day;
}

void Date::setYear(int year)
{
    this->year = year;
}

int Date::getYear() const
{
    return year;
}

void Date::displayDate() const
{
    std::cout << month << "/" << day << "/" << year;
}