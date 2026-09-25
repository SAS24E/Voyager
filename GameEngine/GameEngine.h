#pragma once
#include "../Player/Player.h"
#include "../Room/Room.h"
#include "../Enemy/Enemy.h"
#include "../Utility/Utility.h"
#include <vector>
class GameEngine {
    private:
        std::vector<Room> rooms;

    public:
        GameEngine();
        void exploreNextRoom(Player& player);
        void randomEnemyGeneration(Enemy& enemy);
        void engageCombat(Player& player, Enemy& enemy); 


};