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
    Players game;
    int numOfPlayers;
    string playerNames;

    cin >> numOfPlayers;
    while ((numOfPlayers > 0) || (numOfPlayers < 9)) {
        if ((numOfPlayers <= 0) || (numOfPlayers >= 9)) {
            cout << "Invalid number of players. A game of black jack is between 1-8 players; try again." << endl;
        }
        else {
            getline(cin, playerNames);
            game.setNumPlayers(numOfPlayers);
            game.setName(playerNames);
            listOfPlayers.push_back(playerNames);
        }
    }
}

void Players::printPlayerNames() {
    for (int i = 0; i < listOfPlayers.size(); ++i) {
        cout << listOfPlayers.at(i) << " ";
    }
}