#include "Room.h"
#include <string>

std::string Room::getName() const
{
    return name;
}

std::string Room::getDescription() const
{
    return description;
}

void Room::addExit(Direction direction, int roomId)
{
    exits[direction] = roomId; // Direction gives us the direction to add (key) and the room ID (value)
}

int Room::getExit(Direction direction) const
{
    // exits.find(direction) .find is used to search for a specific key in the map
    auto exit = exits.find(direction);
    if (exit == exits.end()) // .end is used to indicate the end of the map
    {
        return -1;
    }

    return exit->second;
}