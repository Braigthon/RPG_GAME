#include <iostream>
#include "Enemy/Enemy.h"
#include "Player/Player.h"
#include "Combat/Combat.h"

int main() {

    Player *player = new Player("Itadori", 60, 8, 2, 30);
    Enemy *enemy = new Enemy("Sokuna", 9, 5, 3, 7);
    Enemy *enemy2 = new Enemy("Mahito", 20, 8, 5, 2);

    cout << "[" << player->getName() <<"\n vs \n["<< enemy->getName() << "\n["<< enemy2->getName() << "\n" <<endl;

    vector<Character*> participants;
    participants.push_back(player);
    participants.push_back(enemy);
    participants.push_back(enemy2);

    Combat* combat = new Combat(participants);
    combat->doCombat();

    //char* buffer = player->serialize();

    //Player* ooootroPlayer = Player::unserialize(buffer);


    delete player;
    delete enemy;
    delete enemy2;
    delete combat;
    return 0;
}
