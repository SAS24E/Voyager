#pragma once
#include <vector>
#include <string>
#include "../Item/Item.h"

// The idea is that Inventory will own a collection of Item objects, allowing the player to manage their items in the game. So we need to use composition to represent the relationship between Inventory and Item. The Inventory class will have a vector of Item objects as a member variable, allowing it to store and manage multiple items. This way, the Inventory class can provide methods to add, remove, and display items in the player's inventory.

class Inventory
{
private:
    std::vector<Item> items;


    


public:
    Inventory() = default;

    void addItem(const Item &item);
    void removeItem(const std::string &itemName);
    void showInventory() const;
};