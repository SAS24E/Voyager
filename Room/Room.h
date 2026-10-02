#include <string>
#include <map>

enum class Direction
{
    North = 0,
    South = 1,
    East = 2,
    West = 3
};

class Room
{
private:
    std::string name;
    std::string description;
    std::map<Direction, int> exits;

public:
    Room(std::string name, std::string description) : name(name), description(description) {};
    std::string getName() const;
    std::string getDescription() const;

    void addExit(Direction direction, int roomId);
    int getExit(Direction direction) const;
};
