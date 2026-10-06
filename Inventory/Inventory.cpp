#include "Inventory.h"
#include <iostream>
#include <algorithm>
#include "../Log/log.h"


void Inventory::addItem(const Item &item)
{
    items.push_back(item);
    Log::log(item.name + " was added to your inventory.");
}

void Inventory::removeItem(const std::string &itemName)
{
    auto item = std::find_if(
        items.begin(),
        items.end(),
        [&itemName](const Item &item)
        {
            return item.name == itemName;
        });

    if (item != items.end())
    {
        std::cout << item->name << " was removed from your inventory." << std::endl;
        items.erase(item);
    }
}

void Inventory::showInventory() const
{
    if (items.empty())
    {
        std::cout << "Your inventory is empty." << std::endl;
        return;
    }
    std::cout << "Your inventory contains:" << std::endl;
    for (int i = 0; i < items.size(); i++)
    {
        std::cout << items[i].name << std::endl;
    }
}