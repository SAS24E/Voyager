#include "Inventory.h"
#include <iostream>
#include <algorithm>
#include "../Log/Log.h"


void Inventory::addItem(const Item &item)
{
    items.push_back(item);
}

void Inventory::removeItem(const std::string &itemName)
{
    auto item = std::find_if(
        items.begin(),
        items.end(),
        [&itemName](const Item &item)
        {
            return item.getName() == itemName;
        });

    if (item != items.end())
    {
        std::cout << item->getName() << " was removed from your inventory." << std::endl;
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
    for (const Item &item : items)
    {
        std::cout << item.getName() << std::endl;
    }
}

int Inventory::totalInventoryValue() const
{
    int totalValue = 0;
    for (const Item &item : items)
    {
        totalValue += item.getValue();
    }
    return totalValue;

}