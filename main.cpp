#include <iostream>
#include "Player/Player.h"
#include "Inventory/Inventory.h"
#include "Utility/Utility.h"
#include "GameEngine/GameEngine.h"
#include "ConsoleUI/ConsoleUI.h"
#include "Log/log.h"

using namespace ConsoleUI;

int main(){
    Player player; 
    GameEngine gameEngine;
    Log Log; // since log is static we don't need to create an instance of it however it will allow us to call the log function using the instance.
    bool gameRunning = true;

    Log.log("You awake in a dark room. You have no memory of how you got here. You see a door in front of you.");
    Log.log("Your mind is foggy, but you remember your name is...");
    player.setUserName();

    // Unit test for log class 
    
    // Log.setLevel(Log::LevelError);
    // Log.warn("This is a warning message.");
    // Log.info("This is an info message.");
    // Log.error("This is an error message.");

    Log.log("You hear a clear voice in your head...");
    Log.log("Find me...." + player.getUserName());
    while (gameRunning) {
        handlePlayerChoice(player, gameEngine, gameRunning);
    }
}
