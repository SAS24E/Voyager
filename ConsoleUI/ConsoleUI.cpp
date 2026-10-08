#include "ConsoleUI.h"
#include "../GameEngine/GameEngine.h"
#include "../Player/Player.h"
#include "../Enemy/Enemy.h"
#include <iostream>

void ConsoleUI::log(const std::string &message)
{
    std::cout << message << std::endl;
}

void ConsoleUI::handlePlayerChoice(Player &player, GameEngine &gameEngine, bool &gameRunning)
{
    log("1. Travel");
    log("2. Check your inventory");
    log("3. Exit the game");
    int option;
    option = 0;

    std::cin >> option;
    switch (option)
    {
    case 1:
        if (!gameEngine.canMoveForward())
        {
            log("You have reached the end of the path.");
        }
        else
        {
            gameEngine.movePlayer();
        }
        break;
    case 2:
        player.showInventory();
        break;
    case 3:
        gameRunning = false;
        break;
    default:
        log("Invalid option.");
        break;
    }
}

void ConsoleUI::roomActionMenu(Player &player, GameEngine &gameEngine, Enemy &enemy)
{
    log("What would you like to do?");
    log("1. Attack");
    log("2. Flee");
    log("3. Check Inventory");
    log("4. Use Item");
    int option = 0;
    std::cin >> option;
    switch (option)
    {
    case 1:
        gameEngine.engageCombat(player, enemy);
        break;
    case 2:
        log("You flee from the enemy!");
        gameEngine.fleeFromCombat(player, enemy);
        break;
    case 3:
        log("You check your inventory!");
        player.showInventory();
        break;
    case 4:
        log("You would use an item here if I implemented it!....");
        break;
    default:
        log("Invalid option.");
        break;
    }
}
