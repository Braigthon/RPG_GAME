#include <iostream>
#include "Enemy/Enemy.h"
#include "Player/Player.h"

int main() {

    int select;

    Player *player = new Player ("goku", 100, 20, 5, 5);
    Enemy *enemy = new Enemy("naruto", 100, 25, 2, 3);


    do {
        cout << player->getName() << " select a Action:" << "\n[1]-Attack" << endl;
        cin >> select;
        switch (select) {
            case 1: player->doAttack(enemy);
                break;
            default:
                break;
        }

        cout << enemy->getName() << " select a Action:" << "\n[1]-Attack" << endl;
        cin >> select;
        switch (select) {
            case 1: enemy->doAttack(player);
                break;
            default:
                break;
        }
    }
    while (player->getHealth() >= 50);

    cout << player->toString() << endl;
    cout << enemy->toString() << endl;

    cout << "\nkrilin has died" << endl;
    cout << "\nGoku has transformed in Super sayayin 1\n" << endl;

    player->levelUp();

    player->setName("Goku Super Sayayin");


    do {
        cout << player->getName() << " select a Action:" << "\n[1]-Attack" << endl;
        cin >> select;
        switch (select) {
            case 1: player->doAttack(enemy);
                break;
            default:
                break;
        };
        if (enemy->getHealth() >= 0 or player->getHealth() >= 0) {
            break;
        };

        cout << enemy->getName() << " select a Action:" << "\n[1]-Attack" << endl;
        cin >> select;
        switch (select) {
            case 1: enemy->doAttack(player);
                break;
            default:
                break;
        }
        if (enemy->getHealth() >= 0 or player->getHealth() >= 0) {
            break;
        };
    } while (enemy->getHealth() >= 0);

    enemy->takeDamage(enemy->getHealth());

    cout << player->toString() << "\n" <<  endl;
    cout << enemy->toString() <<  "\n" <<  endl;

    cout << "goku le gana" << endl;

    delete player;
    delete enemy;
    return 0;
}
