#include <iostream>
#include "Player/Player.h"
#include "Inventory/Inventory.h"
#include "Utility/Utility.h"
#include "GameEngine/GameEngine.h"
#include "ConsoleUI/ConsoleUI.h"
#include "Log/Log.h"
#include "Item/ItemFactory.h"
#include <chrono>
#include <thread>

using namespace ConsoleUI;

int main()
{
    Player player;
    GameEngine gameEngine;
    Log log;
    player.subscribe(log);

    bool gameRunning = true;

    log.log("You awake in a dark room. You have no memory of how you got here. You see a door in front of you.");
    log.log("Your mind is foggy, but you remember your name is...");
    player.setUserName();
    log.log("You hear a loud screech from the darkness.");
    log.log("The screech echoes through the room, making you feel uneasy.");
    log.log("You feel a chill run down your spine.");
    log.log("You see a skeleton in the corner of the room.");
    log.log("The skeleton seems to be a fallen warrior. He is holding a sword and a shield.");
    log.log("You may find these useful in your journey.");
    player.addItem(ItemFactory::createSword());

    player.showInventory();

    log.log("You hear a clear voice in your head...");
    log.log("Find me...." + player.getUserName());
    while (gameRunning)
    {
        handlePlayerChoice(player, gameEngine, gameRunning);
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
}
