#pragma once
#include <string>

class Player;
class GameEngine; // forward delcare in header allows for us to use the references.

namespace Utility
{
    void log(const std::string &message);
    void handlePlayerChoice(Player &player, GameEngine &gameEngine, bool &gameRunning);
    int generateRandomNumber(int min,int max);
};