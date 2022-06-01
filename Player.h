//
// Created by rrluc on 5/30/2022.
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H

#include <iostream>
#include <vector>
#include <utility>
#include <string>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::pair;
using std::endl;

class Player {
private:
    string name{"No Name"};
    vector<string> cards;
    int chips{0};

public:
    Player();
    void setName(string);
    string getName() const;



};


#endif //BLACKJACK_PLAYER_H
