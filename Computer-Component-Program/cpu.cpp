#include "cpu.h"

CPU::CPU()
{
    clockSpeed = "";
    cores = 0;
}

CPU::CPU(string clockSpeed, int cores)
{
    this->clockSpeed = clockSpeed;
    this->cores = cores;
}

CPU::CPU( CPU& cpu)
{
    this->clockSpeed = cpu.clockSpeed;
    this->cores = cpu.cores;
}

string CPU::getClockSpeed()
{
    return clockSpeed;
}

int CPU::getCores()
{
    return cores;
}

void CPU::setClockSpeed(string clockSpeed)
{
    this->clockSpeed = clockSpeed;
}

void CPU::setCores(int cores)
{
    this->cores = cores;
}
