#include <iostream>
#include <string>

using namespace std;

class RAM
{
private:
    int capacity; // in gigabytes

public:
    RAM();
    RAM(int capacity);
    RAM( RAM& ram);

    int getCapacity();
    void setCapacity(int capacity);

    void insertData(string data);
    void displayData();
};