/*
** main.cpp - il programma che gioca a Battaglia Navale
** Sandro Gallo - 20/04/2024
*/

#include <iostream>
#include "BattleShip.cpp"
using namespace std;

int main() {
    cout << "Gioco della Battaglia Navale - Buon divertimento" << endl;
    BattleShip gioco = BattleShip();
    gioco.play();
    cout << "GAME OVER!" << endl;
    return 0;
}
