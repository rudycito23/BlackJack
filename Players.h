//
// Created by rrluc on 5/22/2022.
//

#ifndef BLACKJACK_PLAYERS_H
#define BLACKJACK_PLAYERS_H

#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

class Players {
private:
    string name{"No Name"};
    int numOfPlayers{0};
    vector<string> listOfPlayers;

public:
    Players();
    void setNumPlayers(int);        // set the number of players
    void setName(string);           // set the name of the players
    int getNumPlayers() const;      // get the number of players
    int getPlayerNames() const;     // get the name of the players
    void inputPlayerNames();        // input player names



};


#endif //BLACKJACK_PLAYERS_H
