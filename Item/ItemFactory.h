#pragma once

#include "Item.h"

class ItemFactory
{
public:
    static Item createSword();
    static Item createHealthPotion();
};
