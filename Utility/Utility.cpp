#include "Utility.h"
#include "../GameEngine/GameEngine.h"
#include "../Player/Player.h"
#include "../Enemy/Enemy.h"
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

void Utility::roomActionMenu(Player &player, GameEngine &gameEngine, Enemy &enemy){
    log("What would you like to do?");
    //if enemy is alive, show combat options, else show loot options.
    log("1. Attack"); // we have engageCombat in GameEngine, we can call that here.
    log("2. Flee"); // add to gameEngine to handle fleeing from combat, maybe a random chance to succeed or fail.
    log("3. Check Inventory"); // we can call player.showInventory() here.
    log("4. Use Item"); // we can call player.useItem() here, we need to add that function to Player class.
    int option = 0;
    std::cin >> option;
    switch (option)
    {
    case 1:
            gameEngine.engageCombat(player, enemy); // we can call engageCombat in GameEngine here.
            break;
        case 2:
            log("You flee from the enemy!");
            gameEngine.fleeFromCombat(player, enemy); // create this now....
            break;
        case 3:
            log("You check your inventory!");
            player.showInventory();
            break;
        case 4:
            log("You would use an item here if I implemented it!...."); // we will think about how to implement this later, maybe we can call player.useItem() here. or we use inventory class to handle this.
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