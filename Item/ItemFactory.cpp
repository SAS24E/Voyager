#include "ItemFactory.h"

Item ItemFactory::createSword()
{
    return Item("Sword", "A sharp blade, useful for combat.", 10);
}

Item ItemFactory::createHealthPotion()
{
    return Item("Health Potion", "Restores a small amount of health.", 5);
}
