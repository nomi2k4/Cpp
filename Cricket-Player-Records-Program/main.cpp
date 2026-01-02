#include "header.h"

int main()
{
    PlayerList team;

    team.addPlayer("Shaheen", 120, "opening", 6000, 52.5, 130.2, 500, 150);
    team.addPlayer("Umer Akmal", 200, "opening", 8000, 45.3, 135.1, 600, 200);
    team.addPlayer("Babar", 80, "non-opening", 2500, 39.0, 125.6, 300, 100);
    team.addPlayer("Rizwan", 50, "non-opening", 1500, 35.0, 140.0, 200, 50);

    team.displayAllRecords();

    return 0;
}