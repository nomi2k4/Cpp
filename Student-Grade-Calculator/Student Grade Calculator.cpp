#include <iostream>
using namespace std;

struct students
{
    int id;
    string name;
    float marks[3];
    char grade;
};


char calculateGrade(float a[3])
{
    char grade;
    float b = 0,p;
    int av;
    for (int i = 1; i <= 3; i++)
    {
        b = a[i] + b;
    }
    av = b / 3;
    cout << "\nAverage = " << av;
    p=(b / 300) * 100;
    if (p >= 90)
    {
        grade = 'A';
    }
    else if (p >= 80 && p<89)
    {
        grade = 'B';
    }
    else if (p<80)
    {
        grade = 'C';
    }
    else
    {
        cout << "Invalid";
    }
    return grade;
}


int main()
{
    students s;
    cout << "\n\nEnter your id: ";
    cin >> s.id;
    cout << "Enter your name: ";
    cin >> s.name;
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter your marks for subject"<<i<<" out of 100: ";
        cin >> s.marks[i];
        if (s.marks[i] > 100)
        {
            cout << "Marks should not be exceed by 100.";
            return main();
        }
        else
        {
            continue;
        }
    }
    s.grade = calculateGrade(s.marks);
    cout << "\nyour Grade = " << s.grade<<endl;
    return 0;
}
    