#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    string name;
    int matchesPlayed;
    string battingPosition;
    int totalRuns;
    double average;
    double strikeRate;
    int totalFours;
    int totalSixes;
    Player* next;

public:
    Player(string name, int matchesPlayed, string battingPosition, int totalRuns,
        double average, double strikeRate, int totalFours, int totalSixes);

    string getName();
    int getMatchesPlayed();
    string getBattingPosition();
    int getTotalRuns();
    double getAverage();
    double getStrikeRate();
    int getTotalFours();
    int getTotalSixes();
    Player* getNext();
    void setNext(Player* next);
};

class PlayerList
{
private:
    Player* head;
    Player* tail;

public:
    PlayerList();

    void insertAtHead(Player* newPlayer);
    void insertAtTail(Player* newPlayer);

    void addPlayer(string name, int matchesPlayed, string battingPosition,
        int totalRuns, double average, double strikeRate,
        int totalFours, int totalSixes);

    void displayAllRecords();
};