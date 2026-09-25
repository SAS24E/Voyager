#pragma once
#include <string>
#include "../Inventory/Inventory.h"
class Player
{
private:
    std::string userName;
    int health;
    int gold;
    Inventory inventory;

public:
    Player();
    // getters
    std::string getUserName();
    int getHealth();
    int getGold();
    void showInventory();
    // setters
    void setUserName();
    void takeDamage(int amount);
    void heal(int amount);
    void addGold(int amount);
    void spendGold(int amount);
};
