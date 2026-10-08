#include <iostream>
#include "Player/Player.h"
#include "Inventory/Inventory.h"
#include "Utility/Utility.h"
#include "GameEngine/GameEngine.h"
#include "ConsoleUI/ConsoleUI.h"
#include "Log/log.h"
#include <chrono>
#include <thread>

using namespace ConsoleUI;

int main()
{
    Player player;
    GameEngine gameEngine;
    Log Log;

    bool gameRunning = true;

    Log.log("You awake in a dark room. You have no memory of how you got here. You see a door in front of you.");
    Log.log("Your mind is foggy, but you remember your name is...");
    player.setUserName();
    Log.log("You hear a loud screech from the darkness.");
    Log.log("The screech echoes through the room, making you feel uneasy.");
    Log.log("You feel a chill run down your spine.");
    Log.log("You see a skeleton in the corner of the room.");
    Log.log("The skeleton seems to be a fallen warrior. He is holding a sword and a shield.");
    Log.log("You may find these useful in your journey.");
    player.addItem({"Sword", ItemType::Weapon, ItemRarity::Common, ItemEffect::StrengthBoost, ItemStrength::Moderate});
    player.addItem({"Shield", ItemType::Armor, ItemRarity::Common, ItemEffect::DefenseBoost, ItemStrength::Moderate});
    Log.log("You also find a health potion and a mana potion in the skeletons bag.");
    player.addItem({"Health Potion", ItemType::Potion, ItemRarity::Common, ItemEffect::HealthBoost, ItemStrength::Weak});
    player.addItem({"Mana Potion", ItemType::Potion, ItemRarity::Common, ItemEffect::ManaBoost, ItemStrength::Weak});

    player.showInventory();

    Log.log("You hear a clear voice in your head...");
    Log.log("Find me...." + player.getUserName());
    while (gameRunning)
    {
        handlePlayerChoice(player, gameEngine, gameRunning);
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
}
