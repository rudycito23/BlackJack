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
// store the player names in a vector
void Players::inputNames() {
    Players fullGame;
    string playerName;

    while (numOfPlayers <= 8) {
        getline(cin, playerName);
        setName(name);
        listOfPlayers.push_back(name);
    }
}

vector<string> Players::getName() {
    for (int i = 0; i < listOfPlayers.size(); ++i) {
        cout << listOfPlayers.at(i) << " ";
    }
    return listOfPlayers;
}

//void printAll() {
//
//}