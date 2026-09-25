#include<string>


class Room{
    private:
        std::string name;
        std::string description;

    public:
        Room(std::string name, std::string description);
        std::string getName();
        std::string getDescription();
    public:

};