

#include "Enemy.h"
Enemy::Enemy() : name("Unknown"), health(0), power(0) {};

Enemy::Enemy(const std::string &name, int health, int power) {
    this->name = name;
    this->health = health;
    this->power = power;
}

std::string Enemy::getName() const {
    return name;
}

int Enemy::getHealth() const {
    return health;
}

void Enemy::takeDamage(int damage) {
    health -= damage;
}
void Enemy::giveDamage(int damage) {
    health += damage;
}
int Enemy::getPower() const{
    return power;
}