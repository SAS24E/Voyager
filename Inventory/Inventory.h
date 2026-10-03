#pragma once
#include <vector>
#include <string>
// so we can make an Item type enum class for the inventory
enum class ItemType
{
    Weapon,
    Armor,
    Potion,
    Miscellaneous
};

enum class ItemRarity
{
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary
};

enum class ItemEffect
{
    None,
    HealthBoost,
    ManaBoost,
    StrengthBoost,
    DefenseBoost
};

struct Item {
    std::string name;
    ItemType type;
    ItemRarity rarity;
    ItemEffect effect;
    int effectAmount;
};

class Inventory
{
private:
    std::vector<Item> items;
    int maxSlot;

public:
    Inventory() : maxSlot(5) {}

    void addItem(const Item& item);
    void removeItem(const std::string &itemName);
    void showInventory() const;
};