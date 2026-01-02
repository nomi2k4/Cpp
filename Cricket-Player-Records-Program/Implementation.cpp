#include "header.h"

Player::Player(string name, int matchesPlayed, string battingPosition, int totalRuns,
    double average, double strikeRate, int totalFours, int totalSixes)
{
    this->name = name;
    this->matchesPlayed = matchesPlayed;
    this->battingPosition = battingPosition;
    this->totalRuns = totalRuns;
    this->average = average;
    this->strikeRate = strikeRate;
    this->totalFours = totalFours;
    this->totalSixes = totalSixes;
    this->next = NULL;
}

string Player::getName()
{
    return name;
}

int Player::getMatchesPlayed()
{
    return matchesPlayed;
}

string Player::getBattingPosition()
{
    return battingPosition;
}

int Player::getTotalRuns()
{
    return totalRuns;
}

double Player::getAverage()
{
    return average;
}

double Player::getStrikeRate()
{
    return strikeRate;
}

int Player::getTotalFours()
{
    return totalFours;
}

int Player::getTotalSixes()
{
    return totalSixes;
}

Player* Player::getNext()
{
    return next;
}

void Player::setNext(Player* next)
{
    this->next = next;
}




PlayerList::PlayerList()
{
    head = NULL;
    tail = NULL;
}

void PlayerList::insertAtHead(Player* newPlayer)
{
    newPlayer->setNext(head);
    head = newPlayer;
    if (tail == NULL)
    {
        tail = newPlayer;
    }
}

void PlayerList::insertAtTail(Player* newPlayer)
{
    if (tail == NULL)
    {
        head = newPlayer;
        tail = newPlayer;
    }
    else
    {
        tail->setNext(newPlayer);
        tail = newPlayer;
    }
}

void PlayerList::addPlayer(string name, int matchesPlayed, string battingPosition,
    int totalRuns, double average, double strikeRate,
    int totalFours, int totalSixes)
{
    Player* newPlayer = new Player(name, matchesPlayed, battingPosition, totalRuns,
        average, strikeRate, totalFours, totalSixes);

    if (battingPosition == "opening")
    {
        insertAtHead(newPlayer);
    }
    else
    {
        insertAtTail(newPlayer);
    }
}

void PlayerList::displayAllRecords()
{
    if (head == NULL)
    {
        cout << "No players in the list." << endl;
        return;
    }

    Player* temp = head;
    while (temp != NULL)
    {
        cout << "Name: " << temp->getName() << endl;
        cout << "Matches Played: " << temp->getMatchesPlayed() << endl;
        cout << "Batting Position: " << temp->getBattingPosition() << endl;
        cout << "Total Runs: " << temp->getTotalRuns() << endl;
        cout << "Average: " << temp->getAverage() << endl;
        cout << "Strike Rate: " << temp->getStrikeRate() << endl;
        cout << "Total Fours: " << temp->getTotalFours() << endl;
        cout << "Total Sixes: " << temp->getTotalSixes() << endl;
        cout << "------------xxxxxx--------------" << endl;

        temp = temp->getNext();
    }
}