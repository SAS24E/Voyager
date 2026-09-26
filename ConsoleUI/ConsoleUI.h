#pragma once
#include <string>

class Player;
class GameEngine;
class Enemy;

namespace ConsoleUI {
    void handlePlayerChoice(Player &player, GameEngine &gameEngine, bool &gameRunning);
    void roomActionMenu(Player &player, GameEngine &gameEngine, Enemy &enemy); 
    void log(const std::string &message);
};
