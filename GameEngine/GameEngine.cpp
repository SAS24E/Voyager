#include "GameEngine.h"
#include "../ConsoleUI/ConsoleUI.h"

using namespace ConsoleUI;

GameEngine::GameEngine() : currentRoomIndex(0)
{

    rooms.push_back(Room("Hallway", "A long dark hallway with flickering lights and eerie shadows"));

    rooms.push_back(Room("Dark Room", "A small dark room with a single candle providing minimal light"));

    rooms.push_back(Room("Library", "A dimly lit library with towering bookshelves and a sense of ancient knowledge"));

    rooms.push_back(Room("Secret Chamber", "A hidden chamber with ancient artifacts and mysterious inscriptions"));

    rooms.push_back(Room("Final Chamber", "A grand chamber with a mysterious altar and glowing runes"));
}

void GameEngine::exploreNextRoom(Player &player)
{

    log("You explore the next room...");
    Enemy enemy;
    if(currentRoomIndex >= rooms.size()){
        log("There are no more rooms left to explore.");
        return;
    }
    
    Room& currentRoom = rooms[currentRoomIndex];
    log("You enter the " + currentRoom.getName() + ": " + currentRoom.getDescription());
    currentRoomIndex++;
    randomEnemyGeneration(enemy);
    ConsoleUI::roomActionMenu(player, *this, enemy);
}

void GameEngine::engageCombat(Player &player, Enemy &enemy)
{
    log ("You encounter a " + enemy.getName() + " with " + std::to_string(enemy.getHealth()) + " health and " + std::to_string(enemy.getPower()) + " power.");
    log("You engage in combat!");
    while (player.getHealth() > 0 && enemy.getHealth() > 0)
    {
        int playerDamage = Utility::generateRandomNumber(1, 10);
        int enemyDamage = Utility::generateRandomNumber(1, 5);

        enemy.takeDamage(playerDamage);
        player.takeDamage(enemyDamage);
        log("You deal " + std::to_string(playerDamage) + " damage to the enemy.");
        log("The enemy deals " + std::to_string(enemyDamage) + " damage to you.");
    }
    if (player.getHealth() <= 0)
    {
        log("You have been defeated!");
    }
    else
    {
        log("You have defeated the enemy!");
    }
}

void GameEngine::randomEnemyGeneration(Enemy& enemy){
    int enemyType = Utility::generateRandomNumber(1, 3);
    switch (enemyType)
    {
        case 1:
            enemy = Enemy("Goblin", 20, 5);
            break;
        case 2:
            enemy = Enemy("Orc", 30, 10);
            break;
        case 3:
            enemy = Enemy("Troll", 40, 15);
            break;
    }

}

void GameEngine::fleeFromCombat(Player& player, Enemy& enemy){
    int fleeChance = Utility::generateRandomNumber(1, 100);
    if (fleeChance <= 50) // 50% chance to successfully flee
    {
        log("You successfully fled from the enemy!");
    }
    else
    {
        log("You failed to flee! The enemy attacks you.");
        int enemyDamage = Utility::generateRandomNumber(1, 5);
        player.takeDamage(enemyDamage);
        log("The enemy deals " + std::to_string(enemyDamage) + " damage to you.");
    }
}