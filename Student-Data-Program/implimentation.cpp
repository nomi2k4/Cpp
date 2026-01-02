#include "header.h"
 
using namespace std;

student::student()
{
	name = "";
	rollNo = 0;
	totalMarks = 0;
	persentage = 0.0;
}
string student::getname()
{
	return name;
}
int student::getrollNo()
{
	return rollNo;
}
int student::gettotalMarks()
{
	return totalMarks;
}
float student::getpersentage()
{
	return persentage;
}

void student::setname(string na)
{
	name = na;
}
void student::setrollNo(int r)
{
	rollNo = r;
}
void student::settotalMarks(int tm)
{
	totalMarks = tm;
}
void student::setpersentage(float per)
{
	persentage = per;
}