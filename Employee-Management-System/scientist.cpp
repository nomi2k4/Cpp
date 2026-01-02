#include "scientist.h"

Scientist::Scientist() : pubs(0) {}

Scientist::Scientist(int pubs) : pubs(pubs) {}

Scientist::Scientist(Scientist& s) : pubs(s.pubs) {}

int Scientist::getPubs()
{
    return pubs;
}

void Scientist::setPubs(int pubs)
{
    this->pubs = pubs;
}

void Scientist::getData()
{
    cout << "\n\nEnter Number of Publications: ";
    cin >> pubs;
}

void Scientist::putData()
{
    cout << "\nPublications: " << pubs << endl;
}
