#include <iostream>
#include "Players.h"

int main() {
    Players game;
    string playerNames;

    cout << "Welcome to Black Jack!" << endl << endl;
    cout << "Enter number of player(s): " << endl;
    game.storePlayerNames();
    game.printPlayerNames();

    return 0;
}
