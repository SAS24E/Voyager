#pragma once
#include "Inventory/Inventory.h"
#include <string>
// item inherts all properties of inventory.
class Item : public Inventory
{

private:
    std::string const name;
    std::string const description;
    std::string const healAmount;

public:
    Item(std::string n, std::string d, std::string h) : name(n), description(d), healAmount(h) {}
    std::string getName() const;
    std::string getDescription() const;
    // setter that heals player and uses inventory item.
};