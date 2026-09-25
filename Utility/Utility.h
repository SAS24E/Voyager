#pragma once
#include <string>


class Player;
class GameEngine; // forward delcare in header allows for us to use the references.
class Enemy;

namespace Utility
{
    void log(const std::string &message);
    void handlePlayerChoice(Player &player, GameEngine &gameEngine, bool &gameRunning);
    void roomActionMenu(Player &player, GameEngine &gameEngine, Enemy &enemy); 
    int generateRandomNumber(int min, int max);
};