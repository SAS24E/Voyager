#pragma once
#include <string>

class Item
{
private:
    std::string name;
    std::string description;
    std::string amount;
    std::string weight;
    std::string type;
    std::string rarity;
    std::string effect;
    std::string strength;
    int value;

public:
    Item() : name(""), description(""), value(0) {};
    Item(const std::string &name, const std::string &description, int value);
    std::string getName() const;
    std::string getDescription() const;
    int getValue() const;

    ~Item();
};
