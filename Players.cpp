//
// Created by rrluc on 5/22/2022.
//

#include "Players.h"

Players::Players() {

}
// set the number of players
void Players::setNumPlayers(int numberOfPlayers) {
    numOfPlayers = numberOfPlayers;
}
// set player names
void Players::setName(string playerName) {
    name = playerName;
}
// get the number of players
int Players::getNumPlayers() const {
    return numOfPlayers;
}

int Players::getPlayerNames() const {
    return 0;
}

void Players::inputPlayerNames() {

}

