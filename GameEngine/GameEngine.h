#pragma once
#include "../Player/Player.h"
#include "../Room/Room.h"
#include "../Enemy/Enemy.h"
#include "../Utility/Utility.h"
#include <vector>

class GameEngine
{
private:
    std::vector<Room> rooms;
    int currentRoomId = 0;

public:
    GameEngine();

    void movePlayer(Direction direction);
    void randomEnemyGeneration(Enemy &enemy);
    void engageCombat(Player &player, Enemy &enemy);
    void fleeFromCombat(Player &player, Enemy &enemy);
};