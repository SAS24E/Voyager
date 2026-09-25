#include "Utility.h"
#include "../GameEngine/GameEngine.h"
#include "../Player/Player.h"
#include <iostream>
#include <math.h>
void Utility::log(const std::string &message)
{
    std::cout << message << std::endl;
}

void Utility::handlePlayerChoice(Player &player, GameEngine &gameEngine, bool &gameRunning)
{
    log("1. Explore the next room");
    log("2. Check your inventory");
    log("3. Exit the game");
    int option; // we need to reset option after each loop to avoid infinite loop if user enters invalid option.
    option = 0; // reset option to avoid infinite loop if user enters invalid option.
    std::cin >> option;
    switch (option)
    {
    case 1:
        gameEngine.exploreNextRoom(player);
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

int Utility::generateRandomNumber(int min, int max){
    int randomNumber = rand() % (max - min + 1) + min; 
    return randomNumber;
}