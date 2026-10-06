#pragma once
#include <vector>
#include <string>

enum class ItemType
{
    Weapon = 0,
    Armor,
    Potion,
    Miscellaneous
};

enum class ItemRarity
{
    Common = 0,
    Uncommon,
    Rare,
    Epic,
    Legendary
};

enum class ItemEffect
{
    None = 0,
    HealthBoost,
    ManaBoost,
    StrengthBoost,
    DefenseBoost
};

enum class ItemStrength
{
    Weak = 0,
    Moderate,
    Strong,
    VeryStrong
};

struct Item {
    std::string name;
    ItemType type;
    ItemRarity rarity;
    ItemEffect effect;
    ItemStrength strength;
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