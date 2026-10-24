
#include "Item.h"
#include <iostream>
#include <string>

Item::Item(const std::string &name, const std::string &description, int value) : name(name), description(description), value(value) {}

std::string Item::getName() const
{
    return name;
}

std::string Item::getDescription() const
{
    return description;
}

int Item::getValue() const
{
    return value;
}

Item::~Item()
{
    std::cout << "Item:" << this->name << " destroyed: " << name << std::endl;
}
