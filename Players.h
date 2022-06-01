//
// Created by rrluc on 5/22/2022.
//

#ifndef BLACKJACK_PLAYERS_H
#define BLACKJACK_PLAYERS_H

#include <iostream>
#include <vector>
#include <utility>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::pair;
using std::endl;

class Players {
private:
    int numOfPlayers{0};
    vector<string> listOfPlayers;

public:
    Players();
    void setNumPlayers(int);        // set the number of players
    int getNumPlayers() const;      // get the number of players
    void storePlayerNames();        // input player names
    void printPlayerNames();        // print player names



};


#endif //BLACKJACK_PLAYERS_H
