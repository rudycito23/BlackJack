#include <iostream>
#include "Players.h"

int main() {
    Players game;
    int numberOfPlayers;

    cout << "Welcome to Black Jack!" << endl << endl;
    cout << "Enter number of player(s): " << endl;
    cin >> numberOfPlayers;
    game.setNumPlayers(numberOfPlayers);

    cout << "Enter player name(s): " << endl;
    game.inputNames();
    game.getName();

    return 0;
}
