#include<iostream>
using namespace std;

struct testData
{
    int data[3][3] = { {6, 10, 16}, {60, 24, 30}, {65, 30, 15} };
};

void getTotal(testData td) 
{
    int total = 0;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            total = total + td.data[i][j];
        }
    }
    cout << "Total = " << total << endl;
}

void getAverage(testData td) 
{
    int total = 0;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            total = total + td.data[i][j];
        }
    }
    cout << "Average = " << total / 9.0 << endl;
}

void getRowTotal(testData td, int row)
{
    int rowTotal = 0;
    for (int i = 0; i < 3; i++) 
    {
        rowTotal = rowTotal + td.data[row][i];
    }
    cout << "Row " << row << " Total =  " << rowTotal << endl;
}

void getColumnTotal(testData td, int col) 
{
    int colTotal = 0;
    for (int i = 0; i < 3; i++)
    {
        colTotal = colTotal + td.data[i][col];
    }
    cout << "Column " << col << " Total = " << colTotal << endl;
}


void getHighestInRow(testData& td, int row)
{
    if (row < 0 || row >= 3)
    {
        cout << "Invalid row index !!!" << endl;
        return;
    }
    int highest = td.data[row][0];
    for (int i = 1; i < 3; i++)
    {
        if (td.data[row][i] > highest) 
        {
            highest = td.data[row][i];
        }
    }
    cout << "Highest value in row " << row << " = " << highest << endl;
}

void getHighestInColumn(testData& td, int col)
{
    if (col < 0 || col >= 3) 
    {
        cout << "Invalid column index!" << endl;
        return;
    }
    int highest = td.data[0][col];
    for (int i = 1; i < 3; i++)
    {
        if (td.data[i][col] > highest) 
        {
            highest = td.data[i][col];
        }
    }
    cout << "Highest value in column " << col << " = " << highest<< endl;
}

int main() 
{
    testData td;

    getTotal(td);
    getAverage(td);
    getRowTotal(td, 1);
    getColumnTotal(td, 2);

    return 0;
}