#include "Room.h"

Room::Room(std::string name, std::string description) {
    this->name = name;
    this->description = description;
}

std::string Room::getName() const{
    return name;
}

std::string Room::getDescription() const{
    return description;
}