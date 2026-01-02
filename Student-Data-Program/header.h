#include<iostream>
#include<string>
using namespace std;
class student
{
private:
	string name;
	int rollNo;
	int totalMarks;
	float persentage;

public:
	student();
	string getname();
	int getrollNo();
	int gettotalMarks();
	float getpersentage();

	void setname(string);
	void setrollNo(int);
	void settotalMarks(int);
	void setpersentage(float);
};
