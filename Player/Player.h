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
    std::string getUserName();
    int getHealth();
    int getGold();
    void showInventory() const;
    void setUserName();
    void takeDamage(int amount);
    void heal(int amount);
    void addGold(int amount);
    void spendGold(int amount);
    void addItem(const Item &item);
    void removeItem(const std::string &itemName);
};
