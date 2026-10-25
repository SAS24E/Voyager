#include "Player.h"
#include <iostream>
#include <string>

Player::Player() : userName(""), health(100), gold(999) {}

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
    notify("You have found " + item.getName() +
           ". Your inventory is now worth " +
           std::to_string(inventory.totalInventoryValue()) + ".");
}

void Player::showInventory() const
{
    inventory.showInventory();
}

void Player::subscribe(Observer &observer)
{
    observers.push_back(&observer);
}

void Player::notify(const std::string &message)
{
    for (Observer *observer : observers)
    {
        observer->onPlayerEvent(message);
    }
}
