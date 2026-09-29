#include<string>


class Room{
    private:
        std::string name;
        std::string description; 

    public:
        Room(std::string name, std::string description) : name(name), description(description) {};
        std::string getName() const;
        std::string getDescription() const;
};