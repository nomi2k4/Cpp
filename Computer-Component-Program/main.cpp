#include "cpu.h"
#include "ram.h"

int main()
{
    CPU cpu1("3.0 GHz", 4);
    CPU cpu2("2.5 GHz", 2);

    cout << "CPU 1 Clock Speed: " << cpu1.getClockSpeed() << ", Cores: " << cpu1.getCores() << endl;
    cout << "CPU 2 Clock Speed: " << cpu2.getClockSpeed() << ", Cores: " << cpu2.getCores() << endl;

    cpu1.setClockSpeed("3.5 GHz");
    cpu1.setCores(8);

    cout << "Updated CPU 1 Clock Speed: " << cpu1.getClockSpeed() << ", Cores: " << cpu1.getCores() << endl << endl;

    RAM ram1(16);
    RAM ram2(32);

    cout << "RAM 1 Capacity: " << ram1.getCapacity() << " GB" << endl;
    cout << "RAM 2 Capacity: " << ram2.getCapacity() << " GB\n\n" << endl;

    ram1.insertData("Operating System");
    ram1.displayData();

    ram2.insertData("Games and Applications");
    ram2.displayData();

    return 0;
}
