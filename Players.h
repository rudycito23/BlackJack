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
    string name{" "};
    int numOfPlayers{0};
    vector<string> listOfPlayers;

public:
    Players();
    void setNumPlayers(int);
    void setName(string);
    void inputNames();
    vector<string> getName();
    //void printAll();

};


#endif //BLACKJACK_PLAYERS_H
