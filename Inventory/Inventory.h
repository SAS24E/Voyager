#pragma once
#include <vector>
#include <string>
#include "../Item/Item.h"
class Inventory
{
private:
    std::vector<Item> items;

public:
    Inventory() = default;

    void addItem(const Item &item);
    void removeItem(const std::string &itemName);
    void showInventory() const;
    int totalInventoryValue() const;
};