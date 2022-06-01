//
// Created by rrluc on 5/22/2022.
//

#include "Players.h"

Players::Players() {

}
// set the number of players
void Players::setNumPlayers(int numberOfPlayers) {
    while ((numberOfPlayers <=0) || (numOfPlayers >=9)) {
        string tempNumOfPlayers;
        cout << "Invalid number of players. A game of black jack is between 1-8 players; try again." << endl;
        getline(cin, tempNumOfPlayers);
        numOfPlayers = stoi(tempNumOfPlayers);
    }
    numOfPlayers = numberOfPlayers;

}
// get the number of players
int Players::getNumPlayers() const {
    return numOfPlayers;
}
void getPlayerNameAt () {

}
void Players::storePlayerNames() {
    int numOfPlayers;
    string playerNames;

    cin >> numOfPlayers;
    this->setNumPlayers(numOfPlayers);
    listOfPlayers.resize(numOfPlayers);
    for (int i = 0; i < getNumPlayers(); ++i) {
        cout << "Enter player(s) name: ";
        cin >> playerNames;
        this->setName(playerNames);
        listOfPlayers.at(i)= playerNames;
    }
}

void Players::printPlayerNames() {
    for (int i = 0; i < listOfPlayers.size(); ++i) {
        cout << listOfPlayers.at(i) << " ";
    }
}