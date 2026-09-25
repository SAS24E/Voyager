#pragma once
#include <iostream>
#include <string>

class Enemy {
    private:
        std::string name;
        int health;
        int power;

    public:
        Enemy();
        Enemy(const std::string &name, int health,int power);
        std::string getName() const;
        int getHealth() const;
        int getPower() const;
        void takeDamage(int damage);
        void giveDamage(int damage);
};