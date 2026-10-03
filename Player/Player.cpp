#include "Player.h"
#include <iostream>

Player::Player() : userName(""), health(100), gold(999) {}

// getters
std::string Player::getUserName()
{
    return userName;
}
int Player::getHealth()
{
    return health;
}
int Player::getGold()
{
    return gold;
}

// setters
void Player::setUserName()
{
    std::cout << "Enter user name: " << std::endl;
    std::getline(std::cin, userName);
}

void Player::heal(int amount)
{
    health += amount;
}

void Player::takeDamage(int amount)
{
    health -= amount;
}

void Player::addGold(int amount)
{
    gold += amount;
}

void Player::spendGold(int amount)
{
    gold -= amount;
}
void Player::removeItem(const std::string &itemName)
{
    inventory.removeItem(itemName);
}

void Player::addItem(const Item &item)
{
    inventory.addItem(item);
}

void Player::showInventory() const
{
    inventory.showInventory();
}