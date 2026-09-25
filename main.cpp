#include <iostream>
#include "Player/Player.h"
#include "Inventory/Inventory.h"
#include "Utility/Utility.h"
#include "GameEngine/GameEngine.h"

using namespace Utility;

int main(){
    Player player; 
    GameEngine gameEngine;
    bool gameRunning = true;

    log("You awake in a dark room. You have no memory of how you got here. You see a door in front of you.");
    log("Your mind is foggy, but you remember your name is...");
    player.setUserName();

    log("You hear a clear voice in your head...");
    log("Find me...." + player.getUserName());
    while (gameRunning) {
        handlePlayerChoice(player, gameEngine, gameRunning);
        
    }
}
